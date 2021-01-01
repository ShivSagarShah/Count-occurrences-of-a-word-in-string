#include <bits/stdc++.h> 
using namespace std; 

int countOccurences(char *str, 
					string word) 
{ 
	char *p; 

	// split the string by spaces in a 
	vector<string> a; 

	p = strtok(str, " ");   //if the string is shiv sagar shah then only shiv will be considered
	while (p != NULL) 
	{ 
		a.push_back(p); 
		p = strtok(NULL, " "); // when first time this loops work it will take sagar and so on and so forth......
	} 

	// search for pattern in a 
	int c = 0; 
	for (int i = 0; i < a.size(); i++) 

		// if match found increase count 
		if (word == a[i]) 
			c++; 
	return c; 
} 
int main() 
{ 
	char str[] = "shiv sagar shah"; 
	string word = "sagar"; 
	cout << countOccurences(str, word); 
	return 0; 
} 

