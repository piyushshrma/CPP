#include<iostream>
using namespace std;
int main(){
    //Q1
    int a,b
    cin>>a>>b;
    if(a==b){
        cout<<"1";
    }
    else{cout<<"0";}

    //Q2
    if(a<50 && a<b){
        cout<<"1";
    }
    else{cout<<"0";}

    //Q3


    //Q4
    int x;
    cin>>x;
    

    //Q5
    int y;
    cin>>y;
    int sum=0,rem;
    if(y>99 && y<1000)
    {
        while(y>0){
            rem=y%10;
            sum=sum+rem;

            y=y/10;
        }
        cout<<sum;
    }
}
