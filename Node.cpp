#include <iostream>
#include "TVClass.h"
#include "Node.h"
using namespace std;



        //Default Constructor 
        Node::Node() {
            this->Episode_ = Episode();
            this->nextNodeReference_ = nullptr;
        }

        //Initialization Constructors
        Node::Node(Episode userEpisode) {
            this->Episode_ = userEpisode;
            this->nextNodeReference_ = nullptr;
        }

        Node::Node(Node *nextNodeReference) {
            this->Episode_ = Episode();
            this->nextNodeReference_ = nextNodeReference;
        }

        Node::Node(Episode Episode, Node *nextNodeReference) {
            this->Episode_ = Episode;
            this->nextNodeReference_ = nextNodeReference;
        }

        //Destructor
        Node::~Node() {
            if(nextNodeReference_) {
                delete nextNodeReference_;
            }    
        }

        
        Episode Node::GetEpisode() {
            return Episode_;
        }
        Node *Node::GetNext() {
            return this->nextNodeReference_;
        }
        void Node::SetNext(Node *nextNode) {
             this->nextNodeReference_= nextNode;
        }
        
        

        



        
        

       

