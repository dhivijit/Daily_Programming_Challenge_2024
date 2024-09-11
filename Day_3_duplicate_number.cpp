// Find the Duplicate Number

// You are given an inputay input containing n+1 integers, where each integer is in the range [1, n] inclusive.
// There is exactly one duplicate number in the inputay, but it may appear more than once.
// Your task is to find the duplicate number without modifying the inputay and using constant extra space.

#include <iostream>
#include <vector>

using namespace std;

int dupNumber(vector<int> &input)
{
    int slow = input[0];
    int fast = input[0];

    do
    {
        slow = input[slow];
        fast = input[input[fast]];
    } while (slow != fast);

    slow = input[0];
    while (slow != fast)
    {
        slow = input[slow];
        fast = input[fast];
    }

    return slow;
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

    cout << "Duplicate number is: " << dupNumber(inputs) << endl;
}
