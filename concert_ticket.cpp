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
	int n,m;
	cin>>n>>m;
	map<int,int> mp;
	for(int i=0,a;i<n;i++){
		cin>>a;
		mp[a]++;
	}
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		auto x= mp.upper_bound(a);
		if(x==mp.begin()){
			cout<<-1<<endl;
		}
		else{
			x--;
			cout<<x->first<<endl;
			if(x->second==1){
				mp.erase(x->first);
			}
			else{
				mp[x->first]--;
			}
		}
	}
	return 0;
}
