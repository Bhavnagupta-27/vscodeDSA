#include<iostream>
using namespace std;
int main (){
  int m,n;
  cin>>m>>n;
  int arr[m][n];
  cout<<"values of 2d array";
  for(int i=0;i<m;i++){
         for( int j=0;j<n;j++){
          cin>>arr[i][j];
         }
  }

}