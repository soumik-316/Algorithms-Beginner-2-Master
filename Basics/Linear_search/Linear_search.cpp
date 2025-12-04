#include <bits/stdc++.h>
using namespace std;


int linear_search(vector<int> &a, int target) {
for(int i = 0; i < a.size(); i++) {
if(a[i] == target) return i; // found
}
return -1; // not found
}


int main() {
vector<int> a = {5, 2, 9, 1, 7};
int target = 1;


int idx = linear_search(a, target);
if(idx != -1) cout << "Found at index: " << idx;
else cout << "Not Found";
}