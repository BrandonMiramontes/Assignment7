#include <iostream>
using namespace std;

int main()
{
	int row1, rowtotal = 4, plus, column;

	for (row1 = 0; row1 <= rowtotal; row1++)
	{
		for (column = rowtotal-row1; column >= 1; column--)
		{
			cout << " ";

		}
		
		for (plus = 1; plus <= 2 * row1-1; plus++)
		{
			cout << "+";
		}
		cout << endl;
	}

	for (row1=rowtotal-1; row1>=1;row1--)
	{
		for (column = 1; column <= rowtotal-row1; column++)
		{
			cout << " ";

		}

		for (plus = 1; plus <= 2 * row1 - 1; plus++)
		{
			cout << "+";
		}

		cout << endl;
	}
}
