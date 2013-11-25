/********************************************************  
 COSC 501  
 Lab 5 
 Elliott Plack  
 03 OCT 2013           Due date: 07 OCT 2013  
 Problem: Write a function that asks the user for 10
	inputs, and then return the sum of them. Then write
	another function that asked for an integer, and then
	computes the sum of 0 + all integers up to the input.
 Algorithm: First ask the user if they want to perform
	the first or second function. For the first, make a
	for loop that will iterate through inputs until 10
	are received, all the while using adding the sum to
	the previous input. Return that value and go back to
	the main function. For the other function, input a
	integer and then add the value of each integer before
	it, sequentially. Return that value to the main.
********************************************************/

#include <iostream>
using namespace std;

void ten_sums(); // first function. since the calculation and output happens here, no parameters from main
void sequential_N_sums(); // second function

int main()
{
	char funct_choice; // character that will determine program route

	cout << "This program performs two functions.\n";
	cout << "Select from one of two functions below\n";
	cout << "   1 ... To get the sum of ten numbers\n";
	cout << "   2 ... To get the sum of N sequential integers\n";
	cout << "To quit, press any other key.\n";
	cout << "Please select a function: ";
	cin >> funct_choice;

	switch(funct_choice)  // switch case menu to call functions
	{
	case '1':
		ten_sums();
		break;
	case '2':
		sequential_N_sums();
		break;
	default:
		break;
	}
	return 0;
}

void ten_sums()
{
	int i; // counter
	float input(0), sum(0); // values to sum

	cout << "\n\nThis function calculates the sum of any ten numbers.\n"
	     << "Enter ten numbers followed by enter.\n";

	for (i = 0; i < 10; i++)
	{
		cin >> input; // get input from keyboard
		sum += input; // sum is the input + sum
	}
	cout << "\nThe sum of the values entered is: "
	     << sum << endl;
}

void sequential_N_sums()
{
	int i; // counter
	int input(0), sum(0); // values to sum and inputs

	cout << "\n\nThis function calculates the sum all integers between\n"
		 << "the input and 0 (sequentially). Enter a positive integer: ";
	cin >> input;
	input = abs(input);

	for (i = 0; i <= input; i++)
	{
		sum += i;
		//cout << i << endl; //debug output to check if the loop is working
	}
	cout << "\nThe sum of all integers between 0 and " << input
		<< " is: " << sum << endl;
	return;
}