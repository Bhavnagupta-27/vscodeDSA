#include<iostream>
using namespace std;
int main(){
  int arr[8];
  cout<<"print the value of array to check array is sorted";
  for(int i=0;i<8;i++)
  {
    cin>>arr[i];
  }
for(int i=0;i<8-1;i++){
  if(arr[i+1]>=arr[i])
  {

   }
  else{
    cout<<"array is not sorted";
  break;
  }
}
cout<<"array is sorted";
return 0;
}