// Longest Common Prefix

// You are given an array of strings strs[], consisting of lowercase letters.
// Your task is to find the longest common prefix shared among all the strings.
// If there is no common prefix, return an empty string "".
// A common prefix is a substring that appears at the beginning of all the strings in the array.
// The task is to identify the longest such prefix that all strings share.

#include <iostream>
#include <vector>

using namespace std;

vector<string> splitword(string input)
{
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

    return brokenString;
}

string longestcommonprefix(vector<string> &strs)
{
    if (strs.size() == 0)
    {
        return "";
    }

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        string temp = "";
        for (int j = 0; j < min(prefix.size(), strs[i].size()); j++)
        {
            if (prefix[j] == strs[i][j])
            {
                temp += prefix[j];
            }
            else
            {
                break;
            }
        }
        prefix = temp;
    }

    return prefix;
}

int main()
{
    string input;

    cout << "Enter the inputs:";
    getline(cin, input);

    vector<string> splitwords = splitword(input);

    cout << "Longest Common Prefix: " << longestcommonprefix(splitwords) << endl;

    return 0;
}