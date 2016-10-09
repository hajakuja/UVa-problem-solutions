#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	int N, B, H, W, p, a, min;
	while (scanf("%d %d %d %d",&N, &B, &H, &W) != EOF) {
		
		bool a_ka = false;
		//cin >> N >> B >> H >> W;
		min = B;
		
		a_ka = false;
		while (H--)
		{
			
			int i = 0;
				cin >> p;
			
			for (i = 0; i < W; i++)
			{
				cin >> a;

			if (B - p*N > 0) {
				if (a >= N)
				{
					
						a_ka = true;
						if (p*N < min) 
						{
							min = p*N;
							
						}
					}
				
				}
			}


		}
		if (a_ka)
		{
			
			cout << min << endl;
		}
		else
		{
			cout << "stay home" << endl;
		}
	}
}