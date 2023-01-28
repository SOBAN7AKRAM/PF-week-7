#include <iostream>
using namespace std;
int showSum();
main()
{
    int result=0;
    result=showSum();
    cout<<result;
}
int showSum()
{
    int sum=0;
    for (int i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    return sum;
}