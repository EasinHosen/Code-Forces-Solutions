#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, a[120];
    cin>>n;
    double ans = 0.0, s = 0.0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
    ans = s/n;
    cout<<fixed<<setprecision(12)<<ans<<"\n";
    return 0;
}
