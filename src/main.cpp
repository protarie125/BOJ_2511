#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto a = vi(10);
	for (int i = 0; i < 10; ++i) {
		cin >> a[i];
	}

	auto b = vi(10);
	for (int i = 0; i < 10; ++i) {
		cin >> b[i];
	}

	auto pa = int{ 0 };
	auto pb = int{ 0 };
	auto win = char{ 'D' };
	for (int i = 0; i < 10; ++i) {
		if (a[i] == b[i]) {
			pa += 1;
			pb += 1;
		}
		else if (a[i] < b[i]) {
			pb += 3;
			win = 'B';
		}
		else {
			pa += 3;
			win = 'A';
		}
	}

	cout << pa << ' ' << pb << '\n';
	if (pa < pb) {
		cout << 'B';
	}
	else if (pb < pa) {
		cout << 'A';
	}
	else {
		cout << win;
	}

	return 0;
}