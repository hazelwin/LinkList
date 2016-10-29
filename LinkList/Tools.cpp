#include"Tools.h"

#include<string>
#include<iostream>
#include<time.h>
#include<exception>
using namespace std;

namespace tools
{
	string pluralize( int n, string singular, string nonsingular )
	{
		return ( n == 1 ) ? singular : nonsingular;
	}

	int makeRandomValue(int lowerBound, int upperBound)
	{
		bool initialized = false;

		if ( !initialized )
		{
			srand(unsigned(time(0)));
			initialized = true;
		}

		if ( lowerBound > upperBound )
			throw exception("Empty Bound");

		int range = 1 + upperBound-lowerBound;
		return lowerBound + rand()%range;
	}

	int getNonNegativeInteger( string prompt )
	{
		return getBoundedInteger( prompt, 0, INT_MAX );
	}

	int getPositiveInteger( string prompt )
	{
		return getBoundedInteger( prompt, 1, INT_MAX );
	}

	void pause(string prompt)
	{
		cout << prompt;
		cin.ignore(999,'\n');
	}

	int getInteger(string prompt)
	{
		do
		{
			cout << prompt;

			int userInput;
			cin >> userInput;
			flushInput();
			if ( !cin.fail() )
				return userInput;
			cin.clear();
			flushInput();
			cout << "Invalid Integer Format, try again." << endl;
		} while (true);
	}

	int getBoundedInteger( string prompt, int lowBound, int highBound )
	{
		while (true)
		{
			int userInput = getInteger( prompt );
			if ( userInput >= lowBound && userInput <= highBound ) return userInput;
			cout << "Range Error: Value must be in range " << lowBound << ".." << highBound << '.' << endl;
		}
	}


	string getString(string prompt)
	{
		do
		{
			cout << prompt;

			string userInput;
			cin >> userInput;
			flushInput();
			if ( !cin.fail() )
				return userInput;
			cin.clear();
			flushInput();
			cout << "Invalid String Format, try again." << endl;
		} while (true);
	}

	bool getBool(string prompt)
	{
		do
		{
			char userInput = getChar(prompt);
			switch (userInput)
			{
			case 'Y': case 'y': return true;
			case 'N': case 'n': return false;
			}
			cout << "Please answer Y or N." << endl;
		} while (true);
	}

	string getLine(string prompt)
	{
		do
		{
			cout << prompt;

			string userInput;
			getline(cin,userInput);
			if ( !cin.fail() )
				return userInput;
			cin.clear();
			flushInput();
			cout << "Invalid String Format, try again." << endl;
		} while (true);
	}

	float getFloat(string prompt)
	{
		do
		{
			cout << prompt;

			float userInput;
			cin >> userInput;
			flushInput();
			if ( !cin.fail() )
				return userInput;
			cin.clear();
			flushInput();
			cout << "Invalid Float Format, try again." << endl;
		} while (true);
	}

	char getChar(string prompt)
	{
		do
		{
			cout << prompt;

			char userInput;
			cin >> userInput;
			flushInput();
			if ( !cin.fail() )
				return userInput;
			cin.clear();
			flushInput();
			cout << "Invalid Char Format, try again." << endl;
		} while (true);
	}

	void flushInput(void)
	{
		cin.ignore(999,'\n');
	}
} // namespace