#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingInteger(vector<int> input)
{
    int missing = -1;

    sort(input.begin(), input.end());

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] != i + 1)
        {
            missing = i + 1;
            break;
        }
    }

    return missing;
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

    cout << "Missing number is: " << missingInteger(inputs) << endl;

}