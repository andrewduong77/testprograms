// Problem 1

#include<stdio.h>
#include<string.h>
int main(void)
{
	char chbuffer[128], *oper, *del = ",";
	char *filename = "lab3_1.data";
	int operand1, operand2;
	double doperand1, doperand2;
	FILE *fp = fopen(filename, "r");
	if(fp == NULL)
	{
		printf("The file %s couldn't be opened.\n", filename);
		exit(1);
	}
	while(fgets(chbuffer, 128, fp) != NULL)
	{
		oper = strtok(chbuffer,del);
		operand1 = atoi(strtok(NULL,del));
		operand2 = atoi(strtok(NULL,del));
		if(strcmp(oper,"addition") == 0)
			printf("%d + %d = %d", operand1, operand2, operand1 + operand2);
		else if(strcmp(oper,"subtraction") == 0)
			printf("%d - %d = %d", operand1, operand2, operand1 - operand2);
		else if(strcmp(oper,"multiplication") == 0)
			printf("%d * %d = %d", operand1, operand2, operand1 * operand2);
		else if(operand2 == 0)
			printf("%d / %d = undefined operation", operand1, operand2);
		else if(operand1 % operand2 == 0)
			printf("%d / %d = %d", operand1, operand2, operand1 / operand2);
		else
		{
			doperand1 = operand1;
			doperand2 = operand2;
			printf("%d / %d = %.3f", operand1, operand2, doperand1 / doperand2);
		}
		printf("\n");
	}
	if(fclose(fp) == EOF)
	{
		printf("The file %s couldn't be closed.\n", filename);
		return 0;
	}
	else
		fclose(fp);
	return 0;
}