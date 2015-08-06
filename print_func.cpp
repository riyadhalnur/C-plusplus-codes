/*
	print_func.cpp
	Description: Definitions for println() and print() functions
	Author: Riyadh Al Nur
*/

#include <iostream>
#include <cstring>
#include <cstdio>
#include "print.h"
using namespace std;

//begin println() function definitions
void println(bool b)
{
	if(b) cout << "true\n";
	else cout << "false\n";
}

void println(int i)
{
	cout << i << "\n";
}

void println(long i)
{
	cout << i << "\n";
}

void println(char ch)
{
	cout << ch << "\n";
}

void println(char *str)
{
	cout << str << "\n";
}

void println(double d)
{
	cout << d << "\n";
}

//begin print() function definitions
void print(bool b)
{
	if(b) cout << "true";
	else cout << "false";
}

void print(int i)
{
	cout << i;
}

void print(long i)
{
	cout << i;
}

void print(char ch)
{
	cout << ch;
}

void print(char *str)
{
	cout << str;
}

void print(double d)
{
	cout << d;
}