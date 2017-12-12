#include <stdio.h>
#include <string.h>
void main()
{
	int r[3],j=2;
	char res[3][10];
	for(int i=0;i<3;i++)
	{
		scanf("%s\n",res[i]);
    }
 for(int i=0;i<3;i++)
 {
	 if(strcmp(res[i],"Black")==0)
	 { r[j]=0;
	   j--; }
	 else if(strcmp(res[i],"Brown")==0)
	 { r[j]=1;
		 j--; }
	 else if(strcmp(res[i],"Red")==0)
	 { r[j]=2;
	   j--; }
	  else if(strcmp(res[i],"Orange")==0)
	  { r[j]=3;
		j--; }
	  else if(strcmp(res[i],"Yellow")==0)
	  { r[j]=4;
		j--; }
	  else if(strcmp(res[i],"Green")==0)
	  { r[j]=5;
		j--;
	  ]
	  else if(strcmp(res[i],"Blue")==0)
	  { r[j]=6;
		j--;
	   }
	  else if(strcmp(res[i],"Violet")==0)
	  { r[j]=7;
		j--;
	  }
	  else if(strcmp(res[i],"Grey")==0)
	  { r[j]=8;
		j--; }
	  else
	  { r[j]=9;
		j--; }

}

