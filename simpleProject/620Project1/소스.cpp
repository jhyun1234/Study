#include <iostream>
#include <algorithm>
using namespace std;

class metro {
private:
	long long si, vi;
public:
	metro() {
		si = 0;
		vi = 0;
	}
	void givesi(int s) {
		si = s;
	}

	void givevi(int v) {
		vi = v;
	}

	void plussi(int s) {
		si += s;
	}

	int getsi() {
		return si;
	}

	int getvi() {
		return vi;
	}

	~metro() {}
};

int find(metro* m, int n);

int main() {
	
	metro met[100];

	long long t, n, m, giv, index = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> giv;
			met[j].givesi(giv);
		}
		for (int j = 0; j < n; j++) {
			cin >> giv;
			met[j].givevi(giv);
		}
		for (int j = m; j > 0; j--) {
			index = find(met, n);
			met[index].plussi(met[index].getvi());
		}
		index = find(met, n);
		cout << met[index].getsi() << endl;

	}

	return 0;
}

int find(metro* m, int n) {
	int index = 0, min = m[0].getsi();

	for (int i = 0; i < n; i++) {
		if (m[i].getsi() < min) {
			min = m[i].getsi();
			index = i;
		}
	}
	return index;
}