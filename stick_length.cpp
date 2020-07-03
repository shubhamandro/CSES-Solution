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

int find(int val, vector<int> ar){
	int ans=0;
	for(int i=0;i<(int)ar.size();i++){
		ans+=abs(ar[i]-val);
	}
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
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	sort(ar.begin(),ar.end());
	int md= ar[n/2];
	cout<<find(md,ar)<<endl;
	return 0;
}
