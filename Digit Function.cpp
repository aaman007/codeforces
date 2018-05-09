#include <iostream>

using namespace std;
int ans;
void fun(int s)
{
    ans++;
    if(s == 0)
        return;
    int sum = s;
    while(s)
    {
        sum -= (s%10);
        s /= 10;
    }
    fun(sum);
}

int main() {
    int s;
    cin >> s;
    fun(s);
    cout << ans << endl;
}
