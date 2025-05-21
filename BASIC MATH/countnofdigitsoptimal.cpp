#include <bits/stdc++.h>
using namespace std;

//optimal approach
int countof(int n){

    int count = log10(n)+1;
    
    return count;
}

int main () {
    cout << "Enter a number to count no of digits in it" << "\n";

    int inputnum;

    cin >> inputnum;

    int finalcount = countof(inputnum);

    cout << "count " << finalcount;

    return 0;
}