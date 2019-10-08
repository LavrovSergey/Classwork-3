#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int sum = 0;
	int maxi=0;
	setlocale (LC_ALL, "Russian");
	cout << "Введите размерность массива:" << endl;
	int a;
	cin >> a;
	while (a < 0) { 
		cout << "Ошибка. Должен быть больше 0."<<endl;
		cin >> a;
	}
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
	cout<<"Сума элементов массива до последнего положительного= "<<sum<<endl;
	int n1, n2;
	cout << "Введите интервал, и все числа, модуль которых попадает в него, удаляться. Массив сожметься и пустые ячеки заполняться нулями" << endl;
	cout << "От ";
	cin >> n1;
	cout << " До ";
	cin >> n2;
	for (int i=0;i<a;i++)
	{
		if (abs(mas[i]) > n1 && abs(mas[i]) < n2)
		{
			mas[i] = 0;
		}
		else(mas[i] = mas[i]);
	}
	
	for (int i = 0; i < a; i++) 
	{
		if (mas[i] == 0) 
		{
			for (int j = i; j < a - 1; j++) mas[j] = mas[j + 1];
			mas[a - 1] = 0;
		}
	}
	
		
	for (int i=0;i<a;i++)
	{
		cout << mas[i] << " ";
	}
	
	
	
	
	
	return 0;

} 
