#include <bits/stdc++.h>
using namespace std;


//brutforce
int countof(int n){

      int count = 0;

      while (n > 0){
         count += 1 ;
         n = n/10;           
      };

      return count;
}


int main () {

    int n;

    cout << "Enter a number to count noof digits in it" << endl;

    cin >> n ;

    int finalCount = countof(n);
 
    cout << "Count of num"<< " " << finalCount;

    return 0;
}