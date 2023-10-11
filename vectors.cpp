#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[10]; //fixed size
    vector<int>v; //size can be modified
    int n;
    cin>>n;
    for(int i;i<n;++i){
        int x;
        cin>>x;
        v.push_back(x);  //O(1)
    }
    printVector(v);
}