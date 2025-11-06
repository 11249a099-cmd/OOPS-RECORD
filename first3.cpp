#include<iostream>
using namespace std;
class books{
    private:
    string bookname;
    string authorname;
    float cost;
    public:
    void input(){
        cout<<"enter name of the book";
        cin>>bookname;
        cout<<"enter authorname";
        cin>>authorname;
        cout<<"enter cost";
        cin>>cost;
    }
    void display(){
        cout<<"name of the book:"<<bookname<<"\n authorname"<<authorname<<"\n cost:"<<cost<<endl;
    }
};
int main(){
    books book;
    book.input();
    book.display();
}