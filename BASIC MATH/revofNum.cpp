#include <bits/stdc++.h>
using namespace std;



int reverse(int n){
   int revNum = 0;

   int ld;

   while(n>0){
      ld = n%10;

      revNum = (revNum * 10) + ld;
      
      n = n / 10;
   };

   
    return revNum;
}

int main (){
  cout << "Enter a number to reverse it" << "\n";

  int inputnum;

  cin >> inputnum;

  int finalResult = reverse(inputnum);

  cout << "This is the reversed number" << " " << finalResult;

  return 0;
}