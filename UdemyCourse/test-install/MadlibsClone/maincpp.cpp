#include <iostream>
#include <string>
using namespace std;
string DemandInput(string message) {
	cout << "Please enter " << message << endl;
	string input;
	getline(cin, input);
	return input;
}
int main(){
	/*
	DISPLAY IN THE STORY:
	There once was a ADJECTIVE1 girl named GIRLSNAME
	who was a ADJECTIVE2 OCCUPATION1 in the Kigndom of PLACENAME.
	She loved to wear CLOTHING and HOBBY.
	She wanted to marry the ADJECTIVE3 OCCUPATION2 named BOYSNAME
	but her father, King MANSNAME forbid her from seeing him
	*/
	string adj1Girl = DemandInput("ADJECTIVE");
	string girlName = DemandInput("GIRLSNAME");
	string adj2Girl = DemandInput("ADJECTIVE2");
	string occupGirl = DemandInput("OCCUPATION1");
	string kingdomName = DemandInput("PLACENAME");
	string clothGirl = DemandInput("CLOTHING");
	string hobbyGirl = DemandInput("HOBBY");
	string adj1Boy = DemandInput("ADJECTIVE3");
	string occupBoy = DemandInput("OCCUPATION2");
	string boyName = DemandInput("BOYSNAME");
	string kingName = DemandInput("MANSNAME");

	cout << "There once was a " << adj1Girl << " girl named " << girlName <<
		" who was a " << adj2Girl << " " << occupGirl << " in the Kingdom of " << kingdomName <<
		". She loved to wear " << clothGirl << " and " << hobbyGirl <<
		".She wanted to marry the " << adj1Boy << " " << occupBoy << " named " << boyName <<
		" but her father, King " << kingName << " forbid her from seeing him." << endl;

}
