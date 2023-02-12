#include<iostream>
using namespace std;

int volume(int l,int w,int h);

int main()
{
    int num;
    int l,w,h;
    int result=0;
    
    cout<<"Enter how many boxes you want to Enter :";
    cin>>num;

    num = num*3;
    int arr[num];
     

    for(int i=0 ; i<num ; i=i+3)
    {
        cout<<"Enter input 1 for box : ";
        cin>>arr[i];
        cout<<"Enter input 1 for box : ";
        cin>>arr[i+1];
        cout<<"Enter input 1 for box : ";
        cin>>arr[i+2];

        l=arr[i];
        w=arr[i+1];
        h=arr[i+2];

        result=result + volume(l , w , h);
    }

    cout<<"Required output is :"<<result;
    
    }
    int volume(int l,int w,int h)
    {
        int result;
        result=l*w*h;
        return result;
    }