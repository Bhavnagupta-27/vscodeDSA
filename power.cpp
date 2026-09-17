#include<iostream>
using namespace std;
int main()
{
  int a,b, pro;
  cin >>a;
  pro=1;
  cin>>b;
    for(int i=1;i<=b;i++){
      pro*=a;
    }
  cout<<pro<<endl;
  return 0;
}