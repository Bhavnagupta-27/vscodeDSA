#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"total no. of elements in the array"<<endl;
  cin>>n;
  cout<<"insert the rotated sorted array";
  int arr[n];
  for( int i=0;i<n;i++){
    cin>>arr[i];
  }
  int low,high,mid,target;
  cout<<"input the target value";
  cin>>target;
 low=0;
 high=n-1;
 while(low<=high){
  mid=low+(high-low)/2;
  if(arr[mid]==target){
    cout<<"target found at index"<<mid;
    return 0;
  }
  else if(arr[low]<=arr[mid]){
    if(target<arr[mid]&&target>=arr[low]){
    high=mid-1;
    }
    else
    low=mid+1;
  }
  else
  if(target>arr[mid]&&target<=arr[high]){
    low=mid+1;
  }
  else
  high=mid-1;
}
return 0;
}
    
 
    