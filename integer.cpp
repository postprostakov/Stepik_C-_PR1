#include<iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int value = -127;
	int temp;
	int placeCount, k;
	unsigned int order = 32;
	unsigned int mask = 1 << order - 1;
	k = 0;
	if (value < 0)
	{
		k = 1;
	}
	temp = value;
	do
	{
		placeCount = temp / 2;
		temp = placeCount;
		k = k + 1;
	} while (abs(placeCount) > 0);
	cout << "Significant digits: " << k << endl;
	for (int i = 1; i <= order; i++)
	{
		putchar(value & mask ? '1' : '0');
		value <<= 1;
		if (i == 1)
		{
			putchar(' ');
		}
		if (i == (order - k))
		{
			putchar(' ');
		}
	}
}
