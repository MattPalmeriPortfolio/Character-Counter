#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

//main
int main()
{
	using namespace std;
	ifstream tested("explore.txt");
	//initialize variables
	int totalCount(0), spaceCount(0), letterCount(0);
	char next;
	//begin analysis
	tested.get(next);
	while (!(tested.eof()))
	{
		totalCount++;
		if (isspace(next))
			spaceCount++;
		else if (isalpha(next))
			letterCount++;
		tested.get(next);
	}
	cout << "Total characters: " << totalCount << endl
		<< "Whitespace characters: " << spaceCount << endl
		<< "Letter characters: " << letterCount << endl;
	return 0;
}
