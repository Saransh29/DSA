class Node{
    public:
    int data;       //data object
    Node * next;    // Node ka address object
    
    Node (int data)  //constructor
    {
     this -> data = data;
     next = NULL;

    }
};