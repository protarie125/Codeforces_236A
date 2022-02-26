#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto letters = set<char>{};

	string line;
	cin >> line;
	auto n = line.length();
	for (int i = 0; i < n; ++i) {
		letters.insert(line[i]);
	}

	auto c = letters.size();
	if (0 == c % 2) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}

	return 0;
}