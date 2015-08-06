/*
	Guess the magic number
	Author: Riyadh Al Nur
	Date Modified: 05/10/2010
*/
#include <iostream> // default I/O for C++
#include <cstdlib> // standard C library for rand() and srand() function
#include <time.h> // standard time() function and data type time_t
using namespace std;

void welcome(); // prototype for welcome function

const int LOW = 0;
const int HIGH = 1000;

int main()
{
	int mnum, gnum, tries = 0, score = 100; // declare integer variables
	time_t seconds;
	
	time(&seconds);
	srand((unsigned int) seconds);
	
	mnum = rand() % (HIGH - LOW + 1) + LOW;

	welcome(); // display welcome message

	do {
		cout << "Enter your guess: ";
		cin >> gnum; // get the input number
		tries++; // increment the total number of times tried

		if(gnum == mnum) { // if guess is equal to the magic number
			cout << "You've guessed the right number" << "\n";
			cout << "Number of tries: " << "\n" << tries; // show number of times tried
			if(score < 100) { // if score less than 100 than increment score by 1
				score++;
			}
			else { // if answer right on first guess than keep the score unchanged
				score = 100;
			}
			cout << "Score: " << "\n" << score; // show final score
			cout << "Game Over!";
		}
		else { // if guess is not equal to the magic number
			cout << "You've guessed the wrong number.\n";
			if(gnum > mnum) cout << "Your guess is too high\n"; // check if guessed number is greater than magic number
			else cout << "Your guess is too low\n"; // check if guessed number is less than magic number
			cout << "Number of tries: " << "\n" << tries; // show number of times tried
			score--; // decrement score by 1 for the wrong answer
			cout << "Score: " << "\n" << score; // show score
		}
	} while(gnum != mnum); // keep running program until user has the right guess
	
	return 0; // return a no error value
}

void welcome() { // begin welcome function
	println("****************************");
	println("*  Guess the magic number  *");
	println("*  Hint: 0-1000            *");
	println("****************************");
}