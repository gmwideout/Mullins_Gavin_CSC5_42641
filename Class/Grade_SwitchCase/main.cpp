/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12,2017, 11:18 AM
 * Purpose:  Grades Switch case
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
    switch(score/10){
        case 9:grade='A';break;
        case 8:grade='B';break;
        case 7:grade='C';break;
        case 6:grade='D';break;
        default: grade='F';
    }
    
    
    //Output Located Here
    cout<<"Your score of "<<score<<" = "<<grade<<endl;

    //Exit
    return 0;
}

