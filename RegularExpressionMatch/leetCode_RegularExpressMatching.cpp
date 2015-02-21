// Author      : Peng
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
/*‘.’ Matches any single character.
‘*’ Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch(“aa”,”a”) → false
isMatch(“aa”,”aa”) → true
isMatch(“aaa”,”aa”) → false
isMatch(“aa”, “a*”) → true
isMatch(“aa”, “.*”) → true
isMatch(“ab”, “.*”) → true
isMatch(“aab”, “c*a*b”) → true*/

//============================================================================
#include <iostream>
#include <stdlib.h>
#include "stdio.h"

bool isMatch(char* a, char* b);
int main(void) {
	char a[] = "aa";
	char b[] = "a";

	if(isMatch(a, b)){
		printf("%s and %s is match!\n",a,b);
	}else{
		printf("%s and %s is not match!\n",a,b);
	}
	return 0;
}

bool isMatch(char* a, char* b){
	return true;
}
