/*
======================================================================
Abdoul hanane Gbadamassi
10/17/19
CSC 211 H 
Lab# 4
Prof. Azhar
Id : 23741874
======================================================================*/

/*
In statistics, the mode of a set of values is the value that occurs
most often or with the grearest frequency.
Write a function that accepts as arguments the following:
A) An array of integers
B) An integer that indicates the number of elements in the array
The function should determine the mode of the array.
That is, it should determine which value in the array
occurs most often. The mode is the value the function should return.
If the array has no mode (none of the values occur more than once),
the function should return -1.
(Assume the array will always contain nonnegative values.)
Demonstrate your pointer prowess by using pointer notation
instead of array notation in this function.	*/


#include <iostream>
#include <stdio.h> 
#include"modeFunction.h"     
//#include"MyMode.h"
using namespace std;


//Function prototypes




int main()
{
	//size for the array
	int size;
	
	cout << "Choose the size of the array to get the mode. \t ";
	
	cin >> size;
  try{
  if (size<=1)throw string("please enter a valid positive integer superior to 0 & 1");
    }
    catch (string str)
    {
   cout<<str<<endl;
   exit(0);
    }
  
	
	//standard loop to ensure the user inputs a size that's >= 2
	while(size < 2 && isdigit(size))
	{
		cout << endl << "At least input a size(integer) that's 2 or more.  "
			 << endl << endl;
		
		cout << "Choose the size of the array to get the mode. \t ";
	
		cin >> size;
	}

  //uncomment this section to use the functions

	//declares a pointer to a dynamic array of random positive integers
	int * modeA = makeArray(size);

	cout << endl << "The array is:" << endl << endl;

	//as the name suggests, it shows the array to the user
	showArray(modeA, size);

	//declares and determines the mode of the array
    int mode_array = mode(modeA, size);

	cout << endl << endl;

	//the case where there's no mode
	if(mode_array == -1)
	{
		cout << "There is no mode from this array." << endl;

		return 0;
	}

	cout << "The mode from this array is: " << mode_array << endl;

  // myMode mode_data;
  // mode_data.makeArray(size);
  // mode_data.print();
  // mode_data.mode();
  //mode_data.average();
 // mode_data.median();
	return 0;
}


