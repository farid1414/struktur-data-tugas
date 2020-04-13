#include <iostream>
#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

struct Node
{
    char data;
    struct Node *next;
    struct Node *prev;
}*head;
void insertend(struct Node** start, char value)
{
        if (*start == NULL)
    {
        struct Node* new_node = new Node;
        new_node->data = value;
        new_node->next = new_node->prev = new_node;
        *start = new_node;
        return;
    }
    Node *last =(*start)->prev;
    struct Node* new_node = new Node;
    new_node->data = value;
    new_node->next = *start;
    (*start)->prev = new_node;
    new_node->prev = last;
    last->next = new_node;
}
/*
void insertbegin(struct Node** start, char value)
{
    struct Node *last = (*start)->prev;
    struct Node* new_node = new Node;
    new_node->data = value;
    new_node->next = *start;
    new_node->prev = last;
    last->next = (*start)->prev = new_node;
    *start = new_node;
}

void insertafter(char data)
{
    struct Node** start;
    int value1;
    int value2;
    struct Node* new_node = new Node;
    new_node->data = value1;
    struct Node *temp = *start;
    while(temp->data != value2);
        temp = temp->next;
    struct  Node *next = temp->next;

    temp->next = new_node;
    new_node->prev = temp;
    new_node->next = next;
    next->prev = new_node;
}
*/
void display(struct Node* start)
{

    struct Node *temp =  start;
    cout<<"\n tranvesal in fordward direction ";
       while (temp->next != start);
    {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<" "<<temp->data;

    cout<<"\n tranvesal in reverse direction \n";
    Node *last = start->prev;
    temp = last;
    while(temp->prev !=last)
    {
        cout<<" "<<temp->data;
        temp = temp->prev;
    }
    cout<<" "<<temp->data;
}

int main()
{
    struct Node* start=NULL;
    insertend();
    cout<<"masukkan pasword";
 /*    for (char i=0;i<6;i++){
    cout<<"masukkan pasword - ";
    cin>>data;
     }
    display();

    getch (); */
    display(start);
    return 0;
   }
