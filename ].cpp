// guess game.cpp : Defines the entry point for the console application.
//

#include<stddef.h>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));
	int input;
	int Guess = 1 + (rand() % 100);
	cout << "guess the number between ( 1 to 100 ) "<< endl;
	cin >> input;

	while (input != Guess)
	{
    if (input > 100)
    {
	cout << "           -______-      " << endl;
	cout << "enter a number between (((1 to 100 )))" << endl;
    }
        else if (input > Guess)
		{
			cout << "--------stupid------" << endl;
			cout << "---------------------------" << endl;
			cout << " the secret number is lower" << endl;
    	}

       else if (input < Guess)
		{
			cout << "--------stupid------" << endl;
			cout << "---------------------------" << endl;
			cout << " the secret number is higher " << endl;
		}

		cout << "-----------------------------------------" << endl;
		cout << "try again\ttry another number between ( 1 to 100 )" << endl;

		cin >> input;
	}
		cout << " congratulatoins" << endl;
		
	system("pause");
	return 0;
}

