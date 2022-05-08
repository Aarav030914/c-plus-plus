#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next = NULL;
};
node* create_node(int data, node* prev_node){
    node* n_node = new node(); 
    n_node->data = data;
    prev_node->next = n_node;
    return n_node;
}
void reverse(node** head){
    node* p = NULL;
    node* c = *head;
    node* n = c->next;
    while(c->next != NULL){
        c->next = p;
        p = c;
        c = n;
        n = n->next;
    }
    *head = p;

}
int main(){
    node* head = new node();
    head->data = 0;
    node* prev_node = head;
    for(int i=1;i<=99;i++){
        node* new_node = create_node(i, prev_node);
        prev_node = new_node;
    }
    // node* temp = head;
    // for(int i=0;i<100;i++){
    //     cout<<temp->data<<endl;
    //     temp = temp->next;
    // }

    reverse(&head);
    cout<<endl<<"Completed"<<endl;
    node* temp1 = head;
    // for(int i=0;i<100;i++){
    //     cout<<temp1->data<<endl;
    //     temp1 = temp1->next;
    // }
    while(temp1->next!=NULL){
        cout<<temp1->data<<endl;
        temp1 = temp1->next;
    }
}
