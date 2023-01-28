#include <iostream>
using namespace std;
void forCounting(int number);
void whileCounting(int number);
main ()
{
     int number;
     cout<<"Enter any number:";
     cin>>number;
     forCounting(number);
     whileCounting(number);
}
void forCounting(int number)
{
    cout<<"******Counting with for loop******"<<endl;
    
    for (int i=1;i<=number;i++)
    {
        cout<<i<<endl;
        
    }

}
void whileCounting(int number)
{
    int i=1;
            cout<<"*****Counting with while loop"<<endl;

    while (i<=number)
    {
        cout<<i<<endl;
        i=i+1;
    }
}

