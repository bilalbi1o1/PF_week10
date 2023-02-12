#include<iostream>
using namespace std;

int f1(int current,int previous);

int main()
{
    int progressDay;
    int num;
    int current;
    int previous;
    int result=0;
    
    cout<<"Enter how many inputs you want to give :";
    cin>>num;

    int miles[num];

    for(int i=0 ; i<num ; i++)
    {
        cout<<"Enter input "<<i+1<<" : ";
        cin>>miles[i];
    }
    for(int i=1 ; i<num ; i++)
    {
        current = miles[i];
        previous = miles[i-1];
        result = result + f1(current,previous);
    }

    
    cout<<"Required output is :"<<result;
}
int f1(int current,int previous)
{
    int count=0;    
    
        if(previous<current)
        {
        count++;
        }
        return count;    
}
