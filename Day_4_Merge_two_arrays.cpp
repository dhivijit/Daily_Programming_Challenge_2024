// Merge Two Sorted Arrays

// You are given two sorted arrays arr1 of size m and arr2 of size n.
// Your task is to merge these two arrays into a single sorted array without using any extra space (i.e., in-place merging).
// The elements in arr1 should be merged first, followed by the elements of arr2, resulting in both arrays being sorted after the merge.

#include <iostream>
#include <vector>

using namespace std;

void ArrayMerge(vector<int> &input1, vector<int> &input2)
{
    int index = 0;
    for (int i : input2)
    {
        while (index < input1.size() && input1[index] < i)
        {
            index++;
        }
        input1.insert(input1.begin() + index, i);
        index++;
    }
}

int main()
{
    vector<int> input1, input2;
    int num;

    cout << "Enter numbers to be inserted in first array (enter a character to stop taking inputs)" << endl;
    while (cin >> num)
    {
        input1.push_back(num);
    }

    cin.clear();
    cin.ignore();

    cout << "Enter numbers to be inserted in second array (enter a character to stop taking inputs)" << endl;
    while (cin >> num)
    {
        input2.push_back(num);
    }

    ArrayMerge(input1, input2);

    cout << "The output merged array is:" << endl;
    for (int i : input1)
    {
        cout<<i<<", ";
    }

    return 0;
}