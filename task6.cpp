#include <iostream>
using namespace std;
int totalfrequency(int number,int digits);
main ()
{
   int number,digits;
   cout<<"Enter any number:";
   cin>>number;
   cout<<"Enter digit:";
   cin>>digits;
   int total=totalfrequency(number,digits);
   cout<<total;
   

}
int totalfrequency(int number,int digits)
{
    int count=0;
    while (number>0)
    {
       if (number%10==digits)
       {
        count++;
       }
       number=number/10;
    }
    return count;
}

    