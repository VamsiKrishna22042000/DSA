#include <bits/stdc++.h>
using namespace std;

int cnt = 1;
void recurssiveFun(int n){
        if(cnt == n+1) return;
        cout << cnt << " ";
        cnt++;
        recurssiveFun(n);
}

int main(){
    
    int inputNum;

    cout << "Enter a number to loop from 1 to the number entered" << "\n";
    
    cin >> inputNum;

    recurssiveFun(inputNum);
     
    return 0;
}