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
node* reversell(node*head){
  node*temp=head;
  node*prev=nullptr;
  node*curr=head;
  node*next=head->next;
  while(curr->next!=nullptr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=curr->next;
  }
  head=curr;
  return head;
}
int main(){
  
}