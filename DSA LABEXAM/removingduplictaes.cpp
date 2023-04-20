#include<iostream>
#include<cstring>
using namespace std;


char *dup(char S[],int N)
{

    int index=0,j;
    N=sizeof(S) / sizeof(S[0]);
    for(int i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if(S[i]==S[j])
            {
                break;
            }
        }
          if(j==i)
    {
        S[index++]=S[i];
    }
    }
    return S;

    }
int main()
{
    string S;
    cin>>S;
    int N;
    cout<<dup(S,N);
    return 0;
}


