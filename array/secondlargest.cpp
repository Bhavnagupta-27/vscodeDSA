#include<iostream>
using namespace std;
int main(){
  int arr[8],large,slarge;
  for(int i=0;i<8;i++){
    cin>>arr[i];
  }
  large=INT_FAST8_MIN;
  slarge=INT_FAST8_MIN;
for(int i=0;i<8;i++){
  if(arr[i]>large){
    slarge=large;
    large=arr[i];
  }
  else if (arr[i]<large && arr[i]>slarge)
   slarge=arr[i];
}
cout<<large<<" "<<slarge<<endl;
return 0;
}