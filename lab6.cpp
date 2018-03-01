#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int size, in, small, max;
    cout << "Enter a number to the array length\n";
    cin >> size;
    cout << "Enter a starting number\n";
    cin >> small;
    cout << "Enter a ending number\n";
    cin >> max;
    int arr[size];
    for(int i = 0;i < size; i++)
        arr[i] = rand() % max + 1;

    //original array 
    cout << "ORIGINAL ARRAY" << endl;
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\n1. Bubble sort\n";
    cout << "2. Selection sort\n";
    cout << "3. Insertion sort\n";
    cin >> in;

    /*for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            
        }
    }*/
    if(in == 1)//bubble sort
    {
        for( int i = 0; i < size-1; i++)
        {
            for(int j = 0; j < size-1-i; j++)
            {
                if(arr[j+1] < arr[j])
                {
                    swap(arr[j+1],arr[j]);
                }
            }
        }

    }
    if(in == 2)//selection sort
    {
        for(int i = 0; i < size ; i++)
        {
            int smallestIndex = i;
            for(int j = i + 1; j < size ; j++)
            { 
                if(arr[j] < arr[smallestIndex])
                    smallestIndex = j;
            }
            if(smallestIndex != i)
            {
                int temp = arr[i];
                arr[i] = arr[smallestIndex];
                arr[smallestIndex] = temp;
            }
        }

    }
    //Sorted array
    cout << "SORTED ARRAY" << endl;
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    //Check the order
    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            cout << "Error: not ordered \n"; 
            break;
        }
    }

    return 0;
}
