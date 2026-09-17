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
  cout<<endl;
}
node*deletehead(node*head){
  node*temp=head;
  head=temp->next;
  head->prev=nullptr;
  free(temp);
  return head;
}
node*deletetail(node*head){
  node*temp=head;
  while(temp->next->next!=nullptr){
    temp=temp->next;
  }
  free(temp->next);
  temp->next=nullptr;
  return head;
}
node*deleteatk(node*head,int k){
  node*temp=head;
  if(head==nullptr){
    return nullptr;
  }
  int count=0;
  while(temp!=nullptr){
    count++;
    if(count==k){
    break;
    }
    temp=temp->next;
  }
    node*befo=temp->prev;
    node*after=temp->next;
    if(befo==nullptr&&after==nullptr){
      free(temp);
      head=nullptr;
    }
    else if(befo==nullptr){
      node*temp=head;
      head=head->next;
      free(temp);
    }
    else{
    befo->next=after;
    if(after!=nullptr){
       after->prev=befo;
    }
    temp->next=nullptr;
    temp->prev=nullptr;
    free(temp);
  }
  return head;
}
node*deletenodebyvalue(node*head,int val){
  node*temp=head;
  while(temp!=nullptr){
    if(temp->data==val){
      break;
    }
    temp=temp->next;
  }
  node*befo=temp->prev;
  node*after=temp->next;
  if(after==nullptr){
    befo->next=after;
    free(temp);
  }
  else{
  befo->next=after;
  after->prev=befo;
   temp->next=nullptr;
    temp->prev=nullptr;
    free(temp);
  }
  return head;
}
int main(){
  vector<int> arr={12,23,34,25,87,56,47};
  node*head=convertarr2dll(arr);
  print(head);
  head=deletehead(head);
  print(head);
  head=deletetail(head);
  print(head);
  head=deleteatk(head,1);
  print(head);
  head=deletenodebyvalue(head,25);
  print(head);
}