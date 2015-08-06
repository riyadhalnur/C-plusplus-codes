#include <iostream>
#include "print.h"
using namespace std;

unsigned char lrotate(unsigned char val, int n);
unsigned char rrotate(unsigned char val, int n);
void binary(long int u);

int main()
{
	char ch = 'R';

	println("Original value in binary: ");
	binary(ch);

	println("Shifted 8 times to the left: ");
	for(int i=0; i<8; i++) {
		ch = lrotate(ch, 1);
		binary(ch);
	}
	
	println("Shifted 8 times to the right: ");
	for(int i=0; i<8; i++) {
		ch = rrotate(ch, 1);
		binary(ch);
	}

	return 0;
}

unsigned char lrotate(unsigned char val, int n)
{
	unsigned int t;

	t = val;

	for(int i=0; i<n; i++) {
		t = t << 1;

		if(t & 256)
			t = t | 1;
	}

	return t;
}

unsigned char rrotate(unsigned char val, int n)
{
	unsigned int t;

	t = val;

	t = t << 8;

	for(int i=0; i<n; i++) {
		t = t >> 1;

		if(t & 128)
			t = t | 32768;
	}

	t = t >> 8;

	return t;
}

void binary(long int u)
{
	int t;

	for(t=128; t>0; t = t/2)
		if(u & t) cout << "1 ";
		else cout << "0 ";

		cout << "\n";
}