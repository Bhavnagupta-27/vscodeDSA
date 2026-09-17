#include <iostream>
using namespace std;
int main(){
int arr[3],cube[3];
cout<<"elements in array is";
for (int i =0 ;i<3;i++){
  cin>>arr[i];
}
 for(int i=0 ;i<3;i++){
  cube[i]=arr[i]*arr[i]*arr[i];
 }
 cout<<"input array is";
 for(int i=0 ;i<3;i++){
  cout<<arr[i]<<endl;
 }
 cout<<"output array is";
 for(int i=0 ;i<3;i++){
  cout<<cube[i]<<endl;
 }
 return 0;
}
