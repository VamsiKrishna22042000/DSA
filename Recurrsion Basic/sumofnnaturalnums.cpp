#include <bits/stdc++.h>
using namespace std;


int sumofNnumbs(int n){
    int sum = 0;
    for (int i = 1 ; i<=n; i++){
         sum+=i;
    };
    cout << sum;
}

int main(){
    
    int inputNum;

    cout << "Enter a number to find sum of the numbers till the number" << "\n";
    cin >> inputNum;

    sumofNnumbs(inputNum);

    return 0;
}