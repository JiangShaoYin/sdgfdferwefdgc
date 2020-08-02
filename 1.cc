#include <bits/stdc++.h>
using namespace std;

bool InSet(vector<pair<set<int>, int> > & vec, int t) {
	for (auto& st : vec) {
		if (st.first.count(t)) {
			st.second++;
			return true;
		}
	}
	return false;
}


int main() {
	int n;
	cin >> n;
	map<int, vector<pair<set<int>, int> > >  mp;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;

		int t = 1000 * c + 100 * d + 10 * e + f;
		if (mp.count(10 * a + b) && InSet(mp[10 * a + b], t)) { // 重复筛子
			continue;
		}
		set<int> st;
		st.insert(1000 * c + 100 * d + 10 * e + f);
		st.insert(1000 * c + 100 * d + 10 * f + e);

		st.insert(1000 * d + 100 * c + 10 * f + e);
		st.insert(1000 * d + 100 * c + 10 * e + f);

		st.insert(1000 * e + 100 * f + 10 * c + d);
		st.insert(1000 * e + 100 * f + 10 * d + c);

		st.insert(1000 * f + 100 * e + 10 * c + d);
		st.insert(1000 * f + 100 * e + 10 * d + c);

		mp[10 * a + b].push_back({ st, 1 });
		cnt++;
	}
	vector<int> res;
	for (auto& p : mp) {
		for (auto & vec : p.second) { // vector<pair<set<int>, int> > 
			res.push_back(vec.second);
		}
	}
	sort(res.begin(), res.end());
	cout << cnt << endl;
	for (int i = res.size() - 1; i >= 1; i--) {
		cout << res[i] << " ";
	}
	cout << res[0] << endl;
}