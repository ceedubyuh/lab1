/* Carter Womack
 * CMPS 3350
 *
 * Summer Assignment 1: Double Letter Finder
 *
 * This program determines whether a user entered word contains a double letter or not, then ends the program if the word does. 
 * 
 */
#include <stdio.h>
#include <bits/stdc++.h>
#include <cstring>
#include <iostream>

using namespace std;

bool checkDoubleLetters(string str);

int main() {
    string str1;
    do {
        cout << "Please enter a word: ";
        cin >> str1;
        checkDoubleLetters(str1);
    } while (checkDoubleLetters(str1) == false);
    cout << "This word has double letters!\n";
    return 0;
}
bool checkDoubleLetters(string str) {
    int length = str.length();
    
    for (int i = 0; i < length; i++)
    {
        if (str[i] == str[i + 1])
            return true;
    }
    return false;

}   
