#include<iostream>;
#include<ctime>;
#include<conio.h>;
#include<stdio.h>;
using namespace std;



int sizeof()
{
	setlocale(LC_ALL, "Rus");
	int value;
	cout << "Memory size (byte) of int: " << sizeof(value) << endl;
	cout << "Memory size (byte) of short int: " << sizeof((short int)value) << endl;
	cout << "Memory size (byte) of long int: " << sizeof((long int)value) << endl;
	cout << "Memory size (byte) of float: " << sizeof((float)value) << endl;
	cout << "Memory size (byte) of double: " << sizeof((double)value) << endl;
	cout << "Memory size (byte) of long double: " << sizeof((long double)value) << endl;
	cout << "Memory size (byte) of char: " << sizeof((char)value) << endl;
	cout << "Memory size (byte) of bool: " << sizeof((bool)value) << endl;
	return 0;
}