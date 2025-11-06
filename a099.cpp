#include<iostream>
using namespace std;
class student{
    string name ;
    int rollno;
    float marks ;
    public:
    void inputdata(){
    cout<<"name";
    cin>>name ;
    cout<<"regno :";
    cin>>rollno;
    cout<<"marks:";
    cin>>marks;}
    void displaydata(){
        cout<<"student info"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;}
    };
    int main(){
        student s1;
        s1.inputdata();
        s1.displaydata();
    }