//Using the required parts
#include <iostream>
#include <string> //To get the string property

/*

Please note that when using #include <string> the person that is inputting the string only has one line, and one word only to describe them!

*/

//Using the namespace
using namespace std;

//Main method
int main()
{
	cout << "Hello I am the computer, and you are?\n";
	string name = "";
	cin >> name;
	cout << "Nice to meet you " << name << ", how are you today?\n";
	string answer = "";
	cin >> answer;
	if (answer == "good" or answer == "Good" or answer == "epic" or answer == "Epic" or answer == "amazing" or answer == "Amazing")
	{
		cout << "Im very glad on hearing that! Well, have a nice day!\n";
	}
	else if (answer == "bad" or answer == "Bad" or answer == "sad" or answer == "Sad" or answer == "terrible" or answer == "Terrible")
	{
		cout << "Awe.. What's bothering you?\n";
		string botherAnswer = "";
		cin >> botherAnswer;
		cout << botherAnswer << " is bothering you? Well I can try to be some help. Lets meet up tomorrow and discuss it!\n";
	}
	else
	{
		cout << "FATAL ERROR CRASH REPORT\n"; //When the user decides to try to out smart the program
		//This also doesnt work when you provide your last name as well!
	}
}
