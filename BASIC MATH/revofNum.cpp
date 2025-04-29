#include <iostream>
using namespace std;


int reverseANum(int n){
       
    int revNum = 0;

    while(n>0){
     
      int reminder = n % 10;

      revNum = (revNum * 10) + reminder;

      n = n / 10;
    }


    return revNum;

  }


int main(){

    cout << "Enter a number to reverse :";

    int inputNum;

    cin >> inputNum;

    int finalReversedNumber =  reverseANum(inputNum);

    cout << finalReversedNumber;
   
    return 0;
}

