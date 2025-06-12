#include <bits/stdc++.h>
using namespace std;


int sumofNnumbs(int n){
    int factorial = 1;

    for (int i = 1 ; i<=n; i++){
         factorial*=i;
    };
    cout << factorial;
}

int main(){
    
    int inputNum;

    cout << "Enter a number to find factorial of the numbers till the number" << "\n";
    cin >> inputNum;

    sumofNnumbs(inputNum);

    return 0;
}