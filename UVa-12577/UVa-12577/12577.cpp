#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() 
{
	string b;
	int i = 1;
	cin >> b;
	while ( b != "*")
	{
		if (b == "Hajj") cout << "Case " << i << ":" << " Hajj-e-Akbar"<<endl;
		else cout << "Case " << i << ":" << " Hajj-e-Asghar"<<endl;

		i++;
		cin >> b;
	}
	return 0;
}