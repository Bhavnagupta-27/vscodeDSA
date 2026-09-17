#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int sum=0;
    int rem;
    
    do{
    while(n>0){
        rem=n%10;
        rem*rem;
        sum=sum+rem*rem;
        n=n/10;
    }
    n=sum;
    sum=0;
}while(n>9);
    if(n==1){
        cout<<"this number is happy number";

    }
    else{
        cout<<"this is not happy number";
    }
    return 0;
}