#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class VectorUtils {
public:
	void removeStringFromVector(vector<string> vec, string s);
	bool vectorContainsString(vector<string> vec, string s);
};
/*
	vector<string> vec -- The vector you want to remove the string from.
	string s -- The string you want to remove.
	throws "Object not found" if the string could not be found.
*/
void VectorUtils::removeStringFromVector(vector<string> vec, string s) {
	int i = 0;
	bool found = false;
	for (string st : vec) {
		if (st == s) {
			found = true;
			break;
		}
		i++;
	}
	if (!found) {
		cout << "Error: Object could not be found! The object " << s << " could not be removed from the vector as it was not found. (VectorUtils)" << endl;
		throw "Object not found.";
		return;
	}
	vec.erase(vec.begin() + i);
}

bool VectorUtils::vectorContainsString(vector<string> vec, string s) {
	for (string st : vec) {
		if (st == s) {
			return true;
		}
	}
	return false;
}

