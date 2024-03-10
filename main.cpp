#include <iostream>
using namespace std;

int main() {
    char choose;                                                     //intializing variables
    string str1, str2, decodedstr =" ";
    cout << "Welcome user to Baconian Cipher" << endl;
    // print welcome message
    cout << "Please choose:\n a) if you want to cypher\n b) if you want to decypher\n";
    cin >> choose;
    cin.ignore();
    //a menu is opened to let user choose to cypher or decypher
    if (choose == 'a')  // a for cypher
    {
        cout << " Enter word to cypher : \n";
        getline(cin,str1); // let the user enter a message he wants with spaces to encrypt
        for (int i = 0; i < str1.length(); i++) {   // a loop is done to see every character in the message
            if (str1[i] == 'A' || str1[i] == 'a')
                str2 += "aaaaa";
            else if (str1[i] == 'B' || str1[i] == 'b')
                str2 += "aaaab";
            else if (str1[i] == 'C' || str1[i] == 'c')
                str2 += "aaaba";
            else if (str1[i] == 'D' || str1[i] == 'd')// see every character in the message and add its equivlant to another variable and the loop stops when the message is done
                str2 += "aaabb";
            else if (str1[i] == 'E' || str1[i] == 'e')
                str2 += "aabaa";
            else if (str1[i] == 'F' || str1[i] == 'f')
                str2 += "aabab";
            else if (str1[i] == 'G' || str1[i] == 'g')
                str2 += "aabba";
            else if (str1[i] == 'H' || str1[i] == 'h')
                str2 += "aabbb";
            else if (str1[i] == 'I' || str1[i] == 'i')
                str2 += "abaaa";
            else if (str1[i] == 'J' || str1[i] == 'j')
                str2 += "abaab";
            else if (str1[i] == 'K' || str1[i] == 'k')
                str2 += "ababa";
            else if (str1[i] == 'L' || str1[i] == 'l')
                str2 += "ababb";
            else if (str1[i] == 'M' || str1[i] == 'm')
                str2 += "abbaa";
            else if (str1[i] == 'N' || str1[i] == 'n')
                str2 += "abbab";
            else if (str1[i] == 'O' || str1[i] == 'o')
                str2 += "abbba";
            else if (str1[i] == 'P' || str1[i] == 'p')
                str2 += "abbbb";
            else if (str1[i] == 'Q' || str1[i] == 'q')
                str2 += "baaaa";
            else if (str1[i] == 'R' || str1[i] == 'r')
                str2 += "baaab";
            else if (str1[i] == 'S' || str1[i] == 's')
                str2 += "baaba";
            else if (str1[i] == 'T' || str1[i] == 't')
                str2 += "baabb";
            else if (str1[i] == 'U' || str1[i] == 'u')
                str2 += "babaa";
            else if (str1[i] == 'V' || str1[i] == 'v')
                str2 += "babab";
            else if (str1[i] == 'W' || str1[i] == 'w')
                str2 += "babba";
            else if (str1[i] == 'X' || str1[i] == 'x')
                str2 += "babbb";
            else if (str1[i] == 'Y' || str1[i] == 'y')
                str2 += "bbaaa";
            else if (str1[i] == 'Z' || str1[i] == 'z')
                str2 += "bbaab";
            else if (str1[i] == ' ')
                str2 += " ";

        }
        cout << str2;  // print out the variable after encryption
    }
    else if (choose == 'b') // b for decypher
    {
        cout << "enter the code u want to decypher: \n";
        getline(cin,str1);
        int j = 0;
        while ( j < str1.length())
        {
            if (str1.substr(j,5) == "aaaaa"){
                str2 += "a";
                j += 5;}
            else if (str1.substr(j,5) == "aaaab") {
                str2 += "b";
                j += 5;
            }
            else if (str1.substr(j,5) == "aaaba"){
                str2 += "c";
                j += 5;
            }
            else if (str1.substr(j,5) == "aaabb"){
                str2 += "d";
                j += 5;
            }
            else if (str1.substr(j,5) == "aabaa"){  // see every 5 characters in the message and add its equivlant to another variable and the loop stops when the message is done
                str2 += "e";
                j += 5;}
            else if (str1.substr(j,5) == "aabab"){
                str2 += "f";
                j += 5;}
            else if (str1.substr(j,5) == "aabba"){
                str2 += "g";
                j += 5;}
            else if (str1.substr(j,5) == "aabbb"){
                str2 += "h";
                j += 5;}
            else if (str1.substr(j,5) == "abaaa"){
                str2 += "i";
                j += 5;}
            else if (str1.substr(j,5) == "abaab"){
                str2 += "j";
                j += 5;}
            else if (str1.substr(j,5) == "ababa"){
                str2 += "k";
                j += 5;}
            else if (str1.substr(j,5) == "ababb"){
                str2 += "l";
                j += 5;}
            else if (str1.substr(j,5) == "abbaa"){
                str2 += "m";
                j += 5;}
            else if (str1.substr(j,5) == "abbab"){
                str2 += "n";
                j += 5;}
            else if (str1.substr(j,5) == "abbba"){
                str2 += "o";
                j += 5;}
            else if (str1.substr(j,5) == "abbbb"){
                str2 += "p";
                j += 5;}
            else if (str1.substr(j,5) == "baaaa"){
                str2 += "q";
                j += 5;}
            else if (str1.substr(j,5) == "baaab"){
                str2 += "r";
                j += 5;}
            else if (str1.substr(j,5) == "baaba"){
                str2 += "s";
                j += 5;}
            else if (str1.substr(j,5) == "baabb"){
                str2 += "t";
                j += 5;}
            else if (str1.substr(j,5) == "babaa"){
                str2 += "u";
                j += 5;}
            else if (str1.substr(j,5) == "babab"){
                str2 += "v";
                j += 5;}
            else if (str1.substr(j,5) == "babba"){
                str2 += "w";
                j += 5;}
            else if (str1.substr(j,5) == "babbb"){
                str2 += "x";
                j += 5;}
            else if (str1.substr(j,5) == "bbaaa"){
                str2 += "y";
                j += 5;}
            else if (str1.substr(j,5) == "bbaab"){
                str2 += "z";
                j += 5;}
            else if (str1[j] == ' '){
                str2 += " ";
                j += 1;}
            else
                cout<<"please enter the right form of decypher ";
        }
        cout<<str2;
    }
    else
        cout << "choose a/b";
}

