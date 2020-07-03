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
	int x,n;
	cin>>x>>n;
	map<int,int> mp;
	set<int>st;
	st.insert(0);
	st.insert(x);
	mp[x]=1;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		auto it= st.lower_bound(a);
		int r= *it;
		it--;
		int l=*it;
		mp[r-l]--;
		if(!mp[r-l]){
			mp.erase(r-l);
		}
		st.insert(a);
		mp[r-a]++;
		mp[a-l]++;
		cout<<((--mp.end())->first)<<" ";
	}
	return 0;
}
