#include <iostream>
#include <sstream>
#include <cmath>
#include "Validation.h"
using namespace std;

//Input validation to insure input is a number so that code does not crash. Uses a double that is converted to an int to avoid weird input instances where
//a decimal is used for a season or episode number, since that should not be possible
void validateInt(double& userNum){ 
    while(cin.fail() || userNum - (int)userNum > 0) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Remember this input is a whole number only! Please input a valid number: ";
        cin >> userNum;
    }
//Makes userinput always positive, since a negative season or episode does not make sense
    if(userNum < 0) {
        cout << "Number cannot be negative, I will assume it was a typo and convert that to a positive for you." << endl;
        userNum = abs(userNum);
    }
    userNum = (int)userNum;
}

//Validates the rating portion of input by restricting it between 1 and 5 and further insures that it is in fact a number so that code does not crash
void validateRating(double& episodeRating){ 
   while(episodeRating < 1 || episodeRating > 5) { 
        cout << "Remember the number must be between 1.0 and 5.0! Please input a number in the proper range: ";
        cin >> episodeRating;
        while(cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input. Please input a valid number: ";
        cin >> episodeRating;
        }
    } 
    while(cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input. Please input a valid number: ";
        cin >> episodeRating;
    }
}

//Validates that either a yes or no response is given when user is asked to continue inputting episodes into vector
void validateEpisode(string& addEpisode){ 
    while(addEpisode != "y" && addEpisode != "Y" && addEpisode != "n" && addEpisode != "N"){
        cout << "Invalid input. Please input either a Y or N as a response to indicate whether or not you would like to continue: ";
        cin >> addEpisode;
    }
}