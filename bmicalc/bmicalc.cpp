// bmicalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
int main()
{
	float BMI;
	float weight;
	float height;
	int choice;
	std::cout << "This is a BMI calculation program. would you like to use (1)Imperial or (2)Metric?\n";
	std::cin >> choice;
	if (choice == 1) // imperial
	{
		std::cout << "please enter your weight in pounds:";
		std::cin >> weight;
		std::cout << "now, please enter your height in inches:";
		std::cin >> height;
		weight = weight * 703;// multiply by 703
		height = pow(height, 2);//(base,power)
		BMI = weight / height;//divide for ans
		std::cout << "Your body mass index(BMI) is :" << BMI << std::endl;

	}
	if (choice == 2) // metric
	{
		std::cout << "please enter your weight in kilograms:";
		std::cin >> weight;
		std::cout << "now, please enter your height in meters:";
		std::cin >> height;
		height = pow(height, 2);//(base,power)
		BMI = weight / height;//divide for ans
		std::cout << "Your body mass index(BMI) is :" << BMI << std::endl;
	}
	
	system("pause");//prevents from closing
	return 0;
}

