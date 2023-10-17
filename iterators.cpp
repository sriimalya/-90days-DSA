// itrators resemble pointers, they pint the elements of the containers in STL
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 8};
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin(); // begin points the first loc, end points to next of last element
    cout << *it << " " << *(it + 1) << endl;

    //some containers in stl do not have indexes, hence their values can be accessed by looping iterators from begin to end
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout<<*it<<endl;
    }
}