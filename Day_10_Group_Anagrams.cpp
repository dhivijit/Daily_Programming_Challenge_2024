// Group Anagrams

// You are given an array of strings strs[].
// Your task is to group all the strings that are anagrams of each other.
// An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// The goal is to return the grouped anagrams as a list of lists, where each sublist contains words that are anagrams of each other.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

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

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> anagrams;

    for (auto i : strs)
    {
        string temp = i;
        sort(temp.begin(), temp.end());
        anagrams[temp].push_back(i);
    }

    vector<vector<string>> result;

    for (auto i : anagrams)
    {
        result.push_back(i.second);
    }

    return result;
}

int main()
{
    unordered_map<string, string> anagarms;

    string input;

    cout << "Enter the inputs:";
    getline(cin, input);

    vector<string> splitwords = splitword(input);

    vector<vector<string>> result = groupAnagrams(splitwords);

    for (auto i : result)
    {
        cout << "[";
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "]";
    }

    return 0;
}