#include<iostream>
using namespace std;

int main()
{
    int temporary;
    int arr[10];
    
    for(int i=0 ; i<10 ; i++)
    {
    cout<<"Enter weight of box :";
    cin>>arr[i];
    }

    for(int i=0 ; i<10 ; i++)
    {  
        for(int j=i+1 ; j<10 ; j++)
        {
          if(arr[i]>arr[j])
			{
				temporary = arr[i];
				arr[i] = arr[j];
				arr[j] = temporary;
			}
        }
    }    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"  ";
    }

}
    