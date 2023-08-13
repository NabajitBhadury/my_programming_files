#include<iostream>
#include<vector>
using namespace std;

int display_vector(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    
}

int main()
{
    int n;
    cin >> n;
    vector<int>vec;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        vec.push_back(element);
    }
    display_vector(vec);
    
    return 0;
}
