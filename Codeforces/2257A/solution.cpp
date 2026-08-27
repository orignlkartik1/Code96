#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<bool> alpha(26,false);
        
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            
            alpha[s[0]-'a']=true;
        }
        bool ok=true;
        
        for(int i=0;i<m;i++){
            string s;
            cin>>s;
            
            for(auto c:s){
                if(!alpha[c-'A'])ok=false;
            }
        }
        
        string res=(ok)?"YES":"NO";
        
        cout<<res<<endl;
    }
}
