#include <iostream>
using namespace std;
main()
{
    float money,year;
    float spendEven,spendOdd,spend,left;
    cout<<"Enter Inherited money:";
    cin>>money;
    cout<<"Enter year you want to live:";
    cin>>year;
    for (int i=1800;i<=year;i=i+2)
    {
        spendEven=12000+spendEven;
    }
    for (int i=1801;i<=year;i=i+2)
    {
        spendOdd=(12000+50*(17+year-1800))+spendOdd;
    }
    spend=spendOdd+spendEven;
    if (spend>money)
    {
        left=spend-money;
        cout<<"NO!"<<endl;
        cout<<"He will need "<<left<<" dollars to survive.";
    }
    if (spend<money)
    {
        left=money-spend;
        cout<<"Yes"<<endl;
        cout<<"He will live a carefree life and will have "<<left<<" dollars left.";

    }

    
}
