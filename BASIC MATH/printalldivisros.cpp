#include <bits/stdc++.h>
using namespace std;


vector<int> printDivisors(int n){

    int sq = sqrt(n);
    int tempVar = n;

    vector<int> div;

    for(int i = 1 ; i <= sq ; i++ ){

        if(n % i == 0){
             
            div.push_back(i);

            if(i != n/i){
                div.push_back(n/i);
            };
        }

    }

    sort(div.begin(),div.end());
    return div;
}

int main(){

     int inputNum;

     cout << "Enter a number to get it's divisors" << "\n";

     cin >> inputNum;

     vector<int> finalResult = printDivisors(inputNum);

     for(int div : finalResult){
          cout << div << " ";
     }
    
    return 0;
}