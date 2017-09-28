///Bitwise operators doesnt calculate through entire number...Rather it calculates per bit////
///exmp:(0001)&(0010) = 0&0=0 , 0&0=0 , 0&1=0 , 1&0=0 , ans = (0000) = 0

/// (n & m) means logical AND Gate/// exm: 1 & 2 = (0001) & (0010) = (0000) = 0 // bcoz both 1 then 1
/// (n | m) means logical OR Gate /// exm: 1 | 2 = (0001) | (0010) = (0011) = 3 // bcoz one 1 then 1
/// ~(n) means logical NOT Gate   /// exm: ~(n) = -(n+1) = -(1+1) = -2
/// (n ^ m) means logical XOR Gate// exm: (1^2) = (0001)^(0010) = (0011) = 3 // bcoz if n=0 and m=0 then ans=0//n=1 and m=1 then ans=0//n=0 and m=1 then ans = 1//n=1 and m=0 then ans = 1
/// (n>>2) means logical Right Shift which shift 1 to next 2 digit/// 1>>2 = (0001)>>2 = (0000) = 0 (overlaped)
/// (n<<2) means logical Left Shift which shift 1 to before 2 digit/// 1<<2 = (0001)<<2 = (0100) = 4

/// /// TRUTH TABLE CAN HELP BETTER/// ///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,band,bor,bnot,bxor,brshift,blshift;
    cout << "Enter 2 value : \n";
    cin >> n >> m;
    band = n & m;
    bor = n | m;
    bnot = ~(n);
    bxor = (n^m);
    brshift = n>>2;
    blshift = n<<2;
    cout << "AND is : " << band << endl;
    cout << "OR is : " << bor << endl;
    cout << "NOT is : " << bnot << endl;
    cout << "XOR is : " << bxor << endl;
    cout << "Right Shift is : " << brshift << endl;
    cout << "Left Shift is : " << blshift << endl;

    return 0;

}
///FOR MORE INFO GO TO THIS LINK - https://www.tutorialspoint.com/cplusplus/cpp_operators.htm ///
