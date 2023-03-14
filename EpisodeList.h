#ifndef EPISODELIST_
#define EPISODELIST_

#include <iostream>
#include "Node.h"
#include "TVClass.h"
using namespace std;

class EpisodeList {
    protected:
        Node *headNode_;
        Node *tailNode_;
   
    public:
        EpisodeList();
        ~EpisodeList();
        void InsertIntoList(Episode currEpisode);
        void PrintEpisodeList();
};
    
#endif
