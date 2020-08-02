

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
    }

}