/* 
ZitoFizzBuzz.cpp
Samuel Zito
5/22/2022
This is solution to a simple FizzBuzz problem. 

Write a program that prints the numbers from 1 to 100 and for multiples of '3' print “FIZZ” instead of the number and for the multiples of '5' print “BUZZ”.
   In this program, I print numbers 1 to 100 and for multiples of 3 the code outputs "FIZZ" and for multiples of 5 it prints out "BUZZ". 
   But for numbers divisble by both (like multiples of 15) the code prints out "FIZZBUZZ".

*/

#include <iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 100; i++) //runs a loop from 1 to 100
	{
		if (i % 15 == 0) //when 'i' mod 15 is equal to 0 the output is "FIZZBUZZ" 
			cout << "FIZZBUZZ" << endl;
		else if (i % 3 == 0) //when 'i' mod 3 is equal to 0 the output is "FIZZ"
			cout << "FIZZ" << endl;
		else if (i % 5 == 0) //when 'i' mod 5 is equal to 0 the output is "BUZZ"
			cout << "BUZZ" << endl;
		else //if non of the other if conditions are met, 'i' is outputed
		cout << i << endl; 
	}
	return 0;
}