#include <stdio.h>

int strcmp (const char *s1, const char *s2) {
	int i=0;
	while (*s1!='\0' && *s2!='\0') {
	    if(*s1>*s2) {
	        i=1;
	        break;
	    }
	    else if (*s1<*s2) {
	        i=-1;
	        break;
	    }
	s1++;
	s2++;
	}
	    if(*s1=='\0' && *s2!='0') {
	        i=-1;
	    }
	    else if(*s1=='0' && *s2!='0') {
	        i=1;
	    }
	    else if(*s1==0 && *s2==0) {
	        i=0;
	    }
}

int main() {

	return 0;
}
