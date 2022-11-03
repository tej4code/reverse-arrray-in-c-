#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0 ; i< n;i++){
        cout<<" "<<arr[i];
    }
};

int reverse(int arr[],int n){
  int start = 0;
  int end = n-1;

  while(start<=end){
      swap(arr[start],arr[end]);
      start++;
      end --;
  }
  
};  
int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    reverse(arr,10);
    printArray(arr,10);
}
