#include <bits/stdc++.h>
using namespace std;
int main()
{
    //a = [5, 4, 1, 4, 3, 5, 1]
    //find non repeating element in the array
    int a[7];
    for(int i=0; i<7; i++) {
        cin>>a[i];
    }
    //if we XOR same number it cancel another. such as 5^5 = 0;
    int res = a[0];
    for(int i = 1; i<7; i++) {
        res = res^a[i];
    }
    cout<<res<<endl;
    return 0;
}