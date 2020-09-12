#include <iostream>
#include <ctime>
using namespace std;
 
 
struct node{
    int value;
    int index;
    node *next;
};

// defining new user data type
typedef node list;

// function returns pointer to a new node
list *add_to_list(int value, int index){
    list *result = new node;
    result->value = value;
    result->index = index;
    result->next = NULL;
    cout << "... New node added!" << endl;
    return result;
}


// find tail of the list
list *findEnd(list *head){
    list *hmm = head;
    while(hmm != NULL){

        if(hmm->next == NULL){
            cout << "Last node has value of: " << hmm->value << " and index of: " << hmm->index << endl;
            return hmm;
        }
        else{
            hmm = hmm->next;
        }
    }
}

// find element of the list
list *findNode(list* head, int index){
    list *temporary = head;
    while(temporary != NULL){
        if(temporary->index == index){
            cout << "Node with index " << temporary->index << " found!" << endl;
            cout << "Value of the node with index " << temporary->index << " is " << temporary->value << endl;
            return temporary;
        }
        else{
            temporary = temporary->next;
        }
    }
}

// add new node at the end of list
void insert_at_the_end(int value, int index, list *head){
    list *tail = findEnd(head);
    list *ptr = add_to_list(value,index);
    ptr->next = tail->next;
    tail->next = ptr;
}

// add new node in between two nodes
void insert_inbetween(int value, int index, int index2, list *head){
    //   insert_inbetween(15,5,6,head);
    list *ins = findNode(head,index2);

    list *temp = add_to_list(15,index);

    temp->next = ins->next;
    ins->next = temp;
     

}

// dealocate and delete linked list/free up memory
void destroy_list(list* head){
    int i = 0;
    while(head != NULL){
        list *help = head;
        head = head->next;
        delete help;      
        i++;  
    }
    
    delete head;
    cout << "deleted " << i << " nodes" << endl;
}

void list_display(list *head){
    cout << "--- Displaying linked list ---" << endl;
    // list *temporary = head;
    while(head != NULL){
        cout << head->value << "\t" << head->index << endl;
        head = head->next;  
    }
}

int main(){
    srand(time(NULL));
    list *head = NULL;
    list *temp;
    // list *found;
    
    for(int i = 0; i < 10; i ++){
        temp = add_to_list(rand()%10,rand()%10); //get pointer to a new node
        temp->next = head; // setting node's pointer to head(NULL)
        head = temp; //pointer of new node is now head pointer
    }

    list_display(head);
    cout << endl;
    // found = findNode(head,5);
    // cout << "Node with index " << found->index << " found!" << endl;
    // cout << "Value of the node with index " << found->index << " is " << found->value << endl; // replaced this block with the function
    findNode(head,5);

    insert_inbetween(15,5,6,head);
    // list_display(head);

    findEnd(head);

    insert_at_the_end(20,10,head);

    list_display(head);

    destroy_list(head);
 
    return 0;
}