#include<iostream>
using namespace std;
int main(){
  int n, target , low , high , mid ;
  cout<<"total no. in a array";
  cin>>n;
  int arr[n];
  cout<<"insert the sorted value of array";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter the target value";
  cin>>target;
  low=0;
  high = n;
  while(low<=high){
  mid=(low+high)/2;
  if(arr[mid]==target){
    cout<<"value at index :"<<mid;
    break;
  }
  else if(arr[mid]<target){
    low=mid+1;
  }
  else{
    high=mid-1;
  }
  }
  return 0;
}