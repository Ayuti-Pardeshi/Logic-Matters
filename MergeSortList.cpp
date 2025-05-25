#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;
    
    Node (int data)
    {
        val=data;
        next=nullptr;
    }
};

 void insertAtTail(Node*& head, int value)
 {
     Node* newNode = new Node(value);
     if(!head)
     {
         head=newNode;
         return;
     }
     
      Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}
 
// Function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}
 Node* mergeTwoLists(Node* list1, Node* list2) {
    // Dummy node to simplify edge cases
    Node dummy(0);
    Node* tail = &dummy;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Attach the remaining part
    if (list1) tail->next = list1;
    if (list2) tail->next = list2;

    return dummy.next;
}

 int main ()
 {
     Node * list1 = nullptr;
      Node * list2 = nullptr;
      
      //Creating forst sorted list
       insertAtTail(list1,1);
       insertAtTail(list1, 3);
       insertAtTail(list1, 5);

    // Creating second sorted list: 2 -> 4 -> 6
    insertAtTail(list2, 2);
    insertAtTail(list2, 4);
    insertAtTail(list2, 6);
    
    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);
    
    cout<<"Returned:"<<mergeTwoLists;
 }
