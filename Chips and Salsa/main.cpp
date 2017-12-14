/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Chips and Salsa
 * Created on November 27, 2017, 9:27 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int getTotal(int [], int);
int posOfSmallest(int [], int);
int posOfLargest(int [], int);

//Execution Begins Here!
int main(){
    const int NUM_TYPES = 5;   
    int sales[NUM_TYPES];
    string name[NUM_TYPES] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
  
    int totalJarsSold,
    hiSalesProduct,
    loSalesProduct;
     
// Input the number of jars sold

	for (int type = 0; type < NUM_TYPES; type++)
	{
		cout << "Jars sold last month of " << name[type] << ": ";
      	cin  >> sales[type];
      
		while (sales[type] < 0)
		{	cout << "Jars sold must be 0 or more.  Please re-enter: ";
		   cin  >> sales[type];
		}
	}

   totalJarsSold  = getTotal(sales, NUM_TYPES);
   loSalesProduct = posOfSmallest(sales, NUM_TYPES);
   hiSalesProduct = posOfLargest(sales, NUM_TYPES);
   
//Sales report
   cout << endl << endl;
   cout << "   Salsa Sales Data"<<endl;
   cout << "Name              Jars Sold "<<endl;
   cout << "----------------------------"<<endl;
 
   
	   cout << name[0] << "                  " << sales[0] <<endl;
       cout << name[1] << "                " << sales[1] <<endl;
	   cout << name[2] << "                 " <<sales[2] <<endl;
	   cout << name[3] << "                   " << sales[3] <<endl;
	   cout << name[4] << "                 " << sales[4] <<endl;  
   
   cout << "----------------------------"<<endl;
   cout << "Total Sales: " << totalJarsSold << endl;
   cout << "Top Seller: "  << name[hiSalesProduct] << endl;
   cout << "Low Seller: " << name[loSalesProduct] << endl;    
   
   return 0;
}

//Total
int getTotal (int array[], int numElts)
{
	int total = 0;

	for (int type = 0; type < numElts; type++)
		total += array[type];
	return total;
}

//Top Seller
int posOfLargest(int array[], int numElts)
{
	int indexOfLargest = 0;
	
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] > array[indexOfLargest])
			indexOfLargest = pos;
	}
	return indexOfLargest;
}

//Lowest Seller
int posOfSmallest(int array[], int numElts)
{
	int indexOfSmallest = 0;
	
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] < array[indexOfSmallest])
			indexOfSmallest = pos;
	}		
	return indexOfSmallest;
}




