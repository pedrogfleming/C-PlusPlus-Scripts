// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*std::cout << "Hello World!\n\n";
    cout << "I am learning C++";*/
    //cout << "Hello World!" << endl;
    //cout << "I am learning C++";
    //int myNum = 15;
    //cout << myNum;
    //int myAge = 26;
    //cout << "I am " << myAge << " years old.";
    //int x;
    //cout << "Type a number: "; // Type a number and press enter
    //cin >> x; // Get user input from the keyboard
    //cout << "Your number is: " << x; // Display the input value
    //int x, y;
    //int sum;
    //cout << "Type a number: ";
    //cin >> x;
    //cout << "Type another number: ";
    //cin >> y;
    //sum = x + y;
    //cout << "Sum is: " << sum;
    //string greeting = "Hello";

    //string firstName = "John ";
    //string lastName = "Doe";
    //string fullName = firstName.append(lastName);
    //cout << fullName;

    //string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
    //cout << "The length of the txt string is: \n" << txt.length();
    //cout << "The length of the txt string is: \n" << txt.size();

    //cout << txt[0];
    // Outputs A

    //string firstName;
    //cout << "Type your first name: ";
    //cin >> firstName; // get user input from the keyboard
    //cout << "Your name is: " << firstName;

    // Type your full name: John Doe
    // Your name is: John
    // 
    //string fullName;
    //cout << "Type your full name: ";
    //getline(cin, fullName);
    //cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe

    //string food = "Pizza";
    //string& meal = food;

    //cout << food << "\n";  // Outputs Pizza
    //cout << meal << "\n";  // Outputs Pizza

    //string food = "Pizza";  // Variable declaration
    //string* ptr = &food;    // Pointer declaration

    //// Reference: Output the memory address of food with the pointer (0x6dfed4)
    //cout << ptr << "\n";

    //// Dereference: Output the value of food with the pointer (Pizza)
    //cout << *ptr << "\n";

    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
