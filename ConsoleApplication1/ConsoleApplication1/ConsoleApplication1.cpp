// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<cmath>
#include<climits>
#include<cstring>
#include <cstdio>
#include<vector>
#define ZERO 0
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	stringstream ss("23,4,56");
	string x = "1234";
	char ch;
	int a, b, c;
	ss >> a >>ch;// a = 23, b = 4, c = 56
	ss >> b >> ch;
	ss >> c >>ch;
	return 0;
}


