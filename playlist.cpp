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
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	set<int> st;
	int i=0;
	int j=0;
	int ans=0;
	while(j<n){
		if(j<n && st.find(ar[j])==st.end()){
			st.insert(ar[j]);
			j++;
		}
		else{
			ans=max(ans,(int)st.size());
			while(st.find(ar[j])!=st.end()){
				st.erase(ar[i]);
				i++;
			}
		}
	}
	ans=max(ans,(int)st.size());
	cout<<ans<<endl;
	return 0;
}
