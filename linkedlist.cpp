#include <iostream>
#include <cstdlib>

using namespace std;
class Node
{
public:
    Node* next;
    int data;
};



class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();//Constructor
    ~LinkedList(); //Distructor

    void add(int data);
    void print();
    void add1(int data, int index);
    int index(int data);
};

LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}

LinkedList::~LinkedList(){
    cout << "LIST DELETED";
}

void LinkedList::add(int data){
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;

    this->length++;
}
// add the data in the Linked List in the specified index
int index(Node* head, int index)  
{  
      
    Node* current = head;  
    int count = 0;  
    while (current != NULL)  
    {  
        if (count == index)  
            return(current->data);  
        count++;  
        current = current->next;  
    }  
    assert(0);          
}



void LinkedList::print(){
    Node* head = this->head;
    int i = 1;
    while(head){
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}
void remove(Node** head_ref) {  
    Node* current = *head_ref;  
    Node* next;  
    *head_ref = NULL;  
}  

int main()
{
    LinkedList* list = new LinkedList();
    list->add(10);
    list->add(20);
    list->add(30);
    /*
    for (int i = 0; i < 1; ++i)
    {
        list->add(rand() % 100);
    }
    */
    list->print();
    //cout << "List Length: " << list->length << std::endl;
    cout<<"Index "<<list->index(10)<<endl;
    //delete list;
    return 0;
}

