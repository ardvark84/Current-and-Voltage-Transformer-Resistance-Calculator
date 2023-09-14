// HW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Riley Earles

#include <iostream>
using namespace std;

void menu()
{
	cout << "********Main Menu********" << endl;
	cout << "Press 1 to enter Current Transformer Resistance Calculator" << endl;
	cout << "Press 2 to enter Voltage Transformer Resistance Calculator" << endl;
	cout << "Press 3 to exit program" << endl;
	cout << "*************************" << endl;
}

int main()
{
	float option;
	int loopnum, ohmVal;
	float totalres = 0.0;
	int burdenMaxV = 25, burdenMaxI = 25;
	//other variables here
	do
	{
		menu();
		cout << "choose an option 1-3" << endl;
		cin >> option;
		int num = static_cast<int>(option);
		system("cls");
		while (option != num)
		{
			cout << "please enter a valid option!" << endl;
			menu();
			cin >> option;			
		}
		switch (num)
		{
		case 1:
			// put current transformer program here
			cout << "pleaser enter the number of devices you are going to add: ";
			cin >> loopnum;
			if (loopnum > 0)
			{
				cout << "please enter the Burden in Ohms for each device. " << endl;
				for (int i = 0; i < loopnum; i++)
				{
					cin >> ohmVal;
					totalres = totalres + ohmVal;
				}
				cout << "total resistance is : " << totalres << endl;
				if (totalres >= burdenMaxI)
				{
					cout << "Unfortunately the burden of the devices is too large." << endl;
					cout << "Please lower the amount of devices or decrease the resistance." << endl;
				}
				else
					cout << "The burden is within acceptable range." << endl;
			}
			else
				cout << "please enter an acceptable number" << endl;
			break;
		case 2:
			//put voltage transformer program here
			cout << "pleaser enter the number of devices you are going to add: ";
			cin >> loopnum;
			if (loopnum > 0)
			{
				cout << "please enter the Burden in Ohms for each device. " << endl;
				for (int i = 0; i < loopnum; i++)
				{
					cin >> ohmVal;
					totalres = totalres + (1.0 / ohmVal);
				}
				totalres = 0 + (1.0 / totalres);
				cout << "total resistance is : " << totalres << endl;
				if (totalres <= burdenMaxV)
				{
					cout << "Unfortunately the burden of the devices is not enough" << endl;
					cout << "Please lower the amount of devices or increase the resistance." << endl;
				}
				else
					cout << "The burden is within acceptable range." << endl;
			}
			else
				cout << "please enter an acceptable number" << endl;
			break;
		}
	}
	while (option != 3);
	cout << "thanks for stopping by!" << endl;
	return 0;
}