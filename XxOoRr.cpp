/*
Codechef July Long Challenge 2021 problem
problem link: https://www.codechef.com/JULY21C/problems/XXOORR
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int ans =0;
    for(int i =0; i<32; i++) {
        int bitCounter =0;
        for(int j=0; j<n; j++) {
            if(arr[j]&1) {
                bitCounter++;
            }
            arr[j]/=2;
        }
        ans += ((bitCounter+ k-1)/k);
    }
    cout<<ans<<endl;


}

int main()
{
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}