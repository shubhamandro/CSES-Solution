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

vector<vector<int>> dp(5000,vector<int>(5000,-1));

int find(vector<int> &ar, int l,int r){
	if(r==l){
		return ar[l];
	}
	if(r-l==1){
		return max(ar[l],ar[r]);
	}
	if(dp[l][r]!=-1) return dp[l][r];
	int ans=max({ar[l]+min(find(ar,l+1,r-1),find(ar,l+2,r)),ar[r]+min(find(ar,l+1,r-1),find(ar,l,r-2))});
	dp[l][r]=ans;
	return ans;
}

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	vector<int> ar(n);
	For(i,n)cin>>ar[i];
	cout<<find(ar,0,n-1);
	return 0;
}
