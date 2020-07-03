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
	int n,x;
	cin>>n>>x;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	map<int,int> mp;
	for(int i=0;i<n;i++){
		if(mp.find(x-ar[i])!=mp.end()){
			cout<<mp[x-ar[i]]+1<<" "<<i+1<<endl;
			return 0;
		}
		else{
			mp[ar[i]]=i;
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}
