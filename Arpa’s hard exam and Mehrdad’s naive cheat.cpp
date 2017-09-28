#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin >> a;
    b = a%4;
    if(a==0)
       cout << "1" << endl;
    else if(b==1)
       cout << "8" << endl;
    else if(b==2)
       cout << "4" << endl;
    else if(b==3)
       cout << "2" << endl;
    else
       cout << "6" << endl;
    return 0;
}
