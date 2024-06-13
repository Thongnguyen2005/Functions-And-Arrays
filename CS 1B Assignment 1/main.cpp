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
 * Functions and Arrays
 * -----------------------------------------------------------------------------
 * This program reads in a set of people's data from input file (InFile.txt)
 * including:
 * 	  - name
 * 	  - ID
 * 	  - balance
 * Then find the larger & smaller balance, sum & average of all balances,
 * person's information.
 * Then output them in output file (OFile.txt)
 * -----------------------------------------------------------------------------
 * INPUT:
 *    inputFile      : input file's name
 *    outputFile 	 : output file's name
 *    optionNum      : chosen option number
 *    personName	 : person finding name
 *
 * OUTPUT: This program will output:
 *    personName	 : person finding name
 *
 *------------------------------------------------------------------------------
 * EXAMPLE INPUT / OUTPUT
 * What input file would you like to use?  InFile.txt
 * What output file would you like to use? OFile.txt
 *
 * MENU OPTIONS
 *
 * 1 - Find the larger balance
 * 2 - Find the smaller balance
 * 3 - Obtain the sum of all balances
 * 4 - Obtain the average of all balances
 * 5 - Find person
 * 0 - Exit
 * Enter an option (0 to exit): 1
 *
 * Finding the larger balance...
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 2
 *
 * Finding the smaller balance...
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 3
 *
 * Obtaining the sum of all balances...
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 4
 *
 * Obtaining the average of all balances...
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 5
 *
 * Who do you want to search for (enter done to exist): Steve Woolston
 * Found.
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 5
 *
 * Who do you want to search for (enter done to exist): Jacques Rousseau
 * Jacques Rousseau was not found.
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 5
 *
 * Who do you want to search for (enter done to exist): Chris Carroll
 * Found.
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 5
 *
 * Who do you want to search for (enter done to exist): Pete McBride
 * Found.
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 5
 *
 * Who do you want to search for (enter done to exist): Jean Rousseau
 * Found.
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 5
 *
 * Who do you want to search for (enter done to exist): Florence Cyr
 * Florence Cyr was not found.
 *
 * <redisplay menu>
 * Enter an option (0 to exit): 0
 *
 * Thank you for using my program.
 ******************************************************************************/

int main()
{
	/***************************************************************************
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the lab
	 *
	 * -------------------------------------------------------------------------
	 * INPUT & OUTPUT - USED FOR INPUT AND OUTPUT PROMPTS
	 * -------------------------------------------------------------------------
	 * PROMPT_FILE    : the column width of input prompt asking for input
	 * 					& output files
	 * PROMPT_SUM_AVG : the column width of output of sum or average
	 *
     * -------------------------------------------------------------------------
	 * PROCESSING - USED TO ACCESS ARRAY
	 * -------------------------------------------------------------------------
     * ARRAY_SIZE : size of arrays (all 3 arrays should have same size)
     *
	 **************************************************************************/

	// OUTPUT - USED FOR CLASS HEADING
	const string PROGRAMMER = "Thong Nguyen";
	const string CLASS      = "CS1B";
	const string SECTION    = "M T W TH: 5pm";
	const int    LAB_NUM    = 1;
	const string LAB_NAME   = "Functions and Arrays";

	// INPUT - USED FOR PROMPTS
	const int PROMPT_FILE = 40;
	const int PROMPT_SUM_AVG = 9;

	// PROCESSING - USED AS LOOP CONTROL VARIABLE
	const int ARRAY_SIZE = 10;

	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	ifstream fin;						// OUT - output file
	ofstream fout;						// OUT - output file
	string   arrayNames[ARRAY_SIZE];	// IN - array of names
	int		 arrayIDs[ARRAY_SIZE];		// IN - array of IDs
	int		 optionNum;					// IN - chosen option number (0-5)
	int		 indexPosition;				// IN - person index position
	float 	 arrayBalances[ARRAY_SIZE];	// IN - array of balances
	string 	 personName;				// IN - person finding name
	string 	 inputFile;					// IN - input file's name
	string 	 outputFile;				// IN - output file's name


	/***************************************************************************
	 * OUTPUT - Class Heading
	 **************************************************************************/
	OutputClassHeader(PROGRAMMER, CLASS, SECTION, LAB_NUM, LAB_NAME);


	cout << left;
	cout << setw(PROMPT_FILE) << "What input file would you like to use?";
	getline(cin, inputFile);

	cout << setw(PROMPT_FILE) << "What output file would you like to use?";
	getline(cin, outputFile);

	// Open input and output files
	fin.open(inputFile);
	fout.open(outputFile);

	/***************************************************************************
	 * OUTPUT - Option Menu
	 **************************************************************************/
	cout << endl;
	cout << "MENU OPTIONS" << endl;

	cout << endl;
	cout << "1 - Find the larger balance" 			 << endl;
	cout << "2 - Find the smaller balance" 			 << endl;
	cout << "3 - Obtain the sum of all balances" 	 << endl;
	cout << "4 - Obtain the average of all balances" << endl;
	cout << "5 - Find person"						 << endl;
	cout << "0 - Exit"								 << endl;

	// Read input file, array of names, IDs, balances, and array size
	ReadUserInfo(fin, arrayNames, arrayIDs, arrayBalances, ARRAY_SIZE);

	/***************************************************************************
	 * INPUT - Read option number from user
	 **************************************************************************/
	cout << "Enter an option (0 to exit): ";
	cin >> optionNum;
	cin.ignore(1000, '\n');

	/***************************************************************************
	 * PROCESSING - Read option number and calculate to output information based
	 * on user's option until they enter 0
	 **************************************************************************/
	while(optionNum != 0)
	{
		if (optionNum == 1 || optionNum == 2) // Find larger or smaller balance
		{
			// Determine the index position
			indexPosition = SearchBalance(optionNum, arrayBalances, ARRAY_SIZE);

			fout << left;
			if (optionNum == 1)
			{
				// Output larger balance
				cout << endl;
				cout << "Finding the larger balance..." << endl;
				fout << "Larger Balance: " << endl;
			}
			else
			{
				// Output smaller balance
				cout << endl;
				cout << "Finding the smaller balance..." << endl;
				fout << "Smaller Balance: " << endl;
			}
			OutputUserInfo(fout, arrayIDs, arrayNames, arrayBalances,
						   indexPosition);
		}
		else if (optionNum == 3 || optionNum == 4) // Find sum or average of
												   // balances
		{
			if (optionNum == 3)
			{
				// Output sum of balances
				cout << endl;
				cout << "Obtaining the sum of all balances..." << endl;
				fout << "Sum of Balance ";
			}
			else
			{
				// Output average of balances
				cout << endl;
				cout << "Obtaining the average of all balances..." << endl;
				fout << "Average Balance ";
			}

			fout << "for all persons:" << endl
				 << "$";

			// Output sum or average
			fout << right << fixed << setprecision(2)
			     << setw(PROMPT_SUM_AVG)
				 << SumOrAverage(fout, optionNum, arrayBalances, ARRAY_SIZE)
			     << endl << endl;
		}
		else if (optionNum == 5)
		{
			/*******************************************************************
			 * INPUT - Read finding name
			 ******************************************************************/
			cout << endl;
			cout << "Who do you want to search for (enter done to exist): ";
			getline(cin, personName);
			indexPosition = SearchName(fout, arrayNames, ARRAY_SIZE, personName);

			// Determine whether finding name exists in input file
			if (indexPosition != -1)
			{
				cout << "Found." << endl;
				fout << "Search Name:" << endl;
				OutputUserInfo(fout, arrayIDs, arrayNames, arrayBalances,
							   indexPosition);

			}
			else
			{
				cout << personName << " was not found." << endl;
			}
		}
		/***********************************************************************
		 * INPUT - Read option number from user
		 **********************************************************************/
		cout << endl;
		cout << "<redisplay menu>" << endl;
		cout << "Enter an option (0 to exit): ";
		cin >> optionNum;
		cin.ignore(1000, '\n');
	}

	// Output thank you prompt
	cout << endl;
	cout << "Thank you for using my program.";

	// Reset fix and setprecision
	cout.unsetf(ios::fixed);
	cout << setprecision(6);

	// Close files
	fin.close();
	fout.close();

	return 0;
}
