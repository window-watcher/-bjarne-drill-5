#include <iostream>
#include <string>
#include <vector>
#include <cmath>
/*
	Project: Drill 5
	By: Adrian Rodriguez
	Date : 8/5/20 & 8/6/20

	Objectives: 
	- Find & remove errors by only changing, adding or deleting a few characters.
	- Learn how this compiler reacts to different kinds of errors.


*/
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main() //C++ programs start by executing the function main
{
	try {
		//Put statements here
		keep_window_open();//wait for a character to be enter
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();//wait for a character to be enter
		return 1;
	}
	catch (...) {
		cerr << "Opps: unknown exception!\n";
		keep_window_open();//wait for a character to be enter
		return 2;
	}
}
/*
	Original statements
	____________________
		1	Cout << "Success!\n";
		2	cout << "Success!\n;
		3	cout << "Success" << !\n";
		4	cout << success << endl;
		5	string res = 7; vector <int> v(10); v[5] = res; cout << "Success!\n";
		6	vector<int> v(10); v(5) = 7; if(v(5)!= 7 cout << "Success!\n";
		7	if (cond) cout << "Success!\n"; else cout << "Fail!\n";
		8	bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
		9	string s = "ape"; boo c = "fool" <s; if (c) cout << "Success!\n";
		10	string s = "ape"; if (s=="fool") cout << "Success!\n";
		11	string s = "ape"; if (s=="fool") cout < "Success!\n";
		12	string s = "ape"; if (s+"fool") cout < "Success!\n";
		13	vector<char> v(5); for (int i=0; 0 <v.size(); ++i); cout << "Success!\n";
		14	vector<char> v(5); for (int i=0; i <=v.size();++i); cout << "Success!\n";
		15	string s = "Success!\n"; for (int i=0; i < 6; ++i)cout << s[i];
		16	if(true) then cout << "Success!\n"; else cout << "Fail!\n";
		17	int x = 2000; char c = x; if(c==2000) cout << "Success!\n";
		18	string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
		19	vector v(5); for(int i=0; i<=v.size(); ++i); cout << "Success!\n";
		20	int i=0; int j = 9; while (i<10) ++j; if(j<i) cout << "Success!\n";
		21	int x = 2; double d = 5/(x-2); if (d == 2 * x + 0.5) cout << "Success!\n";
		22	string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
		23	int i=0; while(i<10) ++j; if(j < i) cout << "Success!\n";
		24	int x = 4; double d = 5/(x-2); if (d =2*x+0.5) cout << "Success!\n";
		25	cin << "Success\n";

	Repaired statements
	____________________
		1	cout << "Success!\n";
		2	cout << "Success!\n";
		3	cout << "Success" << "!\n";
		4	cout << "success" << endl;
		5	int res = 7; vector <int> v(10); v[5] = res; cout << "Success!\n";
		6	vector<int> v(10); v[5] = 7; if (v[5] = 7) cout << "Success!\n";
		7	bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";
		8	bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
		9	string s = "ape"; bool c = true; if (c) cout << "Success!\n";
		10	string s = "ape"; if (s != "fool") cout << "Success!\n";
		11	string s = "ape"; if (s != "fool") cout << "Success!\n";
		12	string s = "ape"; if (s != "fool") cout << "Success!\n";
		13	vector<char> v(5); for (int i = 0; i < v.size(); ++i) cout << "Success!\n";
		14	vector<char> v(5); for (int i = 0; i < v.size(); ++i) cout << "Success!\n";
		15	string s = "Success!\n"; for (int i = 0; i < 6; ++i) cout << s;
		16	if (true) cout << "Success!\n"; else cout << "Fail!\n";
		17	int x = 2000; int c = x; if (c == 2000) cout << "Success!\n";
		18	string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s;
		19	vector<char> v(5); for (int i = 0; i < v.size(); ++i) cout << "Success!\n";
		20	int i = 0; int j = 9; while (i < 10) {++i;} if (j = i) cout << "Success!\n";
		21	int x = 2; double d = 5 / (x - 1); if (d == 2 * x + 1) cout << "Success!\n";
		22	string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s;
		23	int i = 0; int j = 9; while (i < 10) ++i; if (j < i) cout << "Success!\n";
		24	double x = 4; double d = 15 / (x - 2); if (d == (2 * x) - 0.5) cout << "Success!\n";
		25	cout << "Success\n";













*/