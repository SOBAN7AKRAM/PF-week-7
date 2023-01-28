#include <iostream>
using namespace std;
int validate(int number);
main()
{
    int number;
    cout<<"Enter any number";
    cin>>number;
    number=validate(number);

}
int validate(int number)
{
    while (number<=0)
    {
        cout<<"Error! Enter a number greater than zero"<<endl;
        cout<<"Enter number again:";
        cin>>number;

    }
    return number;
}