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



string Japanese = "";
string japanese = "";


string Language_Selection = "";
string QuestionMark = "";
string Colon = "";

Afrikaans = "Afrikaans";
afrikaans = "afrikaans";
Albanian = "Albanian";
albanian = "albanian";
Japanese = "Japanese";
japanese = "japanese";

QuestionMark = "?";
Colon = ":";

cout << "What Language Would You Like To Read Tolkien's Legendarium In" << QuestionMark << endl;
cin >> Language_Selection;

if (Language_Selection == Afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << "https://tinyurl.com/yc26v6u6" << endl;
}

if (Language_Selection == afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << "https://tinyurl.com/yc26v6u6" << endl;
}

if (Language_Selection == Albanian) {
cout << "You Can Download the Albanian Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << "https://tinyurl.com/5h4y6et3" << endl;
}

if (Language_Selection == albanian) {
cout << "You Can Download the Albanian Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << "https://tinyurl.com/5h4y6et3" << endl;
}
























cout << "Exit" << QuestionMark << endl;
cin >> Exit_Variable;
return 0;
}
