#include <bits/stdc++.h>
using namespace std;

string amstrong (int n){
    int len = log10(n) + 1;
    int tempNum = n;
    int amornot = 0;

    while(n > 0){
       amornot = amornot + pow((tempNum%10),len);
       
       tempNum = tempNum/10;
    };
    
    if(n == amornot){
       return "Is Amstrong Number";
    }else{
      return "Not an Amstrong Number";
    };
 
}

int main () {

    int inputNum;
    cout << "Enter a number to check it's a amstrong number or not" << "\n";
    cin >> inputNum;

    string finalResult  = amstrong(inputNum);

    cout << finalResult;

    return 0;
}