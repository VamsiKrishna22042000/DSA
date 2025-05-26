#include <bits/stdc++.h>
using namespace std;

 bool isPrime(int n) {
        int cnt;

        for (int i = 1 ; i<=sqrt(n); i++){
              if(n%i == 0){
                   cnt+=1;
                   if(n/i != i){
                      cnt+=1;
                   }
              }
 
        }
    
         if(cnt == 2){
            return true;
         }else{
            return false;
         }

    }

int main(){

    int inputNum;
     
    cout << "Enter a number to find it's prime number or not";

    cin >> inputNum;


    bool finalValue = isPrime(inputNum);


    if(finalValue){
        cout << "Prime Number";
    }else{
        cout << "Not Prime Number";
    }

    return 0;
}