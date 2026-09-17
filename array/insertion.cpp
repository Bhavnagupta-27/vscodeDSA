#include<iostream>
using namespace std;
int main()
{
  int arr[10]={10,20,30,40,50},b;
  cout<<"index value where u want to insert the value" ;
  cin>>b;
  for(int i =10;i>=b;i--){
    arr[i+1]=arr[i];
  }
cout<<"value";
cin>>arr[b];
for(int j=0;j<10;j++){
  cout<<arr[j];
}
return 0;
}