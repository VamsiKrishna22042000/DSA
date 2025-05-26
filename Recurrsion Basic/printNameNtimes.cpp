#include<bits/stdc++.h>
using namespace std;



int cnt = 0;
void recurssivFun(int num, string name){

    if(cnt == num) return;

    cout << name << "\n";
    cnt++;
    recurssivFun(num,name);

};

int main(){

    int inputNum;
    string inputName;

    cout << "Enter Name to make a recurrsive print of name" << "\n";
    cin >> inputName;

    cout << "Enter Number how may times it should repeat" << "\n";

    cin >> inputNum;

    recurssivFun(inputNum,inputName);

    return 0;
}
