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
#define pie =3.14159265358979323846264338327950;
const int mod= 1e9+7;

int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	string s;
	cin>>s;
	int n=s.length();
	int ans=1;
	int cnt=1;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			cnt++;
		}
		else{
			ans=max(ans,cnt);
			cnt=1;
		}
	}
	ans=max(ans,cnt);
	cout<<ans<<endl;
	return 0;
}
