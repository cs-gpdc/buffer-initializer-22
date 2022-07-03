#include<iostream>
using namespace std;
int main(void) {
    int n; cin>>n;
    int mx = -1, mx2 = -1;
    for(int i=0; i<n; i++) {
      int x; cin>>x;
      if (x > mx) {
        mx2 = mx;
        mx = x;
      } else if (x > mx2) {
        mx2 = x;
      }
    }
    cout << mx2;
    return 0;
}