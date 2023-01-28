#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number,result;
    cout <<"Enter number:";
    cin>>number;
    result=digitSum(number);
    cout<<result;
    

}
int digitSum(int number)
{
   int sum=0,numS=0;
   while (number>0)
   {
    numS=number%10;
    sum=numS+sum;
    number=number/10;
   }
   return sum;
}