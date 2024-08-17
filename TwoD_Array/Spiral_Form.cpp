#include<iostream>
using namespace std;

void SpiralPrint(int arr[][4],int row,int col)
{
     int count = 0 ;
     int total = row*col;

     //index
     int startingRow = 0;
     int endingRow = row-1;
     int startingCol = 0;
     int endingCol= col-1;

        while(count<total)
        {
            //Print Starting Row
            for(int i=startingCol ; i<=endingCol ; i++)
            {
                cout << arr[startingRow][i] << " ";
                count++;
            }
            startingRow++;
    
            //Print Ending Column
            for(int i=startingRow ; i<=endingRow ; i++)
            {
                cout << arr[i][endingCol] << " ";
                count++;
            }
            endingCol--;
    
            //Print Ending Row
            for(int i=endingCol ; i>=startingCol ; i--)
            {
                cout << arr[endingRow][i] << " ";
                count++;
            }
            endingRow--;
    
            //Print Starting Column
            for(int i=endingRow ; i>=startingRow ; i--)
            {
                cout << arr[i][startingCol] << " ";
                count++;
            }
            startingCol++;  

     }
}


int main()
{
    int arr[4][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    //Print Array
    for(int i=0 ; i<4 ;i++)
    {
        for(int j= 0 ; j<4 ;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }


    SpiralPrint(arr,4,4);
}