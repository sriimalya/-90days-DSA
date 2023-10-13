#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int,int>> &v) 
{
    cout << "size of vector= " << v.size() << endl; // size()->O(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << " "<<v[i].second<<endl;
    }
    cout << endl;
}
int main(){

    vector<pair<int,int>> v={{1,2},{3,4},{4,5}}; // vector of pair, instead of pair array
    printVector(v);
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int x,y;
    cout<<"Enter Pair Elements:"<<endl;
        for (int i = 0; i < v.size(); ++i)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVector(v);
}
