#ifndef TOOLS
#define TOOLS

#include<string>
using namespace std;

namespace tools
{
	int getInteger(string prompt);
	string getString(string prompt);
	float getFloat(string prompt);
	char getChar(string prompt);
	string getLine(string prompt);
	bool getBool(string prompt);

	int getBoundedInteger( string prompt, int lowBound, int highBound );
	int getPositiveInteger( string prompt );
	int getNonNegativeInteger( string prompt );

	int makeRandomValue(int lowerBound, int upperBound);

	string pluralize( int n, string singular, string nonsingular );

	void pause(string prompt = "Press ENTER to continue...");
	void flushInput(void);
}

#endif