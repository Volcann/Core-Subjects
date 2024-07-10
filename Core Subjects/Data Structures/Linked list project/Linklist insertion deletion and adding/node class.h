#ifndef node_class_h
#define node_class_h

class node {
public:
    int data;
    node *next;
    node(int data){
        this -> data = data;
    }
};

#endif /* node_class_h */
