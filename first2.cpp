#include<iostream>
using namespace std;
class student{
private:
int rollno;
string name;
public :
void input(){
    cout<<"enter rollno:";
    cin>>rollno;
    cout<<"enter name:";
    cin>> name;
}
void display(){
    cout<<"rollno:"<<"\n name:"<<name<<endl;
}
};
int main(){
    int n;
    cout<<"enter the no of students:";
    cin>>n;
    student s[n];
    cout<<"enter student details \n";
    for (int i=0;i<n;i++)
    {
cout<<"\n student"<<i++ <<"\n";
s[i].input();}
cout<<"student information";
for(int i=0 ; i<=n; i++)
{
    s[i].display();
}
return 0;}