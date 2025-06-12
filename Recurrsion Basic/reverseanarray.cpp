#include <bits/stdc++.h>
using namespace std;


int main(){

    int inputNumber;

    cout << "First Give the length of array to take as input" << "\n";

    cin>>inputNumber;

    int tempVar;

    vector<int> inputArr;

    for(int i=1; i<=inputNumber; i++){
        cout << "Enter Number " << i << "\n"; 
        cin >> tempVar;
        inputArr.emplace_back(tempVar);
    }

    for(int i = inputArr.size() - 1 ; i>=0; i--){
        cout << inputArr[i] << " ";
    }

    return 0;
}