/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12,2017, 12:20 PM
 * Purpose:  Grades Switch case version 2
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short score;
    char grade;
    
    //Input or initialize values Here
    cout<<"This program takes the score and ouputs the grade"<<endl;
    cout<<"Input the score 0 to 100"<<endl;
    cin>>score;
    
    //Process/Calculations Here
    switch(score>94){
        case true:grade='A';break;
        default: switch(score>86){
            case true:grade='B';break;
            default: switch(score>79){
                case true:grade='C';break;
                default: switch(score>74){
                    case true:grade='D';break;
                    default: grade='F';
                }
            }
        }
    }
    
    
    //Output Located Here
    cout<<"Your score of "<<score<<" = "<<grade<<endl;

    //Exit
    return 0;
}