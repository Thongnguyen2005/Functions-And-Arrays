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
 * FUNCTION SearchBalance
 * -----------------------------------------------------------------------------
 * 		This function takes parameters of option number, array of balances,
 * 		and array size
 *
 * 	  ==> Returns: indexPosition
 ******************************************************************************/
int SearchBalance(int optionNum,	   		// IN - the option number (1 or 2)
				  const float arrBalance[], // IN - array of balances
				  const int AR_SIZE)  		// IN - array size
{
	int index;
	int positionIndex;

	index = 0;
	positionIndex = 0;

	if (optionNum == 1) // Find larger balance
	{
		for(index = 1; index < AR_SIZE; index++)
		{
			if(arrBalance[index] > arrBalance[positionIndex])
			{
				positionIndex = index;
			}

		}
	}
	else // Find smaller balance
	{
		for(index = 1; index < AR_SIZE; index++)
		{
			if(arrBalance[index] < arrBalance[positionIndex])
			{
				positionIndex = index;
			}
		}
	}

	return positionIndex; // Index position of larger/smaller position
}



