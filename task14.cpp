#include <iostream>
using namespace std;
float money(float age,float washingPrice,float price);
main ()
{
    float age,washingPrice,price;
    cout<<"Enter Lily age:";
    cin>>age;
    cout<<"Enter price of washing machine:";
    cin>>washingPrice;
    cout<<"Enter price of each toy:";
    cin>>price;
    float money1=money(age,washingPrice,price);
    if(money1>0)
    {
        cout<<"Yes"<<endl;
        cout<<money1;
    }
    else
    {
        cout<<"No"<<endl;
        money1=money1*(-1);
        cout<<money1;
    }

}
float money(float age,float washingPrice,float price)
{
    float evenYear=0,oddYear=0,oddprice=0,evenprice=0,sum=0;
    for (int i=2;i<=age;i=i+2)
    {
        evenYear++;
        evenprice=(evenYear*10)-1;
        sum=evenprice+sum;
    }
    for (int i=1;i<=age;i=i+2)
    {
        oddYear++;
        oddprice=oddYear*price;
    }
    float totalprice=sum+oddprice;
    float money=totalprice-washingPrice;
    return money;
}