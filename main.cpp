//
//  main.cpp
//  CalculateSumOfArray
//
//  Created by Alicia Dale on 4/21/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>

using namespace std;

    //GLOBAL CONSTANTS
const int COLUMNS = 2;
const int ROWS = 2;

    //DECLARE FUNCTION PROTOTYPES
void PrintHeadings();
void InputDataInto2DArray();
int CalculateSumOfArray(int [] [COLUMNS], int);
void PrintFootings();


int main(int argc, const char * argv[]) {
    
        //Call the PrintHeadings function
    PrintHeadings();
    
        //CALL THE INPUT DATA FUNCTION
    InputDataInto2DArray();

    
        //Call the print footings function
    PrintFootings();
    
    return 0;
}

void PrintHeadings()
{
    cout << "*************************************\n";
    cout << "****\tCalculate sum of an array\t***\n";
    cout << "***\t Programmer: Alicia Dale \t ****\n\n\n";
}

void InputDataInto2DArray()
{
        //CREATE A 2D ARRAY with 2 rows and 2 columns
    int num [2][2];
    
    int rows, columns;
    
        //Prompt the user to enter the numbers for the 2d array
    int i = 1;
    
    for (rows = 0; rows < 2; rows++)
    {
        for (columns = 0; columns < 2; columns++)
        {
            cout << "Enter the numbers for the 2D array. Number: " << i << " = ";
            cin >> num[rows][columns];
            i++;
        }
    
    }
    cout << endl;
    
    int sum = 0;
    
    
    sum = CalculateSumOfArray(num,2);
    
    cout << "The sum of the two-dimensional array is = " << sum;
    cout << "\n\n\n\n";


}


int CalculateSumOfArray(int array[][COLUMNS], int n )
{
    int sum = 0;
  
    for (int row = 0; row < ROWS; row ++)
    {
        for (int column = 0; column < COLUMNS; column++)
        {
            sum += array [row][column];
        }
    }
    return sum;
}

void PrintFootings()
{
    cout << "**************************************\n";
    cout << "**********\t END OF JOB \t ***********\n";
    cout << "***\t Programmer: Alicia Dale \t *****\n\n\n";
}