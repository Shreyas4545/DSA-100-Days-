 #include <bits/stdc++.h>
using namespace std;
bool comparator(string s1,string s2)
{
    string first=s1+s2;
    string second=s2+s1;
    int i=0;
    while(first[i] and second[i])
    {
        if(first[i]>second[i])
    {
      return true;
    }
    else if(first[i]<second[i]){
        return false;
    }
    i++;
}
}
int main()
{
    int n;
    cin>>n;
    vector<string>arr;
    string temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),comparator);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}