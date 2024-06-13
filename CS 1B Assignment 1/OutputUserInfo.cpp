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
					int indexPosition)				// IN - person's index
													// position
{
	outFile << left
			<< setw(9) 	<< "ID #"
			<< setw(25) << "NAME"
			<< setw(11) << "BALANCE DUE"
			<< endl;

	outFile << left
			<< setw(9)  << "----"
			<< setw(25) << "--------------------"
			<< setw(11) << "-----------"
			<< endl;

	outFile << fixed << setprecision(2);
	outFile << left
			<< setw(9)  << arrayIDs[indexPosition]
			<< setw(25) << arrayNames[indexPosition]
		    << "$"
			<< right	<< setw(10) << arrayBalances[indexPosition]
			<< endl << endl;
}



