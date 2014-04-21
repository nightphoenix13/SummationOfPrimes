// Written by Zack Phoenix
// Project Euler Problem #10
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.
// WARNING! This program takes a long time to find the solution.

#include <fstream> // for using files
#include <iostream> // for cout and cin
#include <iomanip> // for formatting
#include <string> // for strings
#include <cstdlib> // for rand, srand, C-string conversions
#include <vector> // for vectors
#include <cctype> // for character functions
#include <cstring> // for C-strings
#include <ctime> // for using time/date functions
#include <algorithm> // for STL algorithms
#include "conio.h" 
using namespace std;

// method prototypes
bool primeCheck(long);

int main() // main method start
{
	// local variables
	long long total = 0;
	const long MAX = 2000000;

	for (long x = 2; x < MAX; x++)
	{
		if (primeCheck(x))
		{
			total += x;
			cout << x << " is prime. Current total: " << total << "\n";
		} // end if
	} // end for

	cout << "The sum of the prime numbers under two million is " << total;

	_getch();
	return 0;
} // main method end

// primeCheck method checks if number is prime
bool primeCheck(long num) // primeCheck method start
{
	// local variable
	bool prime = true;

	for (int x = 2; x < (num / 2) + 1 && prime; x++)
	{
		if (num % x == 0)
		{
			prime = false;
		} // end if
	} // end for

	return prime;
} // primeCheck method end