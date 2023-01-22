#include <iostream>
using namespace std;
void print(int number);
main()
{
   int number;
   cout<<"Enter number:";
   cin>>number;
   print (number);

}
void print(int number)
{
   int n0=0,n1=1,next;
   cout<<n0<<" "<<n1<<" ";
   for (int count=0;count<number-2;count++)
   {
     
      next=n0+n1;
      cout<<next<<" ";
      n0=n1;
      n1=next;
    
   }
}