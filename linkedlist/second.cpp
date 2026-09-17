#include<iostream>
#include<vector>
using namespace std;
struct node {
  public:
  int data;
  node * next;
  public:
  node(int data1){
    data=data1;
    next=nullptr;
  }
};
node* convertarr2ll(vector<int> &arr)
{
 node*head= new node(arr[0]);
 node*mover=head;
 for(int i=1;i<arr.size();i++){
 node*temp=new node(arr[i]);
 mover->next=temp;
mover=mover->next;
}
return head;
}
int lengthofll(node*head){
  int count=0;
  node*temp=head;
  while(temp!=nullptr){
    count++;
    temp=temp->next;
  }
  return count;
}
int searchinll(int x,node*head){
  node*temp=head;
  while(temp!=nullptr){
    if(temp->data==x){
      return 1;
    }
    temp=temp->next;
  }
  return 0;
}
int main(){
  vector<int>arr={1,6,8,3,9};
  node*head =convertarr2ll(arr);
  cout<<head<<endl;
  node*temp=head;
  int count=0;
  while(temp!=nullptr){
    cout<<temp->data<<endl;
    temp=temp->next;
    count++;
  }
  cout<<count<<endl;
  cout<<lengthofll(head)<<endl;
  cout<<"which no. you want to search in ll"<<endl;
  int x;
  cin>>x;
  cout<< searchinll(x , head);
}