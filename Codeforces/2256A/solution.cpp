#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    while(t--){

    int a,b,c;
    cin>>a>>b>>c;

    int mn=min({a,b,c});
    int mx=max({a,b,c});
    int mid=(a+b+c)-mn-mx;

    if(mn+mid<mx){
        cout<<mid<<endl;
        continue;
    }
    else{
        cout<<mx-mn<<endl;
        continue;
    }
}
}