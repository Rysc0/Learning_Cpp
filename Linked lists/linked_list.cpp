#include <iostream>
#include <ctime>
using namespace std;
 
// linked list structure
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

// insert at head
list *insert_at_head(list *head, int value, int index){
    list *temp = add_to_list(value, index);
    temp->next = head;
    head = temp; 
    return head;
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
    return 0; //warning: control reaches end of non-void function
}

// find element of the list
list *findNode(list* head, int index){
    list *temporary = head;
    while(temporary != NULL){
        if(temporary->index == index){
            cout << "Node with index " << temporary->index << " found! It's value is: " << temporary->value << endl;
            return temporary;
        }
        else{
            temporary = temporary->next;
        }
    }
    return 0; // warning: control reaches end of non-void function
}

// add new node at the end of list
void insert_at_the_end(int value, int index, list *tail){
    list *ptr = add_to_list(value,index);
    ptr->next = tail->next;
    tail->next = ptr;
}

// add new node in between two nodes
void insert_inbetween(int value, int index, int index2, list *head){
    list *ins = findNode(head,index2);
    list *temp = add_to_list(15,index);
    temp->next = ins->next;
    ins->next = temp;
}

//  delete node
// void deleteNode(){

// }


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

// print list
void list_display(list *head){
    cout << "--- Displaying linked list ---" << endl;
    int i = 0;
    while(head != NULL){
        cout << head->value << "\t" << head->index << endl;
        head = head->next;  
        i++;
    }
    cout << "List has " << i << " nodes..." << endl;
}

int main(){
    srand(time(NULL));
    list *head = NULL;
    list *temp;

    // adding nodes into list at the head of list
    for(int i = 0; i < 10; i ++){
        temp = add_to_list(rand()%10,rand()%10); //get pointer to a new node
        temp->next = head; // setting node's pointer to head(NULL)
        head = temp; //pointer of new node is now head pointer
    }


    // manually adding nodes into list at the head of list
    // head = insert_at_head(head,10,1);
    // head = insert_at_head(head,11,2);
    // head = insert_at_head(head,12,3);

    cout << "------------------------------" << endl;
    list_display(head);
    cout << endl << "------------------------------" << endl;
    
    findNode(head,2);
    cout << endl << "------------------------------" << endl;

    insert_inbetween(15,5,2,head);
    cout << "------------------------------" << endl;

    list_display(head);
    cout << "------------------------------" << endl;

    list *tail = findEnd(head);

    insert_at_the_end(23,16,tail);
    cout << "------------------------------" << endl;

    list_display(head);
    cout << "------------------------------" << endl;

    destroy_list(head);
    cout << "------------------------------" << endl;
 
    return 0;
}