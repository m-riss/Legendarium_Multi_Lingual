#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
int Exit_Variable = 0;

//Defining every language in Google Translate as a string variable.
string Afrikaans = "";
string afrikaans = "";
string Albanian = "";
string albanian = "";




string Language_Selection = "";
string QuestionMark = "";
string Colon = "";

Afrikaans = "Afrikaans";
afrikaans = "afrikaans";

QuestionMark = "?";
Colon = ":";

cout << "What Language Would You Like To Read Tolkien's Legendarium In" << QuestionMark << endl;
cin >> Language_Selection;

if (Language_Selection == Afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << "https://tinyurl.com/bddnx59t" << endl;
}

if (Language_Selection == afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << "https://tinyurl.com/bddnx59t" << endl;
}




























cout << "Exit" << QuestionMark << endl;
cin >> Exit_Variable;
return 0;
}
