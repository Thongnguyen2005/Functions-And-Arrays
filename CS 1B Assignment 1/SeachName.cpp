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
 * FUNCTION SearchName
 * -----------------------------------------------------------------------------
 * 		This function takes parameters of output file, array of names, array
 * 		size, and person's name
 *
 * 	  ==> Returns: indexPosition
 ******************************************************************************/
int SearchName(ofstream &outFile,		// OUT - output file
			   const string arrName[],	// IN - array of names
			   const int AR_SIZE,		// IN - array size
			   string name)				// IN - person's name
{
	int index;
	int positionIndex;

	positionIndex = -1;
	for(index = 0; index < AR_SIZE; index++)
	{
		if(arrName[index] == name)
		{
			positionIndex = index;
		}
	}

	return positionIndex;
}



