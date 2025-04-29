#include <iostream>
using namespace std;


int lengthofaNumber(int n){
       
    int count = 0;

    while (n > 0){
       count+=1;
       n=n/10;
    }

    return count;
}

int main () {
    int inputNumber;
 

    cout << "Enter a number : ";
    cin >> inputNumber;

    int finalLength  = lengthofaNumber(inputNumber);

    cout << "Length of a given number is : "<< finalLength << " " ;

    return 0 ;
}