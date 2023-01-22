#include <iostream>
using namespace std;
main()
{
     int number;
     cout<<"Guess out lucky number:";
     cin>>number;
     while(number!=10)
     {
        cout<<"NOT my lucky number"<<endl;
        cout<<"Guess out lucky number:";
        cin>>number;
     }
}