#include <iostream>
using namespace std;
int main() 
{
	long long a, b;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> a;
		cin >> b;
		if (a > b) cout << ">\n";
		else if(a<b) cout << "<\n";
		else cout << "=\n";

	}
}