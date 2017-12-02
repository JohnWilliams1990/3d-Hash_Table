
#include "table.h"



void Table::read()
{

	fstream file;
	file.open("dictionary.txt", ios::in);
	string temp;


	hash<string> hashi;
	hash<string> hashj;
	hash<string> hashk;

	string temp2, temp3, temp4;
	while (!file.eof())
	{
		file >> temp;
		// - 0,2,4 gives a 25^2 patten for one slate of the table
		// - 1, 2 ,4 gives 8523 unused
		// -4, -3, -1 gives 4378 unused
		// -4, -3, -2 gives 2291 unused
		// %2, %3, %4 gives 111 unused
		// %3, %4, %5 gives 0 unused MAX_TABLE == 25

		temp2 = temp.substr(temp.size()% 3);
		temp3 = temp.substr(temp.size() % 4);
		temp4 = temp.substr(temp.size() % 5);
		
		
	/*	cout << hashi(temp2) % MAX_TABLE << "|";
		cout << hashj(temp3) % MAX_TABLE<< "|";
		cout << hashk(temp4) % MAX_TABLE<< endl;*/
		
		table[hashi(temp2) % MAX_TABLE][hashj(temp3) % MAX_TABLE][hashk(temp4) % MAX_TABLE].push_back(temp);
		temp2.clear();
		temp3.clear();
		temp4.clear();

		/*temp2.push_back(temp[0]);
		temp3.push_back(temp[1]);
		temp4.push_back(temp[2]);*/
		/*

		/*temp2.pop_back();
		temp3.pop_back();
		temp4.pop_back();*/
		


	}



	cout << "\a\a";

}


void  Table::testTable()
{
	hash<string> hashi;
	hash<string> hashj;
	hash<string> hashk;
	list<string>::iterator FwdItPtr;

	int count = 0;
	int total = 0;
	int max = 0;
	int min = 30;
	for (int i = 0; i < MAX_TABLE; i++)
	{
		for (int j = 0; j < MAX_TABLE; j++)
		{
			for (int k = 0; k < MAX_TABLE; k++)
			{
				total++;
			/*	for (FwdItPtr = table[20][10][20].begin(); FwdItPtr != table[20][10][20].end(); FwdItPtr++)
				{
					cout << *FwdItPtr << " ";
				}*/
				cout << table[i][j][k].size() <<"|";
				
				if (table[i][j][k].empty())
				{
					//cout << endl  << "\t\tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << i<<"|"<<j << "|" << k << endl;
					count++;
				}
				else if (max < table[i][j][k].size())
				{
					max = table[i][j][k].size();
				}
				if (min > table[i][j][k].size())
				{
					min == table[i][j][k].size();
				}

			}
			cout << endl;
		}
		cout << endl << endl;
	}

	cout << "total slots in table: " << total << endl;
	cout << endl << "unused table slots: " << count << endl;
	cout << "max number in a particular slot: " << max<< endl;
	cout << "min number in a slot: "<< min<< endl;

	cin.get();
	cin.get();

}