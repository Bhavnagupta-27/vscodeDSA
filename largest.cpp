#include<iostream>
using namespace std;
int main()
{
  int a,b,large;
  cin >>a;
  large=0;
 while(a!=0){
  b=a%10;
  a/=10;
   if (b>large)
   {
   large=b;
   }
 }
 cout<<large<<endl;
  return 0;
}