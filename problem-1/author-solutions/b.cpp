#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
    int n; cin>>n;
    int *a = new int[n]; 
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    cout << a[n-2];
    return 0;
}