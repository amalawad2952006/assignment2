
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		cout << x/ 10 + x % 10 << endl;
	}
	return 0;

}
