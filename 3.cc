#include <bits/stdc++.h>
using namespace std;
strcut Classes {
    int begin, end;
    Classes(int a, int b) {
        begin = a; end = b;
    }
    bool operator<(Classes& rhs) {
        if (this->begin == rhs.begin) {
            return this->end == rhs.end
        }
        return this->begin < rhs.begin;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Classes> p;
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        p.push_back(Classes())
    }
 
}