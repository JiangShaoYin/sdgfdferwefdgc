

int main() {
    int n;
    cin >> n;
    map<int, set<int>>  mp;
    int cnt = 0;
    map<int, int> ans;
    for (int i = 0; i < n; i++) {
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        if (a > b) swap(a, b);
      
        int t = 1000 * c + 100 * d + 10 * e + f;

        if (mp.count(10 * a + b) && mp[10 * a + b].count(t)) { // 重复筛子
            ans[10 * a + b]++;
            continue;
        }

        mp[10 * a + b].insert(1000 * c + 100 * d + 10 * e + f);
        mp[10 * a + b].insert(1000 * c + 100 * d + 10 * f + e);

        mp[10 * a + b].insert(1000 * d + 100 * c + 10 * f + e);
        mp[10 * a + b].insert(1000 * d + 100 * c + 10 * e + f);

        mp[10 * a + b].insert(1000 * e + 100 * f + 10 * c + d);
        mp[10 * a + b].insert(1000 * e + 100 * f + 10 * d + c);

        mp[10 * a + b].insert(1000 * f + 100 * e + 10 * c + d);
        mp[10 * a + b].insert(1000 * f + 100 * e + 10 * d + c);
    }
    vector<int> res;
    for (auto& p : ans) {
        res.push_back();
    }
    sort(res.begin(),res.end());
    for(auto it =)

}