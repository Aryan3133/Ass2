#include<iostream>
using namespace std;
enum grade{A, Aminus, Bplus, B, Bminus, Cplus, C, Cminus, D, F};
class marks{
    string name;
    grade student_grade;
    public:
    string get_name();
    void set_grade(string, grade );
    string get_grade();
};

void marks::set_grade(string name, grade x){
    this->name=name;
    this->student_grade=x;
}

string marks::get_name(){
    return name;
}

string marks::get_grade(){
    switch (student_grade) {
        case 0:
            return "A";
        case 1:
            return "Aminus";
        case Bplus:
            return "Bplus";
        case B:
            return "B";
        case Bminus:
            return "Bminus";
        case Cplus:
            return "Cplus";
        case C:
            return "C";
        case Cminus:
            return "Cminus";
        case D:
            return "D";
        case F:
            return "F";
        default:
            return "Invalid Grade";
    }
}

main(){
    marks s1;
    s1.set_grade("Ram", Aminus);
    cout<<"Name:"<<s1.get_name()<<endl;
    cout<<"Grade:"<<s1.get_grade()<<endl;

}