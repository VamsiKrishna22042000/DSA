#include <bits/stdc++.h>
using namespace std;


void maxandmin(int arr[], int size){
      unordered_map<int,int> mapp;

      for(int i=0; i<size; i++){
        mapp[arr[i]]++;
      }

      int coutMax=0;
      int numMax=0;
      int coutMin=0;
      int numMin=0;

      for(auto element : mapp){
          cout << element.first << " is present " << element.second << " times in the array" << "\n";

          if(coutMax==0 && numMax == 0 && coutMin == 0 && numMin == 0){
             coutMax = element.second;
             numMax = element.first;
             coutMin = element.second;
             numMin =  element.first;
          }

          if(element.second > coutMax){
            coutMax = element.second;
            numMax = element.first;
          }
          if(element.second < coutMin){
            coutMin = element.second;
            numMin = element.first;
          }
      }

      cout << "Highest Element " << numMax << " is present " << coutMax <<" times"<< "\n";
      cout << "Lowest Element " << numMin << " is present " << coutMin << " times";
}


int main () {

    int arr[] = {10,5,10,15,10,5};

    int size = sizeof(arr)/sizeof(arr[0]);
    
    maxandmin(arr,size);

    return 0;
}