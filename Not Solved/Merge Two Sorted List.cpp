#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head;
node *head2;
node* dummy;
void Insert(int x)
{
    node *temp= new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
        return ;
    }
    node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;

}

void Insert1(int x)
{
    node *temp= new node();
    temp->data=x;
    temp->next=NULL;
    if(head2==NULL)
    {
        temp->next=NULL;
        head2=temp;
        return ;
    }
    node *ptr=head2;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;

}


void Print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


node* InsertInDummy(node* head, node* head2)
{
    if(head!=NULL)
    {
        return head2;
    }
    if(head2!=NULL)
    {
        return head;
    }


    while(head!=NULL && head2!=NULL)
    {
         node *temp=new node();

         temp->next=NULL;
        if(dummy==NULL)
        {
           if(head->data>head2->data)
           {
               temp->data=head2->data;
               head2=head2->next;
               dummy=temp;
           }
           else
           {
               temp->data=head->data;
               head=head->next;
               dummy=temp;
           }

        }

            node *loc=dummy;
            while(loc->next!=NULL)
            {
                loc=loc->next;
            }
            loc->next=temp;
            if(head->data>head2->data)
            {
                 temp->data=head2->data;
                 head2=head2->next;
            }
            else
            {
                 temp->data=head->data;
                 head=head->next;
            }
        node* ptr=temp;
    }

    while(head!=NULL)
    {
         node *temp=new node();
        temp->data=NULL;
        temp->next=NULL;
       node* loc=dummy;
       while(loc->next!=NULL)
       {
           loc=loc->next;
       }
       loc->next=temp;
       temp->data=head->data;
       head=head->next;

    }
        while(head2!=NULL)
    {
         node *temp=new node();
        temp->data=NULL;
        temp->next=NULL;
       node* loc=dummy;
       while(loc->next!=NULL)
       {
           loc=loc->next;
       }
       loc->next=temp;
       temp->data=head2->data;
       head2=head2->next;

    }

}



void Print1()
{
    node *temp=dummy;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main()
{
    head=NULL;
    head2=NULL;
    dummy=NULL;


        Insert(5);
        Insert(7);
        Insert(9);




        Insert1(3);
        Insert1(4);

        Insert1(8);
        Insert1(10);


    Print();
    cout<<endl;

     Print1();
    cout<<endl;


}
