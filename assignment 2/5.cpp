#include<iostream>
using namespace std;

main(){
    int v=10;
    int *p1=&v;
    int **p2=&p1;
    cout<<"Value of v:"<<v<<" and address:"<<&v<<endl;
    cout<<"Value of v using single pointer:"<<*p1<<" and address:"<<p1<<endl;
    cout<<"Value of P1:"<<*p1<<" and address:"<<&p1<<endl;
    cout<<"Changing value of *P:\n";
    *p1=20;
    cout<<"Value of v:"<<v<<endl;
    cout<<"Value of v using double pointer:"<<**p2<<" and address:"<<p2<<endl;
    cout<<"Value of P2:"<<**p2<<" and address:"<<&p2<<endl;
    cout<<"Changing value of *P:\n";
    **p2=30;
    cout<<"Value of v:"<<v<<endl;
}