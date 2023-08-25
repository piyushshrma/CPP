#include<iostream>
using namespace std;

void sqr(int n) {//Function for 1st question
    cout <<n*n;
}

void arci(int r){//Function for 2nd
    cout<<"Area "<<4*(22/7)*r*r<<endl;
    cout<<"Circumference "<<2*(22/7)*r<<endl;
}

void vote(int age){
    if(age>=18){cout<<"Yes."<<endl;}
    else{cout<<"No"<<endl;}
}

void odd(int a,int b){
    for(int i=a; i<=b; i++)
    {
        if((i%2)!=0){cout<<i<<endl;}
    }
}

void prime(int a,int b){
    for(int i=a; i<=b; i++)
    {
        
    }
}

int main(){
    for(int i=1; i<=5; i++)
    {
        sqr(i);
        cout<<endl;
    }

    arci(3);

    cout<<"Enter your age:"<<endl;
    int age;
    cin>>age;
    vote(age);

    odd(1,10);


}