 #include<bits/stdc++.h>
using namespace std;
int finduqnique(int *a,int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(a[i]==a[j]&&i!=j){
                break;
            }
    }
        if(j==n){
            return a[i];
        }
    }
    return INT_MIN;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=finduqnique(a,n);
        cout<<ans<<endl;
    }
    return 0;
}