// StoryProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>// allows sleep and stuff
#include <string>//like import
using namespace std;

int main()
{
	
	
	string student;
	string wilsonInsult = "Doghouse";
	cout << "please enter a name:" << endl;
	cin >> student;
	cout << "Once upon a time there was a biolgy teacher named Jamie Wilson." << endl;
	Sleep(1000);
	cout << "He worked at a Tobacco farm," << endl;
	Sleep(1000);
	cout << "and he taught biology at fhs." << endl;
	Sleep(1000);
	cout << "One day,There was a student named, " << student << " who was jealous because he was in Mrs.Vadens class." << endl;
	Sleep(1000);
	cout << student << " walked over to Mr.Wilson and said," << endl;
	Sleep(1000);
	cout << "'Jamie is a girls name.'" << endl;
	Sleep(1000);
	cout << "Mr Wilson looked " << student << " dead in the eye and said:" << endl;
	Sleep(1500);
	cout << wilsonInsult  << endl;
	Sleep(1500);
	cout << student << " was destoryed by mr wilsons roast and was burnt to a crisp." << endl;

	return 0;

}

