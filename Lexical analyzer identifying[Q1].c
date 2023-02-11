#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int i,ic=0,m,cc=0,oc=0,j;
	char a[30],operators[30],identifiers[30],constants[30];
	printf("enter the string : ");
	scanf("%[^\n]s",&a);
	for(i=0;i<strlen(a);i++)
	{
    	if(isspace(a[i]))
		{
    	    continue;
    	}
    	else if(isalpha(a[i]))
		{
        	identifiers[ic] =a[i];
        	ic++;
    	}
    	else if(isdigit(a[i]))
		{
        	m=(a[i]-'0');
        	i=i+1;
        	while(isdigit(a[i]))
			{
            	m=m*10 + (a[i]-'0');
            	i++;
        	}
        	i=i-1;
        	constants[cc]=m;
        	cc++;
    	}
    	else
		{
        	if(a[i]=='*')
			{
            	operators[oc]='*';
            	oc++;
        	}
        	else if(a[i]=='-')
			{
            	operators[oc]='-';
            	oc++;
        	}
        	else if(a[i]=='+')
			{
            	operators[oc]='+';
            	oc++;
        	}
         	else if(a[i]=='=')
			{
            	operators[oc]='=';
            	oc++;
        	}
  		}
	}
    printf(" identifiers : ");
     for(j=0;j<ic;j++)
	 {
        printf("%c ",identifiers[j]);
     }
    printf("\n constants : ");
     for(j=0;j<cc;j++)
	 {
        printf("%d ",constants[j]);
     }
    printf("\n operators : ");
      for(j=0;j<oc;j++)
	  {
        printf("%c ",operators[j]);
      }
}

