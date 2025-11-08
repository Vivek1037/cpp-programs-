/*Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<iostream>
using namespace std;
int main()
{
int x;
while(1)
{
    cout<<"Enter 1 for monday"<<endl;
    cout<<"Enter 2 for tuesday"<<endl;
    cout<<"Enter 3 for wednesday "<<endl;
    cout<<"Enter 4 for thrusday "<<endl;
    cout<<"Enter 5 for Friday"<<endl;
    cout<<"Enter 6 for saturday "<<endl;
    cout<<"Enter 7 for sunday "<<endl;
    cout<<"Enter 0 for exit "<<endl;
    cin>>x;
    switch(x)
    {
    case 1:
    cout<<"monday-momentum maker"<<endl;
    break;
    case 2:
    cout<<"tuesday-trailblazer's tune "<<endl;
    break;
    case 3:
    cout<<"wednesday-Wisdom window"<<endl;
    break;
    case 4:
    cout<<"Thrusday-thrive and Transform"<<endl;
    break;
    case 5:
    cout<<"friday-flourish forward"<<endl;
    break;
    case 6:
    cout<<"saturday-soulful stretch"<<endl;
    break;
    case 7:
    cout<<"Sunday-Serenty spark"<<endl;
    break;
    case 0:
        break;
    default:
    cout<<"invalid choice"<<
    endl;
    break;
    }
    if(x==0)
    {
        break;
    }
}
return 0;
}
