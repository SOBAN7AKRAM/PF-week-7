#include <iostream>
using namespace std;
void percentage(int number);
main()
{
    int number,number1,digit1=0,digit2=0,digit3=0,digit4=0,digit5=0;
    cout<<"Enter how many numbers you want to print:";
    cin>>number;
    for (int i=1;i<=number; i++)
    {
        cout<<"Enter any number:";
        cin>>number1;
        if (number1<200)
        {
           digit1++;
        }
        if (number1>=200 && number1<400)
        {
            digit2++;
        }
        if (number1>=400 && number1<600)
        {
            digit3++;
        }
        if (number1>=600 && number1<800)
        {
            digit4++;
        }
        if (number1>=800 && number1<1000)
        {
            digit5++;
        }
    }
    float totaldigit=digit1+digit2+digit3+digit4+digit5;
    float p1,p2,p3,p4,p5;
    p1=(digit1*100)/(totaldigit);
    p2=(digit2*100)/(totaldigit);
    p3=(digit3*100)/(totaldigit);
    p4=(digit4*100)/(totaldigit);
    p5=(digit5*100)/(totaldigit);
    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    cout<<p4<<"%"<<endl;
    cout<<p5<<"%"<<endl;
}
