#include<iostream>
#include<unordered_set>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;
float getRandFloat() {
    return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}
int getRand(int min, int max) {
    return min + static_cast <int>( getRandFloat() * ( max - min + 1 ) );
}
int main(void) {
    srand(time(NULL));
    int n = getRand(1e5, 1e6);
    unordered_set<int> s;
    cout <<n<<'\n';
    for (int i=0; i<n; i++) {
        int x = getRand(0, 1e9);
        if (!s.count(x)) {
          s.insert(x);
          cout <<x<<' ';
        }
    }
    return 0;
}