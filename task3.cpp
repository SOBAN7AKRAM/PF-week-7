#include <iostream>
using namespace std;
int totalDigits(int number);
main ()
{
   int number;
   cout<<"Enter any number:";
   cin>>number;
   int total=totalDigits(number);
   cout<<total;  

}
int totalDigits(int number)
{
    int count=0;
    while (number!=0)
    {
       number=number/10;
       count++;
    }
    return count;
}

    