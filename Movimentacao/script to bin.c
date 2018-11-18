#include<stdio.h>
#include<string.h>

int main()
{
	while (1)
	{
	FILE*txt,*bin;
	int wrote;
	char string1[90000];
	char string2[90000];
	memset(string1,0,sizeof(char)*90000);
	int i,j;
	
	printf("\nDigite o nome do arquivo texto:\n");
	do
	{
		while(scanf("%s",string1)!=1);
		txt=fopen(string1,"r+");
	}
	while(txt==NULL);
	
	printf("\nDigite o nome do arquivo binario:\n");
	do
	{
		while(scanf("%s",string1)!=1);
		bin=fopen(string1,"w+b");
	}
	while(bin==NULL);
	memset(string1,0,sizeof(char)*90000);
	memset(string2,0,sizeof(char)*90000);
	
	fscanf(txt,"%s",string1);
	int size=strlen(string1),counter=0;
	
	for(i=0;i<size;i++)
	{
		if(string1[i]>=48 && string1[i]<=57)
		{
			int mult=string1[i]-48;
			for(j=0;j<mult;j++)
			{
				string2[counter]=string1[i+1];
				counter++;
			}
			i++;
		}
		else
		{
			string2[counter]=string1[i];
			counter++;
		}
	}
	size=strlen(string2);
	
	
	printf("%s\n",string2);
	printf("size of array:%d",size);
	wrote=fwrite(string2,sizeof(char),sizeof(char)*(size+1),bin);
	printf("\n%d",wrote);
	
	fclose(txt);
	fclose(bin);
	
	printf("\n\n");
	}
	return 0;
}
