// Reverse a String Word by Word

// You are given a string s that consists of multiple words separated by spaces.
// Your task is to reverse the order of the words in the string.
// Words are defined as sequences of non-space characters.
// The output string should not contain leading or trailing spaces, and multiple spaces between words should be reduced to a single space.

#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

string stringReverser(string Giveninput)
{

    string input = regex_replace(Giveninput, regex("^ +| +$|( ) +"), "$1");

    string word = "";
    vector<string> brokenString;

    for (auto i : input)
    {
        if (i != ' ')
        {
            word += i;
        }
        else
        {
            brokenString.push_back(word);
            word = "";
        }
    }

    brokenString.push_back(word);

    string output = "";

    for (int i = brokenString.size() - 1; i >= 0; i--)
    {
        output += brokenString[i];
        output += " ";
    }

    return output;
}

int main()
{
    string input;

    cout << "Enter the string to be reversed:";
    getline(cin, input);

    string output = stringReverser(input);

    cout << "The Reversed String is:" << output;

    return 0;
}