#include<iostream>
using namespace std;
int main(){
  int m,n;
  cin>>m>>n;
  int arr[m][n];
  cout<<"values of 2d array";
  for(int i=0;i<m;i++){
         for( int j=0;j<n;j++){
          cin>>arr[i][j];
         }
  }
  int rotate[n][m];
  for(int i=0;i<m;i++){
         for( int j=0;j<n;j++){
          rotate[j][m-1-i]=arr[i][j];
         }
  }
   for(int i=0;i<n;i++){
         for( int j=0;j<m;j++){
          cout<<rotate[i][j]<<" ";
         }
         cout<<endl;
        }
         return  0;
}