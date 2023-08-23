#include<iostream>
using namespace std;
int main(){
    //Q1
    int x,y;
    cin>>x>>y;
    cout<<(x*y);

    //Q2
    char j='U';
    cout<<"ASCII value of "<<j<<"is :"<<int(j);

    

    //Q3
    int l,b;
    cin>>l>>b;
    cout<<"Area is:"<<l*b;

    //Q4
    int a;
    cin>>a;
    cout<<"Cube of "<<a<<"is:"<<a*a*a;

    //Q5
    cout<<sizeof(char)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(long double)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(long long)<<endl;

    //Q6
    int a1=1,b1=2,c;
    c=a1;
    a1=b1;
    b1=c;
    cout<<"Now a1 is: "<<a1;
    cout<<"Now b1 is: "<<b1;
}