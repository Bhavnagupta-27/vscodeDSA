#include<iostream>
#include<vector>
using namespace std;
struct node {
  public:
  int data;
  node * next;
  node * prev;
  public:
  node(int data1){
    prev=nullptr;
    data=data1;
    next=nullptr;
  }
};
node*convertarr2dll(vector<int> arr){
  node*head=new node(arr[0]);
  node*temp=head;
  for(int i=1;i<arr.size();i++){
    node*newnode=new node(arr[i]);
    newnode->prev=temp;
    temp->next=newnode;
    temp=temp->next;
  }
  return head;
}
void print(node*head){
  node*temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
int main(){
  vector<int> arr={12,23,34,25,87,56,47};
  node*head=convertarr2dll(arr);
  print(head);
}