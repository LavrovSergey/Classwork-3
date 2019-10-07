#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int maxi=0;
	setlocale (LC_ALL, "Russian");
	cout << "Введите размерность массива:" << endl;
	int a;
	cin >> a;
	int* mas = new int[a];
	cout << "Заполните массив" << endl;
	for (int i = 0; i < a; i++)
	    {
		cout << "[" << i + 1 << "]" << ":";
		cin >> mas[i];
	    }
	int max = mas[0];
	for (int i = 0; i < a; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}

	}
	cout << "Максимальный елемент= " << max<<endl;
	for (int i = 0; i < a; i++)
	  {
		if (mas[i] > 0)
		{maxi = i;}
	  }
	for (int i=0; i<maxi; i++)
	     {
		sum=mas[i]+sum;
	     }
	cout<<"Сума елементов масива до последнего положительного= "<<sum;
		return 0;
} 
