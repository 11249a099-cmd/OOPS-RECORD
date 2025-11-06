#include<iostream>
using namespace std;
class bill {
    private:
    int unit,custid;
    float amount;
    char name;
    public:
    void getcustdetails(){
        cout<<"customer id";
        cin>>custid;
        cout<<"enter no.of unit consumed";
        cin>>unit;
        cout<<"enter customer name";
        cin>>name;
    }
    void cal(){
        if(unit<=100){
            amount=0;
        }
        else if (unit<=200){
            amount=(unit-100)*2.25;
        }
        else if (unit<=400){
            amount=(100*2.25)+((unit-200)*4.25);
        }
        else if (unit<=600)
        {
            amount=(100*2.25)+(200*4.50)+((unit-400)*6.0) ;
              }
        else {
            amount=(100*2.25)+(200*4.50)+((unit-600)*9.0);
        }
    }
    void print(){
        cout<<"bill"<<endl;
        cout<<"customer id:"<<custid<<endl;
        cout<<"unit consumed:"<<unit<<endl;
        cout<<"customer name:"<<amount<<endl;
        cout<<"electric bill:"<<amount<<endl;
    }
};
int main(){
     bill E;
     E.getcustdetails();
     E.cal();
     E.print();
}