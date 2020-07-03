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
	stack<int> st;
	int ans[n];
	For(i,n){
		if(st.empty()){
			ans[i]=0;
			st.push(i);
		}
		else{
			while(!st.empty() && ar[st.top()]>=ar[i]){
				st.pop();
			}
			if(st.empty()){
				ans[i]=0;
			}
			else{
				ans[i]=st.top()+1;
			}
			st.push(i);
		}
	}
	For(i,n) cout<<ans[i]<<" ";
	return 0;
}
