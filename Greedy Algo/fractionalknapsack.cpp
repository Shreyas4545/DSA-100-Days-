#include<bits/stdc++.h>
using namespace std;

struct Item{
  int value;
  int weight;
};

class shreyas{
 public:
    static bool compare(Item x,Item y)
    {
        double a=(double) x.value/(double) x.weight;
        double b=(double) y.value/(double) y.weight;
        return a>b;
    }
     
    double fk(Item arr[],int W,int n)
    {
        double ans=0;
        sort(arr,arr+n,compare);
        for(int i=0;i<n;i++)
        {
            if(W>=arr[i].weight)
            {
                ans+=arr[i].value;
                W-=arr[i].weight;
                continue;
            }
            if(W<arr[i].weight)
            {
                double x=(double) arr[i].value/(double) arr[i].weight;
                ans+=W*x;
                W=0;
                break;
            }
        }
        return ans;
    }

};

int main()
{
    int x,y;
    cin>>x>>y;
     Item arr[x];
     for(int i=0;i<x;i++)
     {
        cin>>arr[i].value>>arr[i].weight;
     }
     shreyas ob;
     cout<<ob.fk(arr,y,x)<<endl;
}