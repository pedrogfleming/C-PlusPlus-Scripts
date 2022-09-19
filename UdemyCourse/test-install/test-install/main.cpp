#include <iostream>
#include <string>
#include "main.h"
using namespace std;

int main()
{
	cout << boolalpha;
#pragma region Hello world
	//cout << "Hello World" << endl;
	//string myName = "pedro";
	//cout << isRaining << endl;
	//cout << isRaining << endl;
#pragma endregion
#pragma region Boolean expressions to the console
	//bool isRaining = 0;
	//int a = 1;
	//int b = 5;
	//bool areEqual = a == b;
	//cout << (a < b) << endl;
	//cout << areEqual << endl;
#pragma endregion
#pragma region Constants
	//const double MY_PI = 3.14159;
#pragma endregion
#pragma region Input from console
	//string fullname;
	//cout << "Please enter your name" << endl;
	////cin >> fullname;
	////cout << fullname;
	//getline(cin, fullname);
	//cin.get();
	//cin.get();
	//cin.get();
	//cout << fullname;
	//int age;
	//cout << "Please enter your age" << endl;
	//cin >> age;

	//cout << age << endl;
#pragma endregion
#pragma region Average of Three
	//const int totalNumbers = 3;
	//cout << "Number one" << endl;
	//int numberA;
	//cin >> numberA;
	//cout << "Number two" << endl;
	//int numberB;
	//cin >> numberB;
	//cout << "Number three" << endl;
	//int numberC;
	//cin >> numberC;
	//double average = (numberA + numberB + numberC) / (double)totalNumbers;
	//cout << "The average is " << average;
#pragma endregion
#pragma region Random Numbers
	//srand(time(nullptr));
	//int val1 = rand() % 10;
	//int dieValue;
	//for (int i = 0; i < 10; i++)
	//{
	//	dieValue = rand() % 6 + 1;
	//	cout << dieValue << endl;
	//}
#pragma endregion
#pragma region Arrays and Range-based for loop
	const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE];
	myArray[2] = 4;
	string names[4]{ "bob","sally","Rob" };
	for (auto& name : names)
	{
		cout << name << endl;
	}
	for (string name : names)
	{
		cout << name << endl;
	}
#pragma endregion

	return 0;
}