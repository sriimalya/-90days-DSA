#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int, int>> &v)
{
    cout << "size of vector= " << v.size() << endl; // size()->O(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << " " << v[i].second << "  ";
    }
    cout << endl;
}
void printArrVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
       cout<<v[i]<<endl;
    }
}
void arrayVector(vector<int> V[5])
{
    for (int i = 0; i < 5; ++i)
    {
        int size;
        cout << endl
             << "Enter size for vector " << i <<": ";
        cin >> size;
        cout << "Enter elements: ";

        for (int j = 0; j < size; ++j)
        {
            int x;
            cin >> x;
            V[i].push_back(x);
        }
    }
}
int main()
{

    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {4, 5}}; // vector of pair, instead of pair array
    printVector(v);

    vector<pair<int, int>> v1; // pair vectors
    int n;
    cout << "Enter size: ";
    cin >> n;
    int x, y;
    cout << "Enter Pair Elements:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        v1.push_back({x, y});
    }
    printVector(v1);

    vector<int> V[5]; // array of 10 vectors
    arrayVector(V);
    for (int i = 0; i < 5; ++i)
    {
        cout << "Elements at index "
             << i << ": ";
        printArrVector(V[i]);
    }
}
