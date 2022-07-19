#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
    int n; cin>>n;
    vector<int> a(n), b(n), v;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
        if (a[i]==b[j]) {
          v.push_back(a[i]);
        }
      }  
    }
    sort(v.begin(), v.end());
    for(auto x: v) cout<<x<<' ';
    return 0;
}