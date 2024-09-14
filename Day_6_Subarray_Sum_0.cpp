// Find All Subarrays with Zero Sum

// You are given an integer array arr of size n.
// Your task is to find all the subarrays whose elements sum up to zero.
// A subarray is defined as a contiguous part of the array, and you must return the starting and ending indices of each subarray.

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> getSubarrays(vector<int> input)
{
    vector<vector<int>> subarrays;
    int i = 0;
    int j = 0;
    int sum = 0;

    for (i = 0; i < input.size(); i++)
    {
        sum = input[i];
        vector<int> arr;
        for (j = i + 1; j < input.size(); j++)
        {
            sum += input[j];
            if (sum == 0)
            {
                arr.push_back(i);
                arr.push_back(j);
                subarrays.push_back(arr);
                break;
            }
        }
    }

    return subarrays;
}

int main()
{
    vector<int> inputs;
    int num;

    cout << "Enter numbers to be inserted in the array (enter a character to stop taking inputs)" << endl;
    while (cin >> num)
    {
        inputs.push_back(num);
    }

    vector<vector<int>> output = getSubarrays(inputs);

    if (output.empty())
    {
        cout << "No subarrays which satisfy the given condition";
    }
    else
    {
        cout << "Final Solution:" << endl;
        for (auto i : output)
        {
            cout << "(";
            for (int j : i)
            {
                cout << j << ", ";
            }
            cout << "), ";
        }
    }

    return 0;
}