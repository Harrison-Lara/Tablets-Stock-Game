// Harrison Lara
// April 23, 2017
// Program 6 

#include<iostream>
#include<cmath>
using namespace std;


int tablets(int tab1); // tablet function recursion delcaration

int main()
{
	cout << "Welcome to the Tablet Stock Game" << endl; // greet user
	
	char input;
	bool indicator = true; // create variable to hold while loop true
	while (indicator) // while loop cycles through till false to end program
	{
		int number1; // variabl holder for tablet function placement
		cout << "Please enter a number of tablets between 1 and 10,000" << endl; // ask user to input a value in range
		cin >> number1; // take in value from user
	
		if (number1 > 0 && number1 <= 10000 ) // range of variable to use function
		{
			for (int i = 0; i < 8; i++) // counts turns, cant exceed 21 turns
			{
				tablets(number1); // call recursion function to loop till goal hit (18) or all turns used (21)
				number1++; // increment number1
				continue; 
			}
			cout << "\nNo solution found, max limit of 21 turns." << endl; // goal not hit, all 21 turns used 
			cout << "Would you like to play again? (y/n): "; // ask user to play again
			
			cin >> input; // take input

			if (input == 'y') //if user enters y, program restarts
			{
				continue;
			}
			else if (input == 'n') //if user enters n, program ends
			{
				cout << "Thanks for playing!\n" << endl; // goodbye message
				break;
			}
			else
			{
				cout << "\nInvalid Entry. Exiting program...\n " << endl; // invalid number entered
				exit(1); // exits program
			}
		}
		else
		{
			cout << "\nInvalid Entry\n " << endl; // invalid number entered
			continue; // loops again and asks for new value from user
		}
		
	}
}

int tablets(int tab1)
/* this function takes in a value from the user, checks for odd (if odd, can be divided in half),
checks for multiple of 3 (if so, adds 1/3 of tablet count to current count), allows user to add
an extra 24 tablets if they choose too, goal value is 18 tablets */
{
		if (tab1 % 2 != 0) // checks to see if value is odd
		{
			cout << "Odd amount of tablets. "; // odd value message
			tab1++; // increment tablet count by 1 

			tab1 = (tab1 * .5);
			//cout << "\nHalf of our tablets turned in. Currently left: " << tab1 << "\n" << endl;
			cout << "Divide by 2 to get: " << tab1 << endl;
			
			return tablets(tab1); // return new total
		}
		else if (tab1 < 0 || tab1 > 10000) // if the tablet count gets out of range, report issue and return total
		{
			cout << "Tablet count out of range." << endl;
			
			return tablets(tab1); // return total with error message
		}
		else if (tab1 % 3 == 0) // checks to see if value is divisible by 3 
		{
			cout << "With " << tab1 << " tablets. ";
			int tab2 = tab1; // create place holder variable
			double tabx = (tab2 * .33); // formula that takes current total times 1/3
			tab1 = (tab1 + tabx); // adds original total with formula value
			cout << "Add a third to get: " << tab1 << endl;
		
			return tablets(tab1); // return total
		}
		else if (tab1 == 18) // if tablet count hits 18, tell user they have won
		{
			cout << "You won!" << endl; // winner message
			cout << "You have 18 tablets!" << endl;
		
			return tablets(tab1); // return total
		}
		else // if 'm' is entered, adds on 24 more tablets
		{
			cout << "With " << tab1;
			tab1 = (tab1 + 24); // add 24 tablets to current total
			cout << ". Add 24 more to get: " << tab1 << endl;
			
			return tab1; // return new total
		}
		return 0; // return for end of function
}

	