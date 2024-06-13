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
 * FUNCTION ReadUserInfo
 * -----------------------------------------------------------------------------
 * 		This function reads in users' info of name, id, and balance from input
 * 		file
 *
 * 	==> Return: Nothing
 ******************************************************************************/
void ReadUserInfo(ifstream &inputFile, 	// IN - input file of data
				  string arrName[],   	// IN - array of names
				  int arrID[],		  	// IN - array of IDs
				  float arrBalance[], 	// IN - array of balances
				  int AR_SIZE)		  	// IN - size of array
{
	int    index;
	int    id;
	float balance;
	string name;

	index = 0;

	while(inputFile && index < AR_SIZE)
	{
		//Read name
		getline(inputFile, name);
		arrName[index] = name;

		//Read id
		inputFile >> id;
		arrID[index] = id;

		//Read balance
		inputFile >> balance;
		arrBalance[index] = balance;

		inputFile.ignore(1000, '\n');
		index++;
	}
}

