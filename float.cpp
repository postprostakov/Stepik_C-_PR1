#include<iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	unsigned int order = 32;
	unsigned int mask = 1 << order - 1;
	union {
		int tool;
		float numb_f = -2.718;
	};

	cout << "Decimal system: " << numb_f << endl;


	cout << "IEEE-754 Standart: ";
	for (int i = 1; i <= order; i++)
	{
		putchar(tool & mask ? '1' : '0');
		tool <<= 1;
		if (i == 1)
		{
			putchar(' ');
		}
		if (i == 9)
		{
			putchar(' ');
		}
	}
}
