// Permutations of a String

// You are given a string s. Your task is to generate and return all possible permutations of the characters in the string.
// A permutation is a rearrangement of the characters in the string, and each character must appear exactly once in every permutation.
// If there are duplicate characters in the string, the resulting permutations should also be unique (i.e., no repeated permutations).

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> permutations(string s)
{
    vector<string> ans;

    if (s.size() == 0)
    {
        ans.push_back("");
        return ans;
    }

    do
    {
        ans.push_back(s);

    } while (next_permutation(s.begin(), s.end()));

    return ans;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Permutations of the string are: " << endl;
    vector<string> ans = permutations(s);
    for (auto i : ans)
    {
        cout << i << ", ";
    }

    return 0;
}