#include<iostream>
using namespace std;


struct ListNode{
int data;
struct ListNode * next;
};


int Length(struct ListNode * head){
int count =0;
ListNode * current = head;
while(current != NULL){
count++;
current = current->next;
}
return count;
}

void reverse(struct ListNode *head){

nexter = head->next;
ListNode * prev = NULL;
head->next = prev:
head = head->next;

reverse(nexter);

}

int main(){
struct ListNode * first = new ListNode();
first->data =1;
struct ListNode * second = new ListNode();
second->data =2;
struct ListNode * third = new ListNode();
third->data =3;
struct ListNode * first1 = new ListNode();
first1->data =1;
first->next = second;
second->next =third;
third->next = first1;
first1->next = NULL;

int coun = Length(first);
cout<<"count is"<<coun;
return 0;
}
