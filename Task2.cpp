#include<iostream>
using namespace std;

int check( string toFind,char letter);

int main()
{
    int result=0;
    string toFind;
    int num;
    char letter;    

    cout<<"Enter how many strings you want to enter :";
    cin>>num;
    cout<<"Enter letter you want to find : ";
    cin>>letter;

    string words[num];

    for(int i=0 ; i<num ; i++)
    {
        cout<<"Enter word "<<i+1<<" : ";
        cin>>words[i];
        toFind=words[i];

        result = result+ check(toFind,letter);
    }

   cout<<letter<<" is repeated "<<result<<" times.";

}

int check( string toFind,char letter)
{
    int count=0;
    string temporary;

    
        temporary = toFind;
        int n = 0;
        while(temporary[n] != '\0')
        {
           if (temporary[n] == letter )
           count++;
            n++;
        }
    

    return count;
}