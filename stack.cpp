#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

struct Node
{
    int info;
    Node *link;
};
Node *top;
void push();
void pop();
void disp();

int main()
{
    int ch;
    top=NULL;
    do
    {
        cout<<"Press 1 for push"<<endl;
        cout<<"Press 2 for pop"<<endl;
        cout<<"Press 3 for display"<<endl;
        cout<<"Press 4 for exit"<<endl;
        cin >> ch;

        switch (ch)
         {
         case 1 : push();
          break;
         case 2 : pop();
           break;
         case 3: disp();
           break;

         }

    } while (ch != 4);
    

}
void push()
{

    Node *ptr;
    Node *cpt = new Node;
    cout<<"Enter info";
    cin >> cpt -> info;
    cpt -> link = NULL;
     if(top == NULL){
      
          top = cpt;
     }
    else 
     {
         cpt-> link = top;
         top = cpt;
     }

}
void pop()
{
   
   if(top == NULL){
    cout<< "Underflow";
    return;
   }
   Node *ptr = top;
   cout<<"Element to be deleted"<< ptr -> info;
    top = top-> link;
    delete ptr;
}
 
void disp()
{
    if(top==NULL){
  
    cout<< "empty stack"<< endl;
    return;
    }

for(Node *ptr=top; ptr != NULL ; ptr= ptr->link)
 {
    cout<<ptr-> info;
 }
}