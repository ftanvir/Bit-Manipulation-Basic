#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin>>n>>i; //input the number and i(th position to find the bit)
    int mask = 1 << i; //masking another which will left shift to ith
    if(mask&n) { //if i-th bit = 1 return true then the bit is "1"
        cout<<"1"<<endl;
    } else { //else no
        cout<<"0"<<endl;
    }


    return 0;
}