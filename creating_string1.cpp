
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
 
vector<string> ans;
set<string> st;
void find(vector<int> choosen, string s,string curr){
	if(choosen.size()==s.length() && st.find(curr)==st.end()){
		ans.push_back(curr);
		st.insert(curr);
		return ;
	}
	for(int i=0;i<s.length();i++){
		if(find(choosen.begin(),choosen.end(),i)==choosen.end()){
			choosen.pb(i);
			curr+=s[i];
			find(choosen,s,curr);
			choosen.pop_back();
			curr.pop_back();
		}
	}
}
 
int32_t main(){
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
	string s;
	cin>>s;
	vector<int> temp;
	sort(s.begin(),s.end());
	find(temp,s,"");
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
