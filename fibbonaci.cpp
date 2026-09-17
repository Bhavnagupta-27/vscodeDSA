#include <iostream>
using namespace std;
int main() {
  int a,b,c,terms;
  cout<<" number of terms";
  cin>>terms;
  a=0;
  b=1;
  cout<<a<<endl;
  cout<<b<<endl;
  for(int i=0; i<terms-2;i++){
     c=a+b;
     a=b;
     b=c;
    cout<<c<<endl;
    c=0;
  }
  return 0;
}