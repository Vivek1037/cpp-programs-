/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/

#include<iostream>
using namespace std;
int main()
{
    int x;
    while(1)
    {
        cout<<"Press 1 for addition"<<endl;
        cout<<"Press 2 for substraction"<<endl;
        cout<<"Press 3 for multiplication"<<endl;
        cout<<"Press 4 for Division"<<endl;
        cout<<"press 0 for exit"<<endl;
        cin>>x;
        switch(x)
        {
            int a,b,c;
            cout<<"Enter two number"<<endl;
            cin>>a>>b;
           case 1:

            c=a+b;
            cout<<c<<endl;
            break;
            case 2:

                cout<<c<<endl;
                break;
            case 3:

                c=a*b;
                cout<<c<<endl;
                break;
            case 4:

                c=a/b;
                cout<<c<<endl;
                break;
            case 0:

                    break;




        }
        if(x==0)
        {
            break;
        }
    }
    return 0;
}
