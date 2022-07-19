#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int main(void) {
    int n,x; cin>>n;
    unordered_set<int> s;
    vector<int> v;
    for(int i=0; i<n; i++) {
      cin>>x; s.insert(x);
    }
    for(int i=0; i<n; i++) {
      cin>>x;
      if (s.count(x)) v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(auto x: v) cout<<x<<' ';
    return 0;
}