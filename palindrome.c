#include<stdbool.h>
bool isPalindrome(int x) {
	int r=0;
	int t=x;
	if(x<0)
	    return false;
	while(t) {
		r=r*10+t%10;
		t/=10;
	}
	return r==x;
}
