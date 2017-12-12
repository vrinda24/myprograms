#include <stdio.h>
#include <string.h>
char revfib(char n)
  {
	 char name[15];
	 scanf("%s",name);
	 int i=0;
	 if(i=='\0')
	 return '\0';
	 else
	 {
		 i++;
		 return revfib(name[i]);
		 printf("%c",name[i]);
}
}
