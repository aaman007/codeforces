#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ab,cd,bc,ad,part1,part2,res;
    cin >> a >> b >> c >> d;
    ab = a ^ b;
    cd = c | d;
    part1 = ab & cd;

    bc = b & c;
    ad = a ^ d;
    part2 = bc | ad;

    res = part1 ^ part2;
    cout << res << endl;
    return 0;
}

///In the problem OR gate actually means XOR gate and XOR gate means OR gate///
///They swapped it///But the picture shows before swap///
