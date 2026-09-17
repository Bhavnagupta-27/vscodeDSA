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
void print(node*head){
  node*temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<"  ";
    temp=temp->next;
  }
  cout<<endl;
}
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
node*insertionathead(node*head ,int x){
  node*newnode=new node(x ); 
  node*temp=head;
  newnode->next=temp;
  head=newnode;
 return head;}
 node*insertatlast(node*head,int x){
  if(head==nullptr){
   return new node(x);
  }
  node*temp=new node(x);
  node*mover=head;
  while(mover->next!=nullptr){
    mover=mover->next;
  }
  mover->next=temp;
  return head;
 }
 node*insertatk(node*head,int k,int val){
  if(head==nullptr){
    if(k==1){
      node*temp=new node(val);
      head=temp;
    }
    return head;
  }
  if(k==1){
    node*temp=new node(val);
    temp->next=head;
    head=temp ;
    return head;
  }
  int count=0;
  node*temp=head;
  while(temp!=nullptr){
    count++;
 if(count==k-1){
  node*newnode=new node(val);
  newnode->next=temp->next;
  temp->next=newnode;
  break;
  }
 temp=temp->next;
  }
  return head;
 }
 node*insertbeforeval(node*head,int x,int val){
  node*temp=head;
  if(head==nullptr){
    return nullptr;
  }
  if(head->data==val){
    node*newnode=new node(x);
    newnode->next=head;
    head=newnode;
    return head;
  }
  node*prev=nullptr;
  while(temp!=nullptr){
    if(temp->data==val){
  node*newnode=new node(x);
    newnode->next=temp;
    prev->next=newnode;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;
 }
int main(){
  vector<int> arr={1,46,5,34,78};
  node*head=convertarr2ll(arr);
  cout<<head<<endl;
 head=insertionathead(head,20);
 cout<<head<<endl;
 head=insertatlast(head,100);
 print(head);
 head=insertatk(head,1,65);
 print(head);
 head=insertbeforeval(head,67,65);
 print(head);
}