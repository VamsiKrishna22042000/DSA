#include <bits/stdc++.h>
using namespace std;

// along with negative numbers
// class Solution {
//   public:
//       int reverse(int x) {
      
//       int posorneg =  x < 0 ? -1 : 1;
  
//       if(posorneg == -1){
//           x = abs(x);
//       }
      
//       long long revNum = 0;
   
//       int ld;
  
//      while(x>0){
  
//         ld = x%10;
  
//         revNum = (revNum * 10) + ld;
        
//         x = x / 10;
//       };
  
//       return posorneg == -1 ? revNum * -1 : revNum;
  
//       }
//   };

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