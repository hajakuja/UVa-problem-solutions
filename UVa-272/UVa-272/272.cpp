#include <string>
#include <iostream>
using namespace std;
int main() 
{
	string str;
	string out;
	bool e_para = 1;
	while ( !cin.eof()) 
	{
		getline(cin, str);
		
		
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '"') 
			{
				if (e_para) 
				{
					out += "``";
					e_para = 0;
				}
				else 
				{
					out += "''";
					e_para = 1;
				}
			}else{ out += str[i]; }

		}

		if(!cin.eof())
		out += '\n';


	}
		cout << out;
		
}