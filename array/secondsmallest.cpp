#include<iostream>
using namespace std;
int main(){
  int arr[8],small,ssmall;
  for(int i=0;i<8;i++){
    cin>>arr[i];
  }
  small=INT_FAST8_MAX;
  ssmall=INT_FAST8_MAX;
for(int i=0;i<8;i++){
  if(arr[i]<small){
    ssmall=small;
    small=arr[i];
  }
  else if (arr[i]>small && arr[i]<ssmall)
   ssmall=arr[i];
}
cout<<small<<" "<<ssmall<<endl;
return 0;
}