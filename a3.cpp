#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cin>>length>>breadth;
    if(length==breadth){
        cout<<"It is a square.";
    }
    else{cout<<"It is a rectangle.";}


    int x;
    cin>>x;
    cout<<abs(x);


    int SP,CP;
    int profit=SP-CP;
    int loss = CP-SP;
    if(SP>CP){
    cout<<"Profit: "<<profit;}
    else{
    cout<<"Loss :"<<loss;
    }


    int n;
    cin>>n;
    if(n>0)
    {
        cout<<n;
    }
    else if(n<0){
        cout<<"The number is negative and skipped";
    }


    cout<<"1 for addition\n 2 fro diff\n 3 for product \n 4 for division";
    int ch;
    cin>>ch;
    int a,b;
    cout<<"Enetr a & b";
    cin>>a>>b;

    switch (ch)
    {
    case 1:
    cout<<a+b;
        break;

        case 2:
        cout<<a-b;
        break;

        case 3:
        cout<<a*b;
        break;

        case 4:
        cout<<a/b;
        break;
    
    default:
    cout<<"WRONG";
        break;
    }


    int marks;
    cin>>marks;

    if(marks>90 && marks <100)
    {cout<<"Your Grade is A+";}

    else if(marks>80 && marks <90)
    {cout<<"Your Grade is A";}

    else if(marks>70 && marks <80)
    {cout<<"Your Grade is B+";}

    else if(marks>60 && marks <70)
    {cout<<"Your Grade is B";}

    else if(marks>50 && marks <60)
    {cout<<"Your Grade is C";}

    else if(marks>40 && marks <50)
    {cout<<"Your Grade is D";}

    else if(marks>30 && marks <40)
    {cout<<"Your Grade is E";}

    else if(marks>0 && marks <30)
    {cout<<"Your Grade is F";}




}