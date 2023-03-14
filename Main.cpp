#include <vector>
#include <iostream>
#include <sstream>
#include "TVClass.h"
#include "Validation.h"
#include "Node.h"
#include "EpisodeList.h"
using namespace std;




int main() 
{
    string showTitle;
    string addEpisode = "None";
    double seasonNum = 0.0;
    double episodeNum = 0.0;
    double episodeRating = 0.0;
    int numEpisodes = 0;
    Episode userEpisode;
    EpisodeList userList;


    cout << "Hello! The following program stores your personal rating information about some of your favorite (or not so favorite) television shows. It will ask for the name of the show, "
         << "the season the particular episode occured, the episode number and finally a rating for that episode.  You can add as many episodes as you like. When you are finished with your inputs "
         << "a list, in order by show rating, will be provided to you for your convenience." << endl << endl;

    //do-while loop to get episode info and add it to a linked list
    do{
        cout << "Enter the following information. Follow each response by pressing the return key." << endl; 
           
        cout << "Show Title: ";
        
        //Clears whitespace from cin so that getline can be used for the show title. More important on subsequent loops than initial run.
        cin>>ws;   
        getline(cin, showTitle);
        userEpisode.SetShowTitle(showTitle);

        cout << "Season Number: ";
        cin >> seasonNum;
        validateInt(seasonNum);
        userEpisode.SetSeasonNum(seasonNum);
        

        cout << "Episode Number: ";
        cin >> episodeNum;
        validateInt(episodeNum);
        userEpisode.SetEpisodeNum(episodeNum);
        

        cout << "Episode Rating (From 1.0 To 5.0): ";
        cin >> episodeRating;
        validateRating(episodeRating);
        userEpisode.SetRating(episodeRating);

        //Inserts newly created episode into linked list
        userList.InsertIntoList(userEpisode);
      
        //Determines whether the user would like to add more episodes or if they are finished
        cout << endl << "Would you like to input more episodes or are you finished? Press Y to add more, Press N to finish and output your list of episodes: ";
        cin >> addEpisode;
        validateEpisode(addEpisode);
        cout << endl;   
                
    }
    while(addEpisode == "y" || addEpisode == "Y");

    //Prints list after the while loop has completed as per user input
    userList.PrintEpisodeList();
}

