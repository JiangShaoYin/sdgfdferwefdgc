#include <bits/stdc++.h>
using namespace std;
strcut Classes {
    int time;
    bool begin = true;
    Classes(int a, bool b) {
        time = a; begin = b;
    }
    bool operator<(Classes& rhs) {
        if (this->time == rhs.time) {
            return this->begin < rhs.begin
        }
        return this->time < rhs.time;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Classes> p;
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        p.push_back(Classes(a, b));

    }
 
}