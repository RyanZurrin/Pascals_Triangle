#include "PascalsTriangle.h"

/// <summary>
/// #brief constructor
/// </summary>
PascalsTriangle::PascalsTriangle()
{
	pascalsPtr = pascalArray;
}

 /// <summary>
 /// #brief copy constructor
 /// </summary>
PascalsTriangle::PascalsTriangle(const PascalsTriangle& p)
{
	pascalsPtr = p.pascalsPtr;
}

 /// <summary>
 ///  #brief move constructor
 /// </summary>
PascalsTriangle::PascalsTriangle(PascalsTriangle&& p) noexcept
{
	pascalsPtr = p.pascalsPtr;
}


/// <summary>
/// Fills the pascals array with 32 rows of values
/// </summary>
void PascalsTriangle::fillPascalsArray()const
{
	int line = 0;
	while (line < ROWS)
	{
		for (int pos = 0; pos <= line; pos++)
		{
			uli val = 1;
			for (int i = 0; i < pos; i++)
			{
				val = (val * (line - i)) / (i + 1);
			}
			pascalsPtr[place] = val;
			placeIncrease();
		}
		line++;
	}

}

/// <summary>
/// Prints the pascal triangle that is stored in the array.
/// </summary>
void PascalsTriangle::printPascalTriangle()const
{
	if (pascalsPtr[0]==0)
	{
		std::cout << "the pascal array has not been filled yet, please run method"
			 << " fillPascalsArray() before printing" << std::endl;
	}
	else
	{
		const int len = sizeof(pascalArray) / sizeof(pascalArray[0]);
		//std::cout << "array values: \n";
		for (int i = len-1; i >= 0; i--)
		{
			if (i == 0)
			{
				std::cout << pascalArray[i] << "\n";
			}
			else if (i == 1)
			{
				std::cout << pascalArray[i] << "\n";
			}
			else if (i == 2)
			{
				std::cout << pascalArray[i] << " ";
			}
			else if (pascalArray[i] == 1 && pascalArray[i - 1] == 1)
			{
				std::cout << pascalArray[i] << '\n';
			}
			else
				std::cout << pascalArray[i] << ' ';
		}
	}
}
/// <summary>
/// Prints out the value stored in the place variable.
/// </summary>
void PascalsTriangle::printPlace()
{
	std::cout << "place: " << place << std::endl;
}

/// <summary>
/// returns the value stored in the specified index of the pascal array.
/// !Does not print to screen!
/// </summary>
/// <param name="arrIndex">the index in the pascalArray to return.</param>
uli PascalsTriangle::getValueAtIndex(const int arrIndex)const
{
	return pascalsPtr[arrIndex];
}


void PascalsTriangle::arrayValueTest()const
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		std::cout << "index_" << i << " " << this->getValueAtIndex(i) << " ";
	}
}

/// <summary>
/// Finalizes an instance of the <see cref="PascalsTriangle"/> class.
/// </summary>
PascalsTriangle::~PascalsTriangle()
{
	pascalsPtr = nullptr;
	delete pascalsPtr;

}

