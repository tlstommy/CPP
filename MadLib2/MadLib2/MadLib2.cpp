// MadLib2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>// allows sleep and stuff
#include <string>//like import
#include <random>
using namespace std;

int main()
{
	random_device rd;
	#pragma region languageTypes
	string noun;
	string noun2;
	string noun3;
	string noun4;
	string noun5;
	string verb;
	string verb2;
	string verb3;
	string verb4;
	string verb5;
	string verb6; 
	string adjective;
	string adjective2;
	string adjective3;
	string adjective4;
	string adjective5;
	string name;
	string job;
	string insult;
	string place;
	string place2;
	string comeback;
	string bodypart;
	#pragma endregion
	
	
	cout << "enter a noun:" << endl;
	cin >> noun;
	cout << "enter a noun:" << endl;
	cin >> noun2;
	cout << "enter a noun:" << endl;
	cin >> noun3;
	cout << "enter a noun:" << endl;
	cin >> noun4;
	cout << "enter a noun:" << endl;
	cin >> noun5;
	cout << "enter a verb:" << endl;
	cin >> verb;
	cout << "enter a verb:" << endl;
	cin >> verb2;
	cout << "enter a verb:" << endl;
	cin >> verb3;
	cout << "enter a verb:" << endl;
	cin >> verb4;
	cout << "enter a verb:" << endl;
	cin >> verb5;
	cout << "enter a verb:" << endl;
	cin >> verb6;
	cout << "enter an adjective:" << endl;
	cin >> adjective2;
	cout << "enter an adjective:" << endl;
	cin >> adjective3;
	cout << "enter an adjective:" << endl;
	cin >> adjective4;
	cout << "enter an adjective:" << endl;
	cin >> adjective5;
	cout << "enter a name:" << endl;
	cin >> name;
	cout << "enter a job" << endl;
	cin >> job;
	cout << "enter an insult" << endl;
	cin >> insult;
	cout << "enter a place" << endl;
	cin >> place;
	cout << "enter a place" << endl;
	cin >> place2;
	cout << "enter a comeback" << endl;
	cin >> comeback;
	cout << "enter a bodypart" << endl;
	cin >> bodypart;



	cout << "Once upon a time there was a " << adjective << job << " named Jamie Wilson." << endl;
	Sleep(1000);
	cout << "He " << verb << " at a " << noun << " " + place << endl;
	Sleep(1000);
	cout << "and he " << verb2 << " at " << place2 << endl;
	Sleep(1000);
	cout << "One day, There was a " << noun2 << " named, " << name << " who was " << adjective << " because he was " << verb3 + " and a " + noun3 << " ." << endl;
	Sleep(1000);
	cout << name << verb3 << " over to Mr.Wilson and said," << endl;
	Sleep(1000);
	cout << insult << endl;
	Sleep(1000);
	cout << "Mr Wilson, " << verb4 << name << " dead in the " << bodypart << " and said:" << endl;
	Sleep(1500);
	cout << comeback << endl;
	Sleep(1500);
	cout << name << " was destoryed by mr wilsons " << adjective2 << noun4 << " and was " << verb5 << " to a " << noun5 << " ." << endl;
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

