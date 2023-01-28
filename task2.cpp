#include <iostream>
using namespace std;
int sum();
main ()
{
    int result=sum();
    cout<<result;
     
}
int sum()
{
    int total=0;
    for (int i=1 ;i<=5;i++)
    {
        total=total+i;
    }
    return total;
}


