/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Largest/Smallest Array Values
 * Created on November 27, 2017, 5:00 PM
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(){
    
    int nums[10];
    int smalst=0;
    int largest=0;
    int temp=0;
    
    for (int i=0;i<10;i++){
        cout<<"Please Enter a Digit "<<i+1<<": ";
        cin>>nums[i];
    }
    
    smalst=nums[0];
    largest=nums[0];
    
    for (int i=1;i<=10;i++){
        temp=nums[i];
        if (temp<smalst)
            smalst=temp;
            
        else if (temp>largest)
            largest=temp;
    }
    
    cout<<"The Largest Digit is: "<<largest<<endl;
    cout<<"The Smallest Digit is: "<<smalst<<endl;
    
}