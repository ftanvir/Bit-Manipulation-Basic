#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int counter=0;
    while(n) {
        counter += n&1;
        n >>= 1;
    }
    return counter;
}
int main()
{
    // int a, b;
    // cin>>a>>b;
    // int SetBitsToSame = a^b;
    int a;
    cin>>a;
    cout<<countSetBits(a)<<endl;

    return 0;
}