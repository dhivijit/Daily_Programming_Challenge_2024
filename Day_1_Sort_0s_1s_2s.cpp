#include <iostream>
#include<vector>

using namespace std;

void numSorter(vector<int> &input){
    int zeroes=0, ones=0, twos=0;
    for(auto i:input){
        if(i==0){
            zeroes++;
        }else if(i==1){
            ones++;
        }else{
            twos++;
        }
    }
    
    int index=0;
    for(int i=0;i<zeroes;i++){
        input[index++]=0;
    }
    for(int i=0;i<ones;i++){
        input[index++]=1;
    }
    for(int i=0;i<twos;i++){
        input[index++]=2;
    }
}

int main()
{
    vector<int> inputs;
    int num;
    
    cout<<"Enter numbers to be inserted in the array (enter a character to stop taking inputs)"<<endl;
    while(cin>>num){
        inputs.push_back(num);
    }
    
    numSorter(inputs);
    
    cout<<"Sorted Elements are: ";
    for(auto i:inputs){
        cout<<i<<", ";
    }
    
    return 0;
}