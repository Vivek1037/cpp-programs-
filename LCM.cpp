//QN Number:-9 Write a program to calculate LCM of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        for(int i=a;i<=a*b;i++)
        {
            if(i%a==0 && i%b==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    else
    {
        for(int i=b;i<=a*b;i++)
        {
            if(i%a==0 && i%b==0)
            {
                cout<<i;
                break;

            }
        }
    }
    return 0;
}
