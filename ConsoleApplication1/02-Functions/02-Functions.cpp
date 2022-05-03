// 02-Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void myFunction1() {
    cout << "I just got executed!";
}
void myFunction2(string fname) {
    cout << fname << " Refsnes\n";
}
void myFunction3(string country = "Norway") {
    cout << country << "\n";
}
void myFunction4(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
}
int myFunction5(int x) {
    return 5 + x;
}
void swapNums(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}
int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}
int main()
{
    //myFunction(); // call the function

    //myFunction("Liam");
    //myFunction("Jenny");
    //myFunction("Anja");

    //myFunction3("Sweden");
    //myFunction3("India");
    //myFunction3();
    //myFunction3("USA");

/*    myFunction4("Liam", 3);
    myFunction4("Jenny", 14);
    myFunction4("Anja", 30)*/;

    //cout << myFunction5(3);

    //int firstNum = 10;
    //int secondNum = 20;

    //cout << "Before swap: " << "\n";
    //cout << firstNum << secondNum << "\n";

    //// Call the function, which will change the values of firstNum and secondNum
    //swapNums(firstNum, secondNum);

    //cout << "After swap: " << "\n";
    //cout << firstNum << secondNum << "\n";

    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}

