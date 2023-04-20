#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int k;
    cout<<"Enter the value of k: "<<endl;
    cin>>k;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    priority_queue<int, vector<int>> pq;    
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }

    int count = 0;
    int sum = 0;

    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
        count++;

        if(sum >= k){
            break;
        }
    }

    if(sum < k){
        cout<<"-1"<<endl;
    }else{
        cout<<count<<endl;
    }
    return 0;
}