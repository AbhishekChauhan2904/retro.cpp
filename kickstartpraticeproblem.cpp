#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vvi;
typedef vector <ll> vll;
typedef pair <int,int> pii;
typedef pair <long,long> pll;
typedef vector<pii> vpii;
const int N=0;
#define REP(i,x,y) for(int i=x;i<y;i++)
void solve(){
	int n;
	int a;
	cin>>n>>a;
	int b[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>b[i];
		sum+=b[i];
	}
	int d=sum%a;
cout<<d<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t=1;
  cin>>t;
  for(ll tt=1;tt<=t;tt++){
  	cout<<"Case #"<<tt<<": ";
  	solve();
  }
	
	return 0;
}
