#ifndef NODE_
#define NODE_

#include <iostream>
#include "TVClass.h"
using namespace std;


class Node {
    protected:
        Episode Episode_;
        Node *nextNodeReference_;

    public:
        //Constructor list.
        Node();
        ~Node();
        Node(Episode Episode);
        Node(Node *nextNodeReference);
        Node(Episode Episode, Node *nextNodeReference);
        
        //Mutators and Accessor Methods for list traversal 
        Episode GetEpisode();
        Node *GetNext();
        void SetNext(Node *nextNode);

      
       

};


#endif