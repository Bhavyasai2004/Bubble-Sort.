#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int i,j;
    bool swapp=false;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                swapp = true;
            }
        }
        if(swapp == false)
        break;
    }
}
