#include <bits/stdc++.h>
using namespace std;

//Pass by reference example


int sum(int &num){
    num = num + 5;  // modify num directly
    cout << num << "\n";
    return num;
}


int main(){
     
    int num = 10;
    
    int finalvalue = sum(num);
    cout << finalvalue << " " << num << "\n";
    return 0;
}