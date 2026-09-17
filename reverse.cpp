#include<iostream>
using namespace std;
int main()
{
  int a,b,reverse;
  cin >>a;
  reverse=0;
 while(a!=0)
 {
  b=a%10;
  a/=10;
   reverse=reverse*10+b;
 }
 cout<<reverse<<endl;
  return 0;
}