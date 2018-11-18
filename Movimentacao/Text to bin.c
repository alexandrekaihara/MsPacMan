#include<stdio.h>

int main()
{
	FILE*txt,*bin;
	char string[90000];
	int flag=0,largura,altura=0;
	
	printf("\nDigite o nome do arquivo texto:\n");
	do
	{
		while(scanf("%s",string)!=1);
		txt=fopen(string,"r+");
	}
	while(txt==NULL);
	
	printf("\nDigite o nome do arquivo binario:\n");
	do
	{
		while(scanf("%s",string)!=1);
		bin=fopen(string,"w+b");
	}
	while(bin==NULL);
	
	int i=-1;
	do
	{
		if(string[i]=='\n')
		{
			if(flag==0)
			{
				largura=i;
				flag=1;
			}
			i--;
			altura++;
		}
			
		i++;
		fscanf(txt,"%c",&string[i]);
	}
	while(string[i]!='e');
	
	string[i]=0;
	
	int j=0,k;
	
	for(k=0;k<i;k=k+largura)
	{
		for(j=k;j<k+largura;j++)
			printf("%c",string[j]);
			
		printf("\n");
	}
	printf("size of array:%d  largura:%d altura:%d",i,largura,altura);
	fwrite(string,sizeof(char),sizeof(char)*i,bin);
	
	fclose(txt);
	fclose(bin);
	
}
