#include<iostream>
using namespace std;
struct node {
  int data;
  node * next;
};
node* newnode()
{
  node* newnode= new node;
  int x;
  cin>>x;
  newnode->data=x;
  newnode->next=nullptr;
  return newnode;
}
node*createlist(int nodes, node*head){
  for(int i=0;i<nodes;i++){
    node* neww=newnode();
  if(head==nullptr){
    head=neww;
  }
  else{
    node*temp=head;
    while(temp->next!=nullptr){
     temp=temp->next;
    }
    temp->next=
  }
newnode();
}
}
int main()
{
 int x;
 cin>>x;
  newnode(x);
  return 0;
}