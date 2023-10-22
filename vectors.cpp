#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v) // pass the vector by reference to avoid copying; now any changes in v in this func will also reflect in original vector
{
    cout << "size of vector= " << v.size() << endl; // size()->O(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[10];     // fixed size
    vector<int> v; // size can be modified,continuous memory allocation,hence, size limts upto 10^5 to 10^7
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter element: ";
        int x;
        cin >> x;
        v.push_back(x); // O(1)
    }
    printVector(v);

    vector<int> v1(5); // by default all values are 0
    printVector(v1);
    v1.push_back(3); // 3 is inserted as 6th element

    vector<int> v2(5, 2); // value of each 5 elements=2

    v.pop_back(); // pops last element; O(1)

    vector<int> v3 = v; // O(n); to copy vector v; any changes in either v or v3 will not affecr each other
    cout<<v[0]<<" "<<v.at(0);
}