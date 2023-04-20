#include<bits/stdc++.h>
using namespace std;
class search1{
public:
    int a[10];
    int key;
    int size1;
    void getarray()
    {
        cout<<"Enter the size and array"<<endl;
        cin>>size1;
        for(int i=0;i<size1;i++){
        cin>>a[i];
        }
    }
    int getkey()
    {
        cin>>key;
    }
    virtual int searc()=0;
};
class sequential:public search1{
public:

    int searc()
    {
        for(int i=0;i<size1;i++)
        {
            if(key==a[i])
            {
                return 1;
            }
        }
    }

};
class binarysearch:public search1{
public:
    int searc()
    {
        sort(a,a+size1);
        int l=0;
        int h=size1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(a[mid]==key)
            {
                return 1;
            }
            if(a[mid]<key)
            {
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
};
int main()
{
    search1*s1;
    sequential s;
    binarysearch b1;
    s1=&s;
    s1->getarray();
    s1->getkey();
    int result=s1->searc();
    cout<<result<<endl;
    s1=&b1;
    cout<<s1->searc();
    return 0;
}
