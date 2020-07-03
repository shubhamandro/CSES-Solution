#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define nl cout<<"\n"
#define pb push_back
#define se second
#define fi first
#define int long long 
#define pi pair<int,int>
#define vpi vector<pi>
#define vvi vector<vpi>
#define For(i,n) for(int i=0;i<n;i++)
#define pie =3.14159265358979323846264338327950;
const int mod= 1e9+7;

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	int ar[n];
	For(i,n) cin>>ar[i];
	vector<int> dp(1e6+1,0);
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=1e6;j>=0;j--){
			if(j-ar[i]>=0 && dp[j-ar[i]]==1){
				dp[j]=1;
			}
		}
	}
	vector<int> ans;
	for(int i=1;i<=1e6;i++){
		if(dp[i]==1) ans.pb(i);
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	return 0;
}
