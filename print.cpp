/*
	Create overloaded print() and println() functions
	that display various types of data
	*/
#include <iostream>
using namespace std;

// println() function prototypes
void println(bool b);
void println(int i);
void println(long i);
void println(char ch);
void println(char *str);
void println(double d);

// print() function prototypes
void print(bool b);
void print(int i);
void print(long i);
void print(char ch);
void print(char *str);
void print(double d);

int main()
{
	println(true);
	println(10);
	println("This is a test");
	println('x');
	println(99L);
	println(145.2);

	print("Here are some values: ");
	print(false);
	print(' ');
	print(88);
	print(' ');
	print(100000L);
	print(' ');
	print(0.001);

	println("Done!");
	return 0;
}

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