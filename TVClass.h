#ifndef EPISODE_
#define EPISODE_

#include <iostream>
using namespace std;

class Episode {
    protected:
        string title_;
        int season_;
        int episode_;
        double rating_;
    
    public:
        Episode(); 
        Episode(string showTitle, int seasonNum, int episodeNum, int episodeRating); 
        void SetShowTitle(string showTitle);      //Sets the shows name
        void SetSeasonNum(int seasonNum);         //Sets the season number of the episode
        void SetEpisodeNum(int episodeNum);       //Sets the episode number
        void SetRating(double episodeRating);     //Sets the viewer rating of the episode
        void Print();                             //Prints all of the above in a formatted output

        string GetTitle() const; 
        int GetSeasonNum() const; 
        int GetEpisodeNum() const; 
        double GetRating() const;
};



#endif
