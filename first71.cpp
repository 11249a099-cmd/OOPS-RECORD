#include <iostream>
using namespace std;
class student{
    public:
student (){
    cout<<"constructor calleed"<<endl;}
~student (){
    cout<<"destructor called"<<endl;
}
void display(){
    cout<<"inside display function"<<endl;}
};
int main(){
    cout<<"creating object s"<<endl;
    student s1;
    s1.display();
    cout<<"exiting main"<<endl;
    return 0;
}