// APITest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "UsefulStuff.h"
#include "VectorUtils.h"
#include <vector>
#include <string>

int main()
{
	stringUtils a;
	char c[10] = "This";
	a.println(a.charsToString(c));
	vector<string> v = a.split("test test", ' ');
	a.println(v[0]);
	vector<char> out = a.stringToChars("DEMO 1.0");
	string sa = "This is a tests";
	if (a.contains(sa, "te")) {
		a.println("wow");
	}
	cout << a.removeChar("xy is the best cxxxfhgehgeh", 'x') << endl;
	cout << a.replace("wow %player% is an awesome person %player%", "%player%", "Ryan") << endl;
	cout << a.replaceAll("wow %player% is an awesome person %player%", "%player%", "Bob") << endl;
	vector<string> test;
	test.push_back("bob");
	VectorUtils vu;
	vu.removeStringFromVector(test, "bob");
	vector<int> tes;
	tes.push_back(20);
	tes.push_back(4);
	cout << a.vecToString(tes) << endl;
	if (a.equalsIgnoreCase("tests", "TeStS")) {
		a.println("true");
	}
	if (a.isEmpty(" "))
		a.println("Is empty!");
    return 0;
}

