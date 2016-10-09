#include <iostream>
using namespace std;
int main() 
{

	int  k, m, n, x, y;
	cin >> k;
	while (k) {
		
		
		cin >> n >> m;
		while (k--)
		{

			cin >> x >> y;
			if (x == n || y == m) { cout << "divisa\n"; }
			else if (x > n && y < m) { cout << "SE\n"; }
			else if (x > n && y > m) { cout << "NE\n"; }
			else if (x < n && y < m) { cout << "SO\n"; }
			else cout << "NO\n";
		}
		cin >> k;
		
	}
}