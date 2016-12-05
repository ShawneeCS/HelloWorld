// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

int yearsToOneHundred(int age)
{
	return 100 - age;
}
int main()
{
	std::cout << "How old are you?" << std::endl;
	
	int age;		//	null value
	std::cin >> age;

	std::cout << "You have " << yearsToOneHundred(age) << " years before you are 100.";
	
	int end;
	std::cin >> end;

	return 0;
}
