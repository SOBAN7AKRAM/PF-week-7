#include <iostream>
using namespace std;
int calculateHCF(int num1,int num2);
int calculateLCM(int num1,int num2,int gcd);
main ()
{
    int gcd;
    int num1,num2;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    gcd=calculateHCF(num1,num2);
    cout<<"The HCF is:"<<gcd<<endl;
    int lcm=calculateLCM(num1,num2,gcd);
    cout<<"The LCM is:"<<lcm<<endl;
    

}
int calculateHCF(int num1,int num2)
{
    int hcf;
    if (num1<num2)
    {
       for (int i=num1;i<=num1;i--)
       {
        if (num2%i==0 && num1%i==0)
        {
            hcf=i;
            return hcf;
        }
       }
    }  
    if (num1>num2)
    {
        for (int i=num2;i<=num2;i--)
       {
        if (num2%i==0 && num1%i==0)
        {
            hcf=i;
            return hcf;
        }
       }
    }
}
int calculateLCM(int num1,int num2,int gcd)
{
   int LCM=(num1*num2)/gcd;
}    
