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

int main() {

  int arr[] = {2,5,7,9,5,7,6,3,8,1,4};
  size = 11;
  int maxnum = max(arr, size);
  cout << "Max num in this arr is: " << maxnum << endl;
  int minnum = min(arr, size);
  cout << "Min num in this arr is: " << minnum;

}
