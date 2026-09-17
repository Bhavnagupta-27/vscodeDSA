#include<iostream>
using namespace std;
int main(){
  int n,d;
  cout<< "no. of terms in array"<<endl;
  cin>>n;
   int arr[n] ;
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"no. of terms should be rotated";
  cin>>d;
   int temp[d] ;
  d=d%n;
  for(int i =0;i<d;i++){
    temp[i]=arr[i];
  }
  d=d%n;
  for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
  }
  for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}