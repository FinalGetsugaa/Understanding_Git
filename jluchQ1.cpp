#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,maxx=INT_MIN;
        cin>>n;
        long int s[n],p[n],v[n];
        for(long int i=0;i<n;i++)
            cin>>s[i]>>p[i]>>v[i];
        for(long int i=0;i<n;i++){
            if(p[i]%(s[i]+1)==0)
            {
                if((p[i]/(s[i]+1))*v[i]>maxx)
                    maxx=(p[i]/(s[i]+1))*v[i];
            }
            else{
                if(floor(p[i]/(s[i]+1))*v[i]>maxx)
                    maxx=floor(p[i]/(s[i]+1))*v[i];
            }
        }
        cout<<maxx<<"\n";
    }
}