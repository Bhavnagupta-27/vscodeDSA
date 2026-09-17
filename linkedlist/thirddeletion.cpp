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
node* deletehead(node*head){
  if(head==nullptr){
    return head;
  }
  node*temp=head;
  head=head->next;
  free(temp);
  return head;
}
node* deletetail(node*head){
  if(head==nullptr||head->next==nullptr){
    free(head);
    return nullptr;
  }
  node*temp=head;
  while(temp->next->next!=nullptr){
    temp=temp->next;
  }
  free(temp->next);
  temp->next=nullptr;
  return head;
}
node*deleteatk(node*head,int k){
  if(head==nullptr){
    return nullptr;
  }
  if(k==1){
    node*del=head;
    head=head->next;
    free(del);
    return head;
  }
  node*temp=head;
  node*prev=nullptr;
  int count=0;
  while(temp!=nullptr){
    count++;
 if(count==k){
  prev->next=prev->next->next;
  free(temp);
  break;
 }
 prev=temp;
 temp=temp->next;
  }
  return head;
}
node* deletevalnode(node*head,int val){
  if(head==nullptr){
   return head;
  }
  if(head->data==val){
    node*temp=head;
    head=head->next;
    free(temp);
    return head;
  }
  node*temp=head;
  node*prev=nullptr;
  while(temp!=nullptr)
  {
    if(temp->data==val){
    prev->next=prev->next->next;
  free(temp);
  break;
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
  head=deletehead(head);
  cout<<head<<endl;
  head=deleteatk(head,6);
  cout<<head<<endl;
  head=deletevalnode(head,34);
  node*temp=head;
  while(temp!=nullptr){
  cout<<temp->data<<endl;
  temp=temp->next;
  }
}

