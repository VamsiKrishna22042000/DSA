#include <bits/stdc++.h>
using namespace std;

string palindrome(int n){
      
    int revNum = 0;
    int tempNum = n;

    while (tempNum > 0){
        int ld = tempNum % 10;

        revNum =  (revNum * 10) + ld;

        tempNum =  tempNum / 10;
    }

    if(n == revNum){

        return "Is Palindrome";

    }else{

        return "Not Palindrome";

    }

}

int main(){

    int inputnum;
    cout << "Enter a number to check it's a palindrome or not" << "\n";
    cin >> inputnum;

    string finalResult  = palindrome(inputnum);

    cout << finalResult;

    return 0;
}