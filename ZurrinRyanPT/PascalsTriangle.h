
/// #class PascalsTriangle
/// #details write a program that will compute and store in a one dimensional array,
/// the values in Pascal's Triangle until the largest line to fit on a computer printout is generated.
/// Pascals Triangle is a triangular array of numbers composed of the coefficients in  the expansion
/// of (x + Y)^n for n=0,1,2,3 etc.
/// #author Ryan Zurrin
/// #Duedate   2/4/2021


#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>

typedef unsigned long long int uli;
static int place = 0;
const int MAX_SIZE = 528;
const int ROWS = 32;


class PascalsTriangle
{
public:
	// Constructor
	PascalsTriangle();

	void fillPascalsArray()const;
	void printPascalTriangle()const;
	static void printPlace();
	uli getValueAtIndex(int arrIndex)const;
	void arrayValueTest()const;

	// Destructor
	~PascalsTriangle();
private:
	/// <summary>
	/// The pascal array
	/// </summary>
	uli pascalArray[MAX_SIZE] = { 0 };

	/// <summary>
	/// A Pointer to array
	/// </summary>
	uli* pascalsPtr;

	/// <summary>
	/// increment the place value
	/// </summary>
	static void placeIncrease() { place += 1; }
	/// <summary>
	/// decrement the place value
	/// </summary>
	static void placeDecrease() { place -= 1; }

};

#endif // !TRIANGLE_H
