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
	//ios_base :: sync_with_stdio(0);
	//cin.tie(0);
	//cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	vector<pair<int,pi>> vec;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		vec.pb({x,{-1,i}});
		vec.pb({y,{1,i}});
	}
	sort(vec.begin(),vec.end());
	vector<int> rooms;
	int occ=0;
	int mx=0;
	vector<int> ans(n+5,0);
	for(int i=1;i<=n;i++){
		int is= vec[i].se.fi;
		int ind= vec[i].se.se;
		if(is){
			rooms.pb(ans[ind]);
		}
		else if((int)rooms.size()==occ){
			mx++;
			ans[ind]=mx;
		}
		else{
			ans[ind]=rooms[occ];
			occ++;
		}
	}
	cout<<mx<<endl;
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
