/*
for an unsorted array we have to perform linear search, whose time complexity is n
while for an sorted array we can peform both linear and binary search, whose time complexity is logn

 */

#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int n, int arr[], int key) {
 int s = 0, e= n-1;
 while(s<=e) {
  int mid  = s+(e-s)/2;
  if(arr[mid] == key) {
   return mid;
  }
  else if(arr[mid]>key) {
   e = mid -1;
  }
  else {
   s = mid+1;
  }
 }
 return -1;
}

int main() {
 int n, arr[n];
 int key;
 cout << "Enter the value of key" << endl;
 cin>>key;
 cout << "Enter value of n" << endl;
 cin>>n;
 // putting up an array
 for(int i=0;i<n;i++) {
  cin>>arr[i];
 }
 sort(arr,arr+n);
 int pos = BinarySearch(n,arr,key);
 if(pos == -1){
  cout<<"key not found"<<endl;
 }else{
  cout<<"key found at index "<<pos<<endl;
 }

}