/*******************************************************************************
 * AUTHOR	  	: Thong Nguyen
 * STUDENT ID   : 1291317
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS	  	: CS1B
 * SECTION	  	: M T W TH: 5pm
 * DUE DATE   	: 06/16/24
 ******************************************************************************/

#ifndef ASSIGNMENT1_H_
#define ASSIGNMENT1_H_

#include <iostream>    /* cout, & cin 			  */
#include <iomanip>     /* setw, fix, setprecision */
#include <string>	   /* string 				  */
#include <fstream>     /* ifstream, ofstream      */
using namespace std;

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
				  int AR_SIZE);		  	// IN - size of array

/*******************************************************************************
 * FUNCTION OutputClassHeader
 * -----------------------------------------------------------------------------
 * 		This function takes parameters of name, class, time session
 * 			and output the formatted class header
 *
 * 	  ==> Returns nothing - Outputs the class heading.
 ******************************************************************************/
void OutputClassHeader(const string NAME,		// IN - programmer's name
					   const string CLASS_NAME, // IN - class's name
					   const string TIME,		// IN - class's period
					   const int NUM_LAB,		// IN - lab number
					   const string NAME_LAB);  // IN - lab name

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
				  const int AR_SIZE);  		// IN - array size

/*******************************************************************************
 * FUNCTION OutputUserInfo
 * -----------------------------------------------------------------------------
 * 		This function takes parameters of output file, array of IDs, names,
 * 		balances, and person's index position and output their information
 *
 * 	  ==> Returns nothing - Outputs user info.
 ******************************************************************************/
void OutputUserInfo(ofstream &outFile,				// OUT - output file
					const int arrayIDs[],			// IN - array of IDs
					const string arrayNames[],		// IN - array of names
					const float arrayBalances[],	// IN - array of balances
					int indexPosition);				// IN - person's index
													// position

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
				   const int AR_SIZE);			// IN - array size

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
			   string name);			// IN - person's name

#endif /* ASSIGNMENT1_H_ */
