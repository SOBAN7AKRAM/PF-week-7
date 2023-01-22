#include <iostream>
using namespace std;
main()
{
    int counting;
    int number;
    cout<<"ENTER number:";
    cin>>number;
    for(counting=1 ;counting<=10;counting=counting + 1)
    {  
        int table=number*counting;
        cout<<number<<" * "<<counting<<" = "<<table<<endl;
    }
}
