#include <bits/stdc++.h>
using namespace std;
struct Classes {
    int time;
    bool begin = true;
    Classes(int a, bool b) {
        time = a; begin = b;
    }
    bool operator<(Classes& rhs) {
        if (this->time == rhs.time) { // 让结束时间排在开始时间前面
            return this->begin < rhs.begin;
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
        p.push_back(Classes(a, true));
        p.push_back(Classes(b, false));
    }
    sort(p.begin(), p.end());
    int cnt = 0, k = 0;
    for (auto classes : p) {
        if (classes.begin) {
            cnt++;
            k = max(k, cnt);
        } else {
            cnt--;
        }
    }
    cout<< k << endl;
    return 0;
}