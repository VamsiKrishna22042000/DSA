#include <iostream>
using namespace std;


bool palindrom(int x){

    int initialNum = x ;
    int revNum = 0;

    while(x > 0){

      revNum = (revNum * 10) + x % 10;

      x = x / 10;
    }

    return initialNum == revNum;

}

int main(){
    
    int inputNum;

    cout << "Enter a number :";
    cin >> inputNum;

    int palindromOrNot = palindrom(inputNum);

    if(palindromOrNot){
        cout << "Give number is Palindrom";
    }else{
        cout << "Give number is not Palindrom";
    }

}