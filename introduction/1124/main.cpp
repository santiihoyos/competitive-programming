#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio (false);
	string s;
	while (getline(cin, s)) {
		cout << s << endl;
	}
	return 0;
}
