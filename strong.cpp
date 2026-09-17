#include<iostream>
using namespace std;
int main()
{
  int a,b,c, pro,sum;
  cin >>a;
  sum=0;
  c=a;
  while(a!=0){
    b=a%10;
    pro=1;
    for(int i=1;i<=b;i++){
      pro*=i;
    }
    sum+=pro;
    a/=10;
  }
  if(sum==c){
    cout<<"no. is a strong no."<<endl;
  }
  else
  cout<<"no. is not a strong  no"<<endl;
  return 0;
}