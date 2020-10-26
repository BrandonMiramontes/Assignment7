#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	string firstName, lastName;
	int age;

	string terminate;

	ofstream outfile;
	outfile.open("data_assingment-7.txt");

	while (terminate != "quit")
	{
		if (terminate!="quit")
		{


			cout << "What is your first name: ";
			cin >> firstName;
			outfile << " " << firstName;

			cout << "What is your last name: ";
			cin >> lastName;
			outfile << " " << lastName;

			cout << "What is your age: ";
			cin >> age;
			outfile << " " << age<<endl;

			cout << "Type 'quit' if done or enter any key to continue ";
			cin >> terminate;
		}

			if(terminate=="quit")
			{
				cout << endl;
				outfile.close();
			}
	}

	ifstream infile("data_assingment-7.txt");

	while (infile >> firstName >> lastName >> age)
	{
		cout << firstName << " " << lastName << " " << age << endl;
	}
	
	return 0;
}
