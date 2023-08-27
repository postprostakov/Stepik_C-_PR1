#include<iostream>;
using namespace std;

int double()
{
	setlocale(LC_ALL, "Rus");
	unsigned int order = 64;
	unsigned int mask = 1 << order - 1;
	union {
		int arr[2];
		double numb_f = -228;
	};
	cout << "Decimal sustem: " << numb_f << endl;
	cout << "IEEE-754 Standart: ";
	for (int n = 1; n >= 0; n--)
	{
		for (int i = 1; i <= order / 2; i++)
		{
			putchar(arr[n] & mask ? '1' : '0');
			arr[n] <<= 1;
			if ((n == 1) && (i == 1))
			{
				putchar(' ');
			}
			if ((n == 1) && (i == 12))
			{
				putchar(' ');
			}
		}
	}
}



