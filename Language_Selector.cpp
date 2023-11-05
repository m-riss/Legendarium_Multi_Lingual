#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
int Exit_Variable = 0;

string Exit_Variable_Text = "";
string TinyURLdotCom = "";
string Afrikaans_Specific_Link_ID = "";
string Albanian_Specific_Link_ID = "";
string Japanese_Specific_Link_ID = "";
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

TinyURLdotCom = "https://tinyurl.com/";
Afrikaans_Specific_Link_ID = "2rb7ec5k";
Albanian_Specific_Link_ID = "mvfhws9b";
Japanese_Specific_Link_ID = "kms9ncm6";
Afrikaans = "Afrikaans";
afrikaans = "afrikaans";
Albanian = "Albanian";
albanian = "albanian";
Japanese = "Japanese";
japanese = "japanese";
Exit_Variable_Text = "Exit";

QuestionMark = "?";
Colon = ":";

cout << "What Language Would You Like To Read Tolkien's Legendarium In" << QuestionMark << endl;
cin >> Language_Selection;

if (Language_Selection == Afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Afrikaans_Specific_Link_ID << endl;
}

if (Language_Selection == afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Afrikaans_Specific_Link_ID << endl;
}

if (Language_Selection == Albanian) {
cout << "You Can Download the Albanian Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Albanian_Specific_Link_ID << endl;
}

if (Language_Selection == albanian) {
cout << "You Can Download the Albanian Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Albanian_Specific_Link_ID << endl;
}

if (Language_Selection == Japanese) {
cout << "You Can Download the Japanese Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Japanese_Specific_Link_ID << endl;
}

if (Language_Selection == japanese) {
cout << "You Can Download the Japanese Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Japanese_Specific_Link_ID << endl;
}


/*

*/

















cout << Exit_Variable_Text << QuestionMark << endl;
cin >> Exit_Variable;
return 0;
}
