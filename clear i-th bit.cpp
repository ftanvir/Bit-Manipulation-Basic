#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n>>i; //input number(n) & the i-th bit we want to clear
    int mask =  ~(1<<i); //make left shift "1" i times and make not(~) the whole
    int ClearBitNumber = mask & n; 
    return 0;
}