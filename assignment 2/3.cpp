#include<iostream>
using namespace std;

class student{
    private:
    string name;
    long book_id[3];
    int x=-1;
    public:
    string getname(){
        return name;
    }
    void setname(string a){
        name=a;
    }
    void IssueBooks(long a){
        book_id[++x]=a;
    }
    long getIssuedBooks(){
        return book_id[x--];
    }
};

main(){
    student s1;
    string name;
    long a;
    cout<<"Enter student name: ";
    cin>>name;
    s1.setname(name);
    cout<<"ENTER THE BOOK_ID:\n";
    for(int i=0; i<3; i++){
        cin>>a;
        s1.IssueBooks(a);
    }
    cout<<"Name:"<<s1.getname()<<endl;
    cout<<"Issued Books:\n";
    for(int i=0; i<3;i++){
        cout<<s1.getIssuedBooks()<<"\n";
    }

}