#include <iostream>

using namespace std;

//Linear search
int linearSearch(int arr[],int n,int value)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            return i;
        }
    }
    return -1;
}

//Binary Search

int binarySearch(int arr[],int n,int value)
{
    int first,last,middle;
    first=0;
    last=n-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(arr[middle]==value)
        {
            return middle;
        }
        else if(value<arr[middle])
        {
            last=middle-1;
        }
        else if(value>arr[middle])
        {
            first=middle+1;
        }
    }
    return -1;
}

int main()
{
    //int arr[]={10,7,5,13,9};
    int arr[]={5,7,12,15,17,21,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    //int index=linearSearch(arr,size,6);
    int index=binarySearch(arr,size,6);
    if(index>=0)
    {
        cout<<"Found the value at index: "<<index<<endl;
    }
    else
    {
        cout<<"Value not found"<<endl;
    }
    return 0;
}

