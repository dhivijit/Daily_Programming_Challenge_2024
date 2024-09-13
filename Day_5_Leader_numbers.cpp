// Find the Leaders in an Array

// You are given an integer array arr of size n. An element is considered a leader if it is greater than all the elements to its right.
// Your task is to find all such leader elements in the array.

#include <iostream>
#include <vector>

using namespace std;

vector<int> leaderElements(vector<int> input)
{
    vector<int> leaders;

    for (int i = 0; i < input.size(); i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < input.size(); j++)
        {
            if (input[i] <= input[j])
            {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
        {
            leaders.push_back(input[i]);
        }
    }

    return leaders;
}

int main()
{
    vector<int> inputs;
    int num;

    cout << "Enter numbers to be inserted in the inputay (enter a character to stop taking inputs)" << endl;
    while (cin >> num)
    {
        inputs.push_back(num);
    }

    vector<int> leaders = leaderElements(inputs);

    cout << "Leaders in the input are: ";
    for(int i: leaders)
    {
        cout << i << ", ";
    }

    return 0;
}