#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void recurssiveFun(int n){
        if(cnt == n) return;
        cout << (n-cnt) << " ";
        cnt++;
        recurssiveFun(n);
}

int main(){
    
    int inputNum;

    cout << "Enter a number to loop from N to 1" << "\n";
    
    cin >> inputNum;

    recurssiveFun(inputNum);
     
    return 0;
}