#include"table.h"
using namespace std;




int main()

{
	Table hash;

	hash.read();
	hash.testTable();



}






















/*		list<string>::iterator FwdItPtr;


		vector<vector<vector<list<string> >>>table;// 

		vector<vector<list<string> > > x;// create a 2d vector of list<string> type
		for (int i = 0; i < MAX_TABLE; i++)
		{
			x.push_back(vector<list<string> >(MAX_TABLE));// push the 2d vector of list<string> type into another vector
			
		}
		for (int i = 0; i < MAX_TABLE; i++)
		{
			table.push_back(x);
		}
	


hash<string> hashi;
hash<string> hashj;
hash<string> hashk;
fstream file;



file.open("dictionary.txt", ios::in);
string temp;

while (!file.eof())
{
	file >> temp;
	//	cout << temp << endl;

	    //cout << hashi(temp) % MAX_TABLE << endl;
		//cout << hashj(temp) % MAX_TABLE << endl;
		//cout << hashk(temp) % MAX_TABLE << endl;
table[hashi(temp) % MAX_TABLE][hashj(temp) % MAX_TABLE][hashk(temp) % MAX_TABLE].push_back(temp);



}

cout << "\a\a\a" << endl;


for (int i = 0; i < MAX_TABLE; i++)
{
	for (int j = 0; j < MAX_TABLE; j++)
	{
		for (int k = 0; k < MAX_TABLE; k++)
		{
			for (FwdItPtr = table[i][j][k].begin(); FwdItPtr != table[i][j][k].end(); FwdItPtr++)
			{
				cout << *FwdItPtr << " ";
			}
		}
	}
	cout << endl;
	*/

