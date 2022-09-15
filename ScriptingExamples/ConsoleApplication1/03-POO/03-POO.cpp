// 03-POO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class MyClass {       // The class
public:             // Access specifier
    int myNum = 0;        // Attribute (int variable)
    string myString = "";  // Attribute (string variable)
    MyClass() {     // Constructor
        cout << "Hello World!";
    }
    void myMethod() {
        cout << "my method";
    }        // Method/function declaration
    void myFunction() {
        cout << "Some content in parent class.";
    }
};

class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Tuut, tuut! \n";
    }
};

// Derived class
class Car : public Vehicle {
public:
    string model;
    int year;
    Car(string b, string m, int y) { // Constructor with parameters
        brand = b;
        model = m;
        year = y;
    }
};

// Derived class (child)
class MyChild : public MyClass {
};

// Derived class (grandchild)
class MyGrandChild : public MyChild {
};
int main() {
    //MyClass myObj;  // Create an object of MyClass
    //myObj.myMethod();
    //// Access attributes and set values
    //myObj.myNum = 15;
    //myObj.myString = "Some text";

    //// Print attribute values
    //cout << myObj.myNum << "\n";
    //cout << myObj.myString;



    //// Create an object of Car
    //Car carObj1;
    //carObj1.brand = "BMW";
    //carObj1.model = "X5";
    //carObj1.year = 1999;

    //// Create another object of Car
    //Car carObj2;
    //carObj2.brand = "Ford";
    //carObj2.model = "Mustang";
    //carObj2.year = 1969;

    // Create Car objects and call the constructor with different values
    //Car carObj1("BMW", "X5", 1999);
    //Car carObj2("Ford", "Mustang", 1969);

    //// Print values
    //cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    //cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    //Car myCar("BMW", "X5", 1999);
    //myCar.honk();
    //cout << myCar.brand + " " + myCar.model;

    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}
