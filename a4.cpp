#include<iostream>
using namespace std;
int main(){
    // int fact=1,n;
    // cin>>n;
    // while(n>0)
    // {fact=fact*n;
    // n--;}
    // cout<<fact;


    // int first;
    // int n;
    // cin>>n;
    // int c=n;
    // int sum=0;
    
    // while(n>0){
    // first=n%10;
    // sum=sum+(first*first*first);
    
    // n=n/10;
    // }
    // cout<<"\n"<<sum;
    // if(c==sum)
    // {cout<<"ARMSTRONG";}

    // int kahatak;
    // cin>>kahatak;
    // int sumn=0;
    // for(int i=1;i<=kahatak;i++)
    // {sumn+=i;}
    // cout<<sumn;

    int rev;
    cin>>rev;
    while(rev>0){
        cout<<(rev%10);
        rev=rev/10;
    }

}