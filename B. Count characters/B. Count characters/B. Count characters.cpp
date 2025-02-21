#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
typedef long long LL;
typedef int  INT;
typedef double DOUBLE;

using namespace std;
struct MyStruct
{
	INT NUMBER1;
	INT NUMBER2;
	INT NUMBER3;
	INT NUMBER4;
	string MYSTRING1;
	string MYSTRING2;
	string MYSTRING3;
	string MYSTRING4;
};
int main()
{

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	MyStruct REFERENCE;

	REFERENCE.MYSTRING1; cin >> REFERENCE.MYSTRING1;
	sort(REFERENCE.MYSTRING1.begin(), REFERENCE.MYSTRING1.end());

	int array[200] = { 0 };

	for (int i = 0; i < REFERENCE.MYSTRING1.size(); i++)
	{
		array[REFERENCE.MYSTRING1[i]]++;
	}
	for (int i = 0; i < REFERENCE.MYSTRING1.size(); i++) {
		if (array[REFERENCE.MYSTRING1[i]] != 0) {
			cout << REFERENCE.MYSTRING1[i] << " " << array[REFERENCE.MYSTRING1[i]] << endl;
			array[REFERENCE.MYSTRING1[i]] = 0;
		}
	}
}