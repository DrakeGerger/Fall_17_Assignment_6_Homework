/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Rainfall Statistics
 * Created on November 27, 2017, 6:23 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(){
    
    float rainfall[12];
    float total=0;
    float avg=0;
    float maxRain=0;
    float minRain=0;
    float tempRain=0;
    
    //Values to Rainfall
    for (int i=0;i<12;i++){
        
        cout<<"What was the Rainfall for the Month "<<i+1<<": ";
        cin>>rainfall[i];
        total += rainfall[i];
    }
    
    //Calculations
    avg = total/12;
    
    maxRain = rainfall[0];
    minRain = rainfall[0];
    
    for (int i=1;i<=12;i++){
        
        tempRain=rainfall[i];
        if (tempRain<minRain)
            minRain=tempRain;
            
        if (tempRain>maxRain)
            maxRain=tempRain;
                
    }
    
    cout<<"Total Amount of Rainfall: "<<setprecision(2)<<fixed<<showpoint<<total<<endl;
    cout<<"Average Amount of Rainfall: "<<setprecision(2)<<fixed<<showpoint<<avg<<endl;
    cout<<"Highest Amount of Rainfall: "<<setprecision(2)<<fixed<<showpoint<<maxRain<<endl;
    cout<<"Lowest Amount of Rainfall: "<<setprecision(2)<<fixed<<showpoint<<minRain<<endl;

    
}