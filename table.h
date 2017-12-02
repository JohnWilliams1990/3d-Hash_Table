#ifndef TABLE_H
#define TABLE_H


#include<iostream>
#include<string>
#include<unordered_map>
#include <vector>
#include <list>
#include <fstream>
using namespace std;


const int MAX_TABLE = 25;// 25


class Table 
{

private:
	vector<vector<vector<list<string> >>>table;// 
	vector<vector<list<string> > > x;// create a 2d vector of list<string> type


public:
	//
	//
	//Description: int his function we are creating a 2d vector and then pushing this 2d vector of list string type into a
	//nother vector 
	//
	//
	Table()
	{
		for (int i = 0; i < MAX_TABLE; i++)
		{
			x.push_back(vector<list<string> >(MAX_TABLE));// push the 2d vector of list<string> type into another vector

		}
		for (int i = 0; i < MAX_TABLE; i++)
		{
			table.push_back(x);
		}
	}
	void read();
	void testTable();
	




};








#endif