//
//  main.cpp
//  MergeSort
//
//  Created by Davey Jay Belliss on 6/14/16.
//  Copyright © 2016 Davey Jay Belliss. All rights reserved.
//

#include <iostream>
using namespace std;


void mergeSort(int* array, int len)
{

    if (len == 1)
        return;
   
    else
    {
        int bound = len / 2; //Cutoff point
        int* l = new int[bound];
        int* r = new int[len - bound];
        int i = 0;
        for (i = 0; i < bound; i++)
        {
            l[i] = array[i]; // new array to hold left half
        }
        for (int j = 0; i < len; j++)
        {
            r[j] = array[i++]; // new array to hold right half
        }
        mergeSort(l, bound);//Mergesort left half
        mergeSort(r, len - bound);//Mergesort right half
        int leftP = 0;
        int rightP = 0;
        int count = 0;
        
        while (leftP <  bound && rightP < len - bound)
        {
            if (l[leftP] <= r[rightP])
                array[count++] = l[leftP++]; //left number is smaller than right number
            else
                array[count++] = r[rightP++];
            
        }//While both lists are not empty
        
        if (leftP >= bound)
            for (i = count; i < len; i++)
                array[count++] = r[rightP++];
        //If left half is empty, add remaining right half
        
        else
            for (i = count; i < len; i++)
                array[count++] = l[leftP++];
        //If lower half is empty, add remaining upper half
    }
}

int main(int argc, const char * argv[]) {
    cout << "How many numbers would you like to sort?" << endl;
    int num;
    cin >> num;
    cout << "Please enter your numbers seperated by a space." << endl;
    int* x = new int[num];
    for (int i = 0; i < num; i++)
    {
        cin >> x[i];
    }
    
    mergeSort(x, num);
    for (int i = 0;  i < num; i++)
    {
        cout << x[i];
        cout << " ";
    }
    
    return 0;
}



