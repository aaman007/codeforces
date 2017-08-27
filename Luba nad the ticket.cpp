#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v,v2;
    int temp = n , sum1 = 0 , sum2 = 0,s1,s2,s3,t1,t2,t3;
    s1 = (temp%10) , temp/=10 ;
    s2 = (temp%10) , temp/=10 ;
    s3 = (temp%10) , temp/=10 ;
    t1 = (temp%10) , temp/=10 ;
    t2 = (temp%10) , temp/=10 ;
    t3 = (temp%10) , temp/=10 ;
    sort(v.begin(),v.end());
    sum1 = s1+s2+s3;
    sum2 = t1+t2+t3;
    if(sum1<sum2)
    {
        swap(sum1,sum2) , swap(s1,t1) , swap(s2,t2) , swap(s3,t3);
    }
    v.push_back(s1),v.push_back(s2),v.push_back(s3);
    v.push_back(9-t1),v.push_back(9-t2),v.push_back(9-t3);

    int diff = sum1-sum2 , cnt = 0;

    sort(v.begin(),v.end());

    for(int i=5;i>=0;i--)
    {
        if(diff<=0)
            break;
        diff -= v[i];
        cnt++;
    }
    cout << cnt << endl;
}
