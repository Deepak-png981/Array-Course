#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr , arr + n);
    cout<<"MIN "<<arr[0]<<endl;
    cout<<"MAX "<<arr[n-1]<<endl;
}
int main()
{
    solve();
    return 0;
}