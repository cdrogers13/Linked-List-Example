#include <iostream>
#include <cstring>
#include "Node.h"
#include "TVClass.h"
#include "EpisodeList.h"
using namespace std;

    /*This function inserts node into list, first based on rating in descending order and if they are the same
      then they will be put into ascending alphabetical order*/

    //Default Constructor. Allocates memory for head node and sets the tail equal to head
    EpisodeList::EpisodeList() {
            headNode_ = new Node();
            tailNode_ = headNode_;
    }

    //Destructor using the node classes implementation
    EpisodeList::~EpisodeList() {
        if(headNode_) {
            delete headNode_;
        }
        headNode_ = nullptr;
        tailNode_ = nullptr;
    }
    
    //Takes user episode input, builds a node and places it into list by order of rating
    void EpisodeList::InsertIntoList(Episode currEpisode) {
            Node *tempNode = headNode_;
    //If node is first node added then it skips the more complex sorting
            if(tailNode_ == headNode_) {
                Node *newNode = new Node(currEpisode, nullptr);
                tailNode_->SetNext(newNode);
                tailNode_ = newNode;
            }
            else{
    //Shifts tempNode up until the current node rating is bigger than next node rating, if there is a tie then 
    //it sorts them in ascending alphabetical order.
    //This way I am always inserting after a given node making the code simpler
                while(tempNode->GetNext() && tempNode->GetNext()->GetEpisode().GetRating() > currEpisode.GetRating() ) {
                    tempNode = tempNode->GetNext();
                }
                while(tempNode->GetNext() && tempNode->GetNext()->GetEpisode().GetRating() == currEpisode.GetRating() && tempNode->GetNext()->GetEpisode().GetTitle().compare(currEpisode.GetTitle()) < 0) {
                    tempNode = tempNode->GetNext();   
                }
                Node *newNode = new Node(currEpisode, tempNode->GetNext());
                tempNode->SetNext(newNode);
            }
    }
        
    void EpisodeList::PrintEpisodeList() {
            cout << "Here is your list of TV show entries, ranked in order from your highest rated to your lowest rated:" << endl;
            while(headNode_->GetNext() != nullptr) {
                headNode_->GetNext()->GetEpisode().Print();
                headNode_ = headNode_->GetNext();
            }
    }
    


        
