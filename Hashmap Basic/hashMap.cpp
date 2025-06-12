#include <bits/stdc++.h>
using namespace std;

void mapping(int arr[], int sizeofArr, int arrQuery[], int sizeofQueryArr){
    unordered_map<int, int> mapp;

    for(int each = 0; each < sizeofArr; each++){
        mapp[arr[each]]++; // Fix: Use arr[each], not arr[0]
    }

    for(int ea = 0; ea < sizeofQueryArr; ea++){
        cout << arrQuery[ea] << " appears " << mapp[arrQuery[ea]] << " times in the given array" << "\n"; 
    }
}

int main() {
    int inputNum;
    cout << "Enter a number to take no of inputs" << "\n";
    cin >> inputNum;

    int arr[inputNum] = {0};

    // Taking input of main array
    for (int i = 0; i < inputNum; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int inputQuery;
    cout << "Enter a number to take no of queries" << "\n";
    cin >> inputQuery;

    int queryArr[inputQuery] = {0};

    // Taking input of query array
    for(int j = 0; j < inputQuery; j++) {
        cout << "Enter query number " << j + 1 << ": ";
        cin >> queryArr[j];
    }

    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int sizeArrQuery = sizeof(queryArr) / sizeof(queryArr[0]);

    mapping(arr, sizeArr, queryArr, sizeArrQuery);

    return 0;
}
    