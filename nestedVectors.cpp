#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int, int>> &v)
{
    cout << "size of vector= " << v.size() << endl; // size()->O(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}
void printArrVector(vector<int> &v)
{
    cout << "size of vector= " << v.size() << endl; // size()->O(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i]<<" "<<endl;
    }
    cout << endl;
}
void arrayVector()
{
    vector<int> V[10]; // array of 10 vectors
    for (int i = 0; i < 10; ++i)
    {
        int size;
        cout << "Enter size for vector" << i << endl;
        cin >> size;
        int x;
        for (int j = 0; j < size; ++j)
        {
            V[i].push_back(x);
        }
        for (int k = 0; k < 10; ++k)
        {
            printArrVector(V[k]);
        }
    }
}
int main()
{

    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {4, 5}}; // vector of pair, instead of pair array
    printVector(v);
    int n;
    cout << "Enter size: ";
    cin >> n;
    int x, y;
    cout << "Enter Pair Elements:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    printVector(v);
    arrayVector();
}
