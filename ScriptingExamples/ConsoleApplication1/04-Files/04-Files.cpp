// 04-Files.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    try
    {
        // Create and open a text file
        ofstream MyFile("filename.txt");

        // Write to the file
        MyFile << "Files can be tricky, but it is fun enough!";
        // Close the file
        MyFile.close();
    }
    catch (const std::exception&)
    {
        cout << "Error al guardar el archivo";
    }
    try
    {
        // Create a text string, which is used to output the text file
        string myText;

        // Read from the text file
        ifstream MyReadFile("filename.txt");

        // Use a while loop together with the getline() function to read the file line by line
        while (getline(MyReadFile, myText)) {
            // Output the text from the file
            cout << myText;
        }
        // Close the file
        MyReadFile.close();
    }
    catch (const std::exception&)
    {
        cout << "Error al leer el archivo";
    }
}
