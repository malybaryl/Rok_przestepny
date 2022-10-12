#include <iostream>

using namespace std;

int main()
{
	int data, zmiany, zmienna;
	zmienna = 0;

	cout << "Wprowadz rok:" << endl;
	cin >> data;

	if ((data % 4 == 0 && data % 100 != 0) || data % 400 == 0)
	{
		cout << "Rok " << data << " jest przestpny." << endl;
	
		for (int i = data; i >= 0; i = i - 4)
		{
			zmienna++;
		}
		cout << "Ilosc poprzednich rokow przestepnnych: " << zmienna << endl;
	}
	else
		cout << "Rok " << data << " nie jest przestepny.";
	return 0;
}		