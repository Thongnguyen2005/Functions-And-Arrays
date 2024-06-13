/*******************************************************************************
 * AUTHOR	  	: Thong Nguyen
 * STUDENT ID   : 1291317
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS	  	: CS1B
 * SECTION	  	: M T W TH: 5pm
 * DUE DATE   	: 06/16/24
 ******************************************************************************/

#include "ASSIGNMENT1.h"
/*******************************************************************************
 * FUNCTION SumOrAverage
 * -----------------------------------------------------------------------------
 * 		This function takes parameters of output file, option number, array of
 * 		balances, and array size
 *
 * 	  ==> Returns: sum or average
 ******************************************************************************/
float SumOrAverage(ofstream &outFile,			// OUT - output file
				   int optionNum,				// IN - option number
				   const float arrayBalances[],	// IN - array of balances
				   const int AR_SIZE)			// IN - array size
{
	float sum;
	float average;
	int index;

	sum = 0;
	average = 0;

	// Looping through array of balances to calculate sum
	for(index = 0; index < AR_SIZE; index++)
	{
		sum += arrayBalances[index];
	}

	// Calculate average
	average = sum / AR_SIZE;

	if (optionNum == 3)
	{
		return sum;
	}
	else
	{
		return average;
	}
}




