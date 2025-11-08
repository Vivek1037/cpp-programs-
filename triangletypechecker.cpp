/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<iostream>
using namespace std;
int main()
{

    int x;
    int a,b,c;
    while(1)
    {
        cout<<"Enter 1 for checking isosceles triangle"<<endl;
        cout<<"Enter 2 for checking right angled triangle "<<endl;
        cout<<"Enter 3 for checking equilateral triangle "<<endl;
        cout<<"Enter 4 for exiting the loop"<<endl;
        cin>>x;
        switch(x)

        {

            case 1:
                cout<<"Enter the sides of the triangle "<<endl;
                cin>>a>>b>>c;
                if(a==b ||b==c||c==a)
                {
                    cout<<"Yes it is isosceles triangle"<<endl;
                }
                else
                {
                    cout<<"not isosceles triangle "<<endl;
                }
                break;
            case 2:
                cout<<"Enter the sides of the triangle "<<endl;
                cin>>a>>b>>c;
                if(a*a==b*b+c*c ||b*b==a*a+c*c||c*c==a*a+b*b)
                {
                    cout<<"Yes it is right angled triangle"<<endl;
                }
                else{
                    cout<<"Not right angled triangle "<<endl;
                }
                break;
            case 3:
                cout<<"Enter the sides of the triangle "<<endl;
                cin>>a>>b>>c;
                if(a==b&& b==c)
                {
                    cout<<"equilateral triangle "<<endl;
                }
                else
                {
                    cout<<"Not right triangle"<<endl;
                }
                break;
            case 4:
                break;
            default:
                cout<<"Invalid input try again"<<endl;
                break;

        }
        if(x==4)
        {
            break;
        }
    }
    return 0;
}
