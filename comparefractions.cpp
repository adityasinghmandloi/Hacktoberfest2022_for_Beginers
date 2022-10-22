#include "stdafx.h"
#include <iostream>
using namespace std;
// Create the struct for the fractions
struct Fractions
{
	int topNumber;
	int bottomNumber;
	int wholeNumber;
};


int main ()
{
// Declare the variables
	Fractions firstNumber, secondNumber, thirdNumber, firstCommonDenominator,secondCommonDenominator;
	Fractions firstFraction, secondFraction, computedFirst, computedSecond, multiplicationTotalFirst, multiplicationTotalSecond;
	Fractions computedMultipliedWhole, computedMultipliedNumerator, computedAddition;
	char arithmeticOperation;
	float answersFirstFraction, answersSecondFraction;
	const int noResult = 0;
	const float converter = 0;

	
// Get user input

	cout << "Welcome to Teacher's Pet Software " <<endl <<endl;
	cout << "In this lesson we will be continuing working with fractions. " <<endl <<endl;
	cout << "Please enter the first numerator: ";
	cin >> firstNumber.topNumber;
	cout << "Please enter the first denominator: ";
	cin >> firstNumber.bottomNumber;
	cout << "Please enter the second numerator: ";
	cin >> secondNumber.topNumber;
	cout << "Please enter the second denominator: ";
	cin >> secondNumber.bottomNumber;
	cout << "Please enter either + to add the fractions or * to multiply them. " << endl;
	cin  >> arithmeticOperation;

// Create if statements to not allow for a zero denominator
// This sets the denominator to 1 if the user inputs 0 for it

if (firstNumber.bottomNumber == 0)
		firstNumber.bottomNumber = 1;
if (secondNumber.bottomNumber == 0)
		secondNumber.bottomNumber =1;

// Calculate the whole number portion of the fraction if there is one
	firstFraction.wholeNumber = firstNumber.topNumber  / firstNumber.bottomNumber ;
	secondFraction.wholeNumber = secondNumber.topNumber  / secondNumber.bottomNumber ;

// Calculate the remainder of interger division for the fraction if there is a whole number
	computedFirst.topNumber = firstNumber.topNumber % firstNumber.bottomNumber ;
	computedSecond.topNumber = secondNumber.topNumber % secondNumber.bottomNumber ;

// Work out the math if the user chooses ADDITION
	firstCommonDenominator.topNumber = firstNumber.topNumber * secondNumber.bottomNumber ;
	firstCommonDenominator.bottomNumber = firstNumber.bottomNumber * secondNumber.bottomNumber ;
	secondCommonDenominator.topNumber = secondNumber.topNumber * firstNumber.bottomNumber ;
	secondCommonDenominator.bottomNumber = secondNumber.bottomNumber * firstNumber.bottomNumber ;
	thirdNumber.topNumber = firstCommonDenominator.topNumber + secondCommonDenominator.topNumber ;
	thirdNumber.bottomNumber = firstCommonDenominator.bottomNumber ;
	computedAddition.wholeNumber = thirdNumber.topNumber / thirdNumber.bottomNumber ;
	computedAddition.topNumber = thirdNumber.topNumber % thirdNumber.bottomNumber ;


// Work out the math if the user chooses MULTIPLICATION

	multiplicationTotalFirst.topNumber = firstNumber.topNumber * secondNumber.topNumber ;
	multiplicationTotalSecond.bottomNumber = firstNumber.bottomNumber * secondNumber.bottomNumber ;
	computedMultipliedWhole.wholeNumber = multiplicationTotalFirst.topNumber / multiplicationTotalSecond.bottomNumber ;
	computedMultipliedNumerator.topNumber = multiplicationTotalFirst.topNumber % multiplicationTotalSecond.bottomNumber ;


// Figure the rules that determine the diplaying fraction with if / else
// And echo the fractions
// Determine if the whole number portion is greater than zero and if so it will be used

	// First fraction portion
	if (firstFraction.wholeNumber > 0 && computedFirst.topNumber  > 0)
		cout << "The first fraction is " << firstFraction.wholeNumber << "  " << computedFirst.topNumber << "/" 
		<< firstNumber.bottomNumber << endl << endl;
	else 
		if (firstFraction.wholeNumber == 0 && computedFirst.topNumber > 0)
			cout << "The first fraction is "  << computedFirst.topNumber << "/" << firstNumber.bottomNumber << endl << endl;
		else
			if (firstFraction.wholeNumber == 0 && computedFirst.topNumber == 0)
				cout << "The answer is " << noResult << endl << endl;
	// Second fraction portion
	if (secondFraction.wholeNumber > 0 && computedSecond.topNumber > 0)
		cout << "The second fraction is " << secondFraction.wholeNumber << "  " << computedSecond.topNumber << "/" 
		<< secondNumber.bottomNumber << endl << endl;
	else
		if (secondFraction.wholeNumber == 0 && computedSecond.topNumber > 0)
			cout << "The second fraction is " << computedSecond.topNumber << "/" << secondNumber.bottomNumber << endl << endl;
		else
			if (secondFraction.wholeNumber == 0 && computedSecond.topNumber == 0)
				cout << "The answer is " << noResult << endl << endl;

// Rules to determine if the fractions are equal, greater than, or less than
// use the converter to change the fractions into a float value for easier comparison
	answersFirstFraction = (computedFirst.topNumber + converter) / (firstNumber.bottomNumber + converter) ;
	answersSecondFraction = (computedSecond.topNumber + converter) / (secondNumber.bottomNumber + converter) ;

// If / else statements to determine if they fractions are equal, greater than, or less than
	if (answersFirstFraction == answersSecondFraction)
		cout << "The first fraction  " << computedFirst.topNumber << "/" << firstNumber.bottomNumber 
		<< " is equal to the second fraction " << computedSecond.topNumber << "/" << secondNumber.bottomNumber << endl << endl;
	else 
		if (answersFirstFraction > answersSecondFraction)
			cout << "The first fraction  " << firstFraction.wholeNumber  << "  " 
			<< computedFirst.topNumber << "/" << firstNumber.bottomNumber << " is greater than the second fraction " 
			<< secondFraction.wholeNumber  << "  " << computedSecond.topNumber << "/" << secondNumber.bottomNumber << endl << endl;
		else
			cout << "The first fraction  " << firstFraction.wholeNumber << "  " << computedFirst.topNumber << "/" 
			<< firstNumber.bottomNumber << " is less than the second fraction " << secondFraction.wholeNumber << "  " 
			<< computedSecond.topNumber << "/" << secondNumber.bottomNumber << endl << endl;

// Determine if the fraction can be reduced , if so display the reduced fraction
// First fraction
	if (firstFraction.wholeNumber == 0)
		cout << "The first fraction cannot be reduced, so the fraction is: " << firstNumber.topNumber << "/" 
		<< firstNumber.bottomNumber << endl << endl;
	else 
		cout << "The first fraction is reduced and  is: " << firstFraction.wholeNumber  << "  " 
		<< computedFirst.topNumber << "/" << firstNumber.bottomNumber << endl << endl;
	
// Second fraction
	if (secondFraction.wholeNumber == 0)
		cout << "The second fraction cannot be reduced, so the fraction is: " << secondNumber.topNumber << "/" 
		<< secondNumber.bottomNumber << endl << endl;
	else
		cout << "The second fraction is reduced and  is: " << secondFraction.wholeNumber << "  " << computedSecond.topNumber << "/" 
		<< secondNumber.bottomNumber << endl << endl;

// Display the results if the fractions are added or multiplied

	if (arithmeticOperation == '+')
		cout << "The addition of the first and the second fraction is: " << computedAddition.wholeNumber << " " 
		<< computedAddition.topNumber << "/" << thirdNumber.bottomNumber << endl << endl;
	else
		cout << "The multiplication of the first and second fraction is: " << computedMultipliedWhole.wholeNumber << " " 
		<< computedMultipliedNumerator.topNumber << "/" << multiplicationTotalSecond.bottomNumber << endl << endl;


return 0;
}
