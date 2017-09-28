#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,a[100],mins=0;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    if(a[0]>15)
    {
        cout << "15" << endl;
        return 0;
    }
    else
        mins += a[0];
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<=15)
           mins += a[i+1]-a[i];
        else
        {
            mins += 15;
            cout << mins << endl;
            return 0;
        }
    }
    if(mins<=15)
        mins += 15;
    else if(mins+15>=90)
        mins += 90-mins;
    else
        mins += 15;
    cout << mins << endl;
    return 0;
}

