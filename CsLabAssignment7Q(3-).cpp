#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getInput(string, string firstName, string lastName, string terminate, int age);
int printInput(string s, string firstName, string lastName, int age);

int getInput(string s, string firstName, string lastName, string terminate, int age)
{
	ofstream outfile;
	outfile.open("s.txt");

	while (terminate != "quit")
	{
		if (terminate != "quit")
		{

			cout << "What is your first name: ";
			cin >> firstName;
			outfile << " " << firstName;

			cout << "What is your last name: ";
			cin >> lastName;
			outfile << " " << lastName;

			cout << "What is your age: ";
			cin >> age;
			outfile << " " << age << endl;

			cout << "Type 'quit' if done or enter any key to continue ";
			cin >> terminate;
		}

		if (terminate == "quit")
		{
			cout << endl;
			outfile.close();
		}
	}
	return 1;
}

int printInput(string s, string firstName, string lastName, int age)
{
	ifstream infile("s.txt");

	if (infile)
	{
		cout << "File exists";
	}

	else
	{
		cout << "File doesnt exist";
	}

	while (infile >> firstName >> lastName >> age)
	{
		cout << firstName << " " << lastName << " " << age << endl;
	}

	return 2;
}

int main()
{
	int age{};
	string firstName, lastName;
	string terminate, s = "s.txt";

	getInput(s, firstName, lastName, terminate, age);
	printInput(s, firstName, lastName, age);

	return 0;
}