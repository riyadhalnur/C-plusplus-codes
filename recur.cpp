#include <iostream>
using namespace std;

int factr(int n);
int fact(int n);

int main()
{
	int a;
	
	cout << "Enter an integer number: ";
	cin >> a;
	
	cout << "Using recursion: " << factr(a) << "\n";
	cout << "Using iteration: " << fact(a);
	
	return 0;
}

int factr(int n) // begin recursion function
{
	int answer;
	
	if(n==1) return(1);
	answer = factr(n-1)*n;
	return(answer);
}

int fact(int n) // begin iterative function
{
	int t, answer;
	
	answer = 1;
	for(t=1; t <= n; t++) answer = answer*(t);
	return(answer);
}