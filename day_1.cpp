#include <iostream>
#include <limits.h>
using namespace std;

void printArr (int arr[], int size) {
  for (int i = 0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}


int max (int arr[], int size) {
  int maxN = INT_MIN;

  for(int i = 0; i<size; i++){
    if(arr[i] > maxN) {
      maxN = arr[i];
    }
  }
  return maxN;
}

int min (int arr[], int size) {
  int minM = INT_MAX;

  for(int i = 0; i<size; i++){
    if(arr[i] < minM) {
      minM = arr[i];
    }
  }
  return minM;
}

void printExtreme (int arr[], int size){

  int start = 0, end = size-1;
  while(start<=end) {
    if(start!=end){
      cout << arr[start] << " " << arr[end] << " ";
    }
    else{
      cout << arr[start] << " ";
    }
    start++;
    end--;
  }
  
}

void reverseArr(int arr[], int size) {

  int start = 0, end = size-1;
  while(start<=end) {
    if(start!=end){
      //using xor
      arr[start] = arr[start] ^ arr[end];
      arr[end] = arr[start] ^ arr[end];
      arr[start] = arr[start] ^ arr[end];
      
      //using inbuilt swap func
      // swap(arr[start], arr[end]);
      
      //using temp
      // int temp = arr[start];
      // arr[start] = arr[end];
      // arr[end] = temp;
    }
    start++;
    end--;
  }

  // Print the Reversed Array
  printArr(arr, size);

}


int main() {

  int size;

  int arr[] = {0,1,2,3,4,5,6,7,8,9};
  size=10;
  // printExtreme(arr,size);
  cout << "Original Array: \n";
  printArr(arr, size);
  cout << "\nReversed Array: \n"; 
  reverseArr(arr,size);
  

  

  // int arr[] = {2,5,7,9,5,7,6,3,8,1,4};
  // size = 11;
  // int maxnum = max(arr, size);
  // cout << "Max num in this arr is: " << maxnum << endl;
  // int minnum = min(arr, size);
  // cout << "Min num in this arr is: " << minnum;

}
