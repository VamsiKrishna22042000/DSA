#include <bits/stdc++.h>
using namespace std;

int fibstart = 0;
int cnt = 0;

int fibanocci(int first, int second, int n){
    if(cnt == n)  return fibstart;
    cnt++;
    fibstart = first + second;
    cout  << second << " ";
    fibanocci(second,fibstart,n);
}


int main(){
    int inputNum;
    
    cout << "Enter a number so that will find fibanooci for tha number" << "\n";

    cin >>  inputNum;


    int result  = fibanocci(1,1,inputNum);


    cout << result;

    return 0;
}