#ifndef Dugum_hpp
#define Dugum_hpp

class Node
{
public:
    Node(int data);
    int data;
    Node* next;
    Node* before;
};

#endif