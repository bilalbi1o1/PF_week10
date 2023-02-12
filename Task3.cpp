#include<iostream>
using namespace std;

int main()
{
    int num;
    int count=0;
    
    cout<<"Enter how many inputs you want to give :";
    cin>>num;

     int arr1[num];
     int arr2[num];
     int k=0;

    for(int i=0 ; i<num ; i++)
    {
        cout<<"Enter input "<<i+1<<" : ";
        cin>>arr1[i];
    }

    for(int i=1 ; i<(num-1) ; i++)
    {
        if(arr1[i]>arr1[i+1] && arr1[i]>arr1[i-1] )
        {
        arr2[k]=arr1[i];
        k++;    
        count++;
        }
    }
    if(count!=0)
    {
    cout<<"Required output is :"<<endl;
    for(int i=0 ; i<count ; i++)
    {
        cout<<arr2[i]<<",";
    }
    }
    else
    cout<<"No Peak found";
    }