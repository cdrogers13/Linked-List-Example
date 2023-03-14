#include <iostream>
#include <iomanip>
#include <string>
#include "TVClass.h"
using namespace std;


//Default Constructor
Episode::Episode() {
    string title = "Missing Title";
    int season_ = -1;
    int episode_ = -1;
    double rating_ = -1.0;
}

//Initialization Constructor
Episode::Episode(string showTitle, int seasonNum, int episodeNum, int episodeRating) {
    string title = showTitle;
    int season_ = seasonNum;
    int episode_ = episodeNum;
    double rating_ = episodeRating;
}

//Mutator Functions
void Episode::SetShowTitle(string showTitle){
    title_ = showTitle;
}

void Episode::SetSeasonNum(int seasonNum){
    season_ = seasonNum;
}

void Episode::SetEpisodeNum(int episodeNum){
    episode_ = episodeNum;
}

void Episode::SetRating(double episodeRating){
    rating_ = episodeRating;
}

//Accessor Functions
string Episode::GetTitle() const {
    return title_;
}

int Episode::GetSeasonNum() const {
    return season_;
}

int Episode::GetEpisodeNum() const {
    return episode_;
}

double Episode::GetRating() const {
    return rating_;
}




string FormatEpisode(int seasonNum, int episodeNum){
    string seasonString = to_string(seasonNum);
    string episodeString = to_string(episodeNum);
    
    if(seasonNum < 10){
        seasonString =  "S0" + seasonString;
    }
    else{seasonString = "S" + seasonString;}
    
    if(episodeNum < 10){
        episodeString = "E0" + episodeString;
    }
    else{episodeString = "E" + episodeString;};
    
    
    return seasonString + episodeString;
    
    
}

//Prints formatted episode, with rounded rating if more than one decimal
void Episode::Print(){
    cout << title_ << ", " << FormatEpisode(season_, episode_);
    cout << ", Rating " << setprecision(2) << showpoint << rating_ << endl;
}