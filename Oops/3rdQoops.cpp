#include<iostream>
using namespace std;
class BroadBand{
public:
    string custName;
    int custId;
    double planAmount;
    BroadBand():custName(""),custId(0),planAmount(0){
    }
    BroadBand(string cn,int id, double pa):custName(cn),custId(id),planAmount(pa){

    }
    void printBroadBand(){
    cout<<custName<<":"<<custId<<":"<<planAmount<<endl;
    }
};
class DTH{
public:
    long long mobileNo;
    //Assume channel list is fixed
    string channelList[2];
    double balance;
    DTH(long long m,double bal):mobileNo(m),balance(bal){
    cout<<"Enter channels"<<endl;
    for(int i=0;i<2;i++){
        cin>>channelList[i];
    }
    }
    DTH():mobileNo(0),balance(0){
   // cout<<"The channel list is initialized in parameterized constructor"<<endl;
    }
    void printDTH(){
     cout<<mobileNo<<":"<<balance<<endl;
     for(int i=0;i<2;i++){
            cout<<channelList[i]<<"\t";
    }
    cout<<endl;
    }
};
class NetworkServiceProvider{
public:
    static int bbcount;
    static int dthcount;
    BroadBand broadBandArray[5];
    DTH dthArray[5];

    NetworkServiceProvider(){
     BroadBand bb1("aaa",1,500),bb2("bbb",2,600),bb3("ccc",3,500);
     broadBandArray[0]=bb1; broadBandArray[1]=bb2;broadBandArray[2]=bb3;

    DTH dth1(123456,500),dth2(12345678,900),dth3(1234567,600),dth4,dth5;
    dthArray[0]=dth1; dthArray[1]=dth2; dthArray[2]=dth3;


    }

    void registerNewConnection(BroadBand bb){
        //id,name,amt
        broadBandArray[++bbcount]=bb;
        cout<<"New connection registered"<<endl;
    }
    void registerNewConnection(DTH dth){
    dthArray[++dthcount]=dth;
    cout<<"New connection registered"<<endl;
    }
    void printNSP(){

    for(int j=0;j<5;j++){
       dthArray[j].printDTH();
    }
    for(int i=0;i<10;i++){
        if(broadBandArray[i].custName!="")
            broadBandArray[i].printBroadBand();

    }

    }
};
int NetworkServiceProvider::bbcount=2; //initially objects 3 exists,start adding from 4th
int NetworkServiceProvider::dthcount=2;//initially objects 3 exists,start adding from 4th

int main(){

long long mn; string cList[2]; double bal;

NetworkServiceProvider nsp;
int id;string n;double amt;
        cout<<"Enter Broadband details"<<endl;
        cin>>n>>id>>amt;
        BroadBand b(n,id,amt);
nsp.registerNewConnection(b);

cout<<"Enter new DTH details"<<endl;
cout<<"Enter channels"<<endl;
for(int i=0;i<2;i++){
    cin>>cList[i];
}
cin>>mn>>bal;
DTH dth(mn,bal);
dth.channelList[0]=cList[0];
dth.channelList[1]=cList[1];
nsp.registerNewConnection(dth);


nsp.printNSP();

return 0;
}
