

int main() {
    int n;
    cin >> n;
    map<int, set<int>>  mp;
    int cnt = 0;
    map<pair<int, int>, int> ans;
    for (int i = 0; i < n; i++) {
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        if (a > b) swap(a, b);
        mp[10 * a + b].insert(1000 * c + 100 * d + 10 * e + f);
        mp[10 * a + b].insert(1000 * c + 100 * d + 10 * f + e);

        mp[10 * a + b].insert(1000 * d + 100 * c + 10 * f + e);
        mp[10 * a + b].insert(1000 * d + 100 * c + 10 * e + f);
        
        if (mp.count(10 * a + b) || mp.count(10 * b + a)) {
            int t = 1000 * c + 100 * d + 10 * e + f;
            if (mp[10 * a + b].count(t) || mp[10 * b + a].count(t)) {
                
            }
            if ()
        }
    }

}