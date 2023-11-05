#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
int Exit_Variable = 0;


string Afrikaans_Specific_Source_Code_Link_ID = "";
string Albanian_Specific_Source_Code_Link_ID = "";
string Japanese_Specific_Source_Code_Link_ID = "";

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


string Simplified_Chinese = "";
string simplified_chinese = "";
string Traditional_Chinese = "";
string traditional_chinese = "";



string Japanese = "";
string japanese = "";


string Language_Selection = "";
string QuestionMark = "";
string Colon = "";
string Period = "";

Afrikaans_Specific_Source_Code_Link_ID = "3pazn6hr";
Albanian_Specific_Source_Code_Link_ID = "yzbk76va";
Japanese_Specific_Source_Code_Link_ID = "58t3735p";

TinyURLdotCom = "https://tinyurl.com/";
Afrikaans_Specific_Link_ID = "4y7td8up";
Albanian_Specific_Link_ID = "52mshjes";
Japanese_Specific_Link_ID = "kms9ncm6";
Afrikaans = "Afrikaans";
afrikaans = "afrikaans";
Albanian = "Albanian";
albanian = "albanian";
Simplified_Chinese = "Simplified_Chinese";
simplified_chinese = "simplified_chinese";
Traditional_Chinese = "Traditional_Chinese";
traditional_chinese = "traditional_chinese";
Japanese = "Japanese";
japanese = "japanese";
Exit_Variable_Text = "Exit";

QuestionMark = "?";
Colon = ":";
Period = ".";

cout << "If Your Particular Language Has Any Kind Of Space In Its Name, Please Substitute It With An Underscore" << Period << endl;

cout << "What Language Would You Like To Read Tolkien's Legendarium In" << QuestionMark << endl;
cin >> Language_Selection;

if (Language_Selection == Afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Afrikaans_Specific_Link_ID << endl;

cout << "You Can Also Read The Source Code For That Executable File At This Link" << Colon << endl;
cout << TinyURLdotCom << Afrikaans_Specific_Source_Code_Link_ID << endl;
}

if (Language_Selection == afrikaans) {
cout << "You Can Download the Afrikaans Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Afrikaans_Specific_Link_ID << endl;

cout << "You Can Also Read The Source Code For That Executable File At This Link" << Colon << endl;
cout << TinyURLdotCom << Afrikaans_Specific_Source_Code_Link_ID << endl;
}

if (Language_Selection == Albanian) {
cout << "You Can Download the Albanian Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Albanian_Specific_Link_ID << endl;

cout << "You Can Also Read The Source Code For That Executable File At This Link" << Colon << endl;
cout << TinyURLdotCom <<  Albanian_Specific_Source_Code_Link_ID << endl;
}

if (Language_Selection == albanian) {
cout << "You Can Download the Albanian Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Albanian_Specific_Link_ID << endl;

cout << "You Can Also Read The Source Code For That Executable File At This Link" << Colon << endl;
cout << TinyURLdotCom <<  Albanian_Specific_Source_Code_Link_ID << endl;
}

if (Language_Selection == Japanese) {
cout << "You Can Download the Japanese Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Japanese_Specific_Link_ID << endl;

cout << "You Can Also Read The Source Code For That Executable File At This Link" << Colon << endl;
cout << TinyURLdotCom << Japanese_Specific_Source_Code_Link_ID << endl;
}

if (Language_Selection == japanese) {
cout << "You Can Download the Japanese Version of Tolkien's Legendarium At This Link" << Colon << endl;
cout << TinyURLdotCom << Japanese_Specific_Link_ID << endl;

cout << "You Can Also Read The Source Code For That Executable File At This Link" << Colon << endl;
cout << TinyURLdotCom << Japanese_Specific_Source_Code_Link_ID << endl;
}




/*

*/

















cout << Exit_Variable_Text << QuestionMark << endl;
cin >> Exit_Variable;
return 0;
}
