#include<iostream>
using namespace std;
int main()
{
  int arr[10]={10,20,30,40,50},b;
  cout<<"index value where u want to delete the value" ;
  cin>>b;
  for(int i =b+1;i<=4;i++){
    arr[i-1]=arr[i];
  }
  arr[((sizeof(arr)/sizeof(arr[0]))-1)]=0;
for(int j=0;j<10;j++){
  cout<<arr[j];
}
return 0;
}