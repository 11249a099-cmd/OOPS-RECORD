#include<iostream>
using namespace std ;
class employeepayslip{
    private :
    int emno,basicpay,da,hra,ban,netpay,total,epf,gpay,proftax;
    string empname,intax,uan,ifsc;
    public:
    void getdetails(){
        cout<<"emoloyee name :";
        cin>>empname;
        cout<<"income tax no:";
        cin>>intax;
        cout<<"universal acc no :";
        cin>>uan;
        cout<<"bank acc no:";
        cin>>ban;
        cout<<"ifsc code :";
        cin>>ifsc;
        cout<<"employee no";
        cin>>emno;
        cout<<"basic pay :";
        cin>>basicpay;
    }
    void cal(){
        da=(basicpay)*0.08;
        hra=(basicpay+da)*0.01;
        epf=(basicpay)*0.12;
        gpay=basicpay+da+hra;
        proftax=(basicpay)*0.02;
        total=epf+proftax;
        netpay=gpay-total;
    }
    void display(){
        cout<<"employee no :"<<emno<<"\nemployee name:"<<empname<<"\nuniversal acc no:"<<uan<<"\nifsc code:"<<ifsc<<"\nbank acc no:"<<ban<<"\nbasic pay"<<basicpay<<endl;
        cout<<"DA:"<<da<<"\nHAR :"<<hra<<"\nEPF"<<epf<<"\nGRASS pay:"<<gpay<<"\nproftax"<<proftax<<"\ntotal dedection:"<<total<<"\nnetpay:"<<netpay<<endl;
    }
};
int main(){
    employeepayslip D;
    cout<<"enter the details of emplopyee :"<<endl;
    D.getdetails();
    D.cal();
    cout<<"employee pay slip details :"<<endl;
    D.display();
    return 0;
}