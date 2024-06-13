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
					   const string NAME_LAB)   // IN - lab name
{
	cout << left;
	cout << left;
	cout << "******************************************************\n";
	cout << "* PROGRAMMED BY : " << NAME
		 << endl;
	cout << "* "	  		 << setw(14)<< "CLASS"    << ": " << CLASS_NAME
		 << endl;
	cout << "* "	         << setw(14)<< "SECTION"  << ": " << TIME
		 << endl;
	cout << "* ASSIGNMENT #" << setw(1) << NUM_LAB    << " : " << NAME_LAB
		 << endl;
	cout << "******************************************************\n\n";
	cout << right;
}

