#include <iostream>
using namespace std;
class books {
private :
string nameofthebook; string authorname;
float price;
public:
void input(){
    cout<<"enter name of the book:";
    cin>>nameofthebook;
    cout<<"authorname";
    cin>>authorname;
    cout<<"enter price";
    cin>> price;}
    void display(){
        cout<<"nameofthebook:"<<nameofthebook<<"\n authorname"<<"\n price"<<price<<endl;}
    };
        int main()
        {  books books[100];
            int n;
            cout<<"enter number of book detail need";
            cin>>n;
            for(int i=0;i>n;i++){
                cout<<"book"<<i+1<<":\n";
                books[i].input();}
                for(int i=0;i>=n;i++){
                    cout<<"details of the books";
                    books[i].display();}
                    return 0;}