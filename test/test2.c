#include<stdio.h>
#include<string.h>
int main(void)
{
	char * charr = strdup("first,second,\"third,foo\",forth,fifth");
	char * pch;
	pch = strsep(&charr,",");
	printf("%s\n", pch);
	pch = strsep(&charr,",");
	printf("%s\n", pch);
    strsep(&charr,"\"");
	pch = strsep(&charr,"\"");
	printf("%s\n", pch);
    strsep(&charr,",");
	pch = strsep(&charr,",");
	printf("%s\n", pch);
	pch = strsep(&charr,",");
	printf("%s\n", pch);
	return 0;
}

/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char charr[100] = "first,second,third,forth,fifth";
	char * pch;
	pch = strtok(charr,",");
	printf("%s\n", pch);
	pch = strtok(NULL,",");
	printf("%s\n", pch);
	pch = strtok(NULL,",");
	printf("%s\n", pch);
	pch = strtok(NULL,",");
	printf("%s\n", pch);
	pch = strtok(NULL,",");
	printf("%s\n", pch);
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char charr[100] = "first,second,third,forth,fifth";
	char * pch;
	pch = strtok(charr,",");
	while(pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL,",");
	}
	return 0;
}*/

/*#include<stdio.h>
int main (void)
{
	char charr[50];
	//charr = "Andrew"; //This is an illegal form of assigning a new string to another string.
	strcpy(charr, "Andrew"); //This is a legal form of assigning a new string to another string.
	printf("%s\n", charr);
	return 0;
}*/