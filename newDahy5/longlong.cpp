#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
         int n;
        cin>>n;
        long long sum=0;
        vector<int> v(n);
        for(auto &x:v){
            cin>>x;
            sum += abs(x);
        }
        int ans=0;
        int count=0;
        for(auto x:v){
            if(x==0 && count==0){
                continue;
            }
            if(x<=0){
                count++;
            }
            else{
                if(count>0){
                    ans++;
                }
                count=0;
            }
        }
        if(count){
            ans++;
        }
        cout<<sum<<" "<<ans<<endl;
        }
    return 0;
}
