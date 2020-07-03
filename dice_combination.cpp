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
	vector<int> dp(n+1,0);
	for(int i=1;i<=min(6LL,n);i++) dp[i]=1;
	for(int i=1;i<=n;i++){
		for(int j=max(1LL,i-6);j<i;j++){
			dp[i]+=dp[j];
			dp[i]%=mod;
		}
		//for(int j=0;j<n;j++) cout<<dp[j]<< " ";
		//cout<<endl;
	}
	cout<<dp[n]<<endl;
	return 0;
}
