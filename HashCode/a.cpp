#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

struct descrip{
    ll book,sign_up,per_day;
};

int main() {
    // ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("d_tough_choices","w",stdout);
	freopen("output.txt","w",stdout);
    ll books,lib,days,temp;
    cin>> books >> lib >> days;
    ll scores[books];
    for(ll i=0;i<books;i++) cin >> scores[i];
    // cout<<books;
    //0 if not selected
    ll check[books]={0};

    descrip arr[lib];//,tempoo[lib];
    // vector<vector<ll> > lib_books_number;
    cout<<lib<<"\n";
    for(ll i=0;i<lib;i++){
        cin >> arr[i].book >> arr[i].sign_up >> arr[i].per_day;
        cout<<i<<" "<<arr[i].book<<"\n";
        vector<ll> boo;
        ll xxx=arr[i].book;
        for(ll j=0;j<xxx;j++){
            cin>>temp;
            boo.pb(temp);
        }
        for(ll j=0;j<xxx;j++){
            cout<<boo[j]<<" ";
        }
        cout<<endl;
    // for(ll i=0;i<lib;i++) cout << tempoo[i].book <<" "<< tempoo[i].sign_up <<" "<< arr[i].per_day<<endl;

    }



    return 0;
}