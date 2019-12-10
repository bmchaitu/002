#include<stdio.h>
#include<string.h>

char stack[1000],string[1000][1000];

void main()
{
    int n,i,j,len,top=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",string[i]);
    
    for(i=0;i<n;i++)
    {
        top=0;
        stack[top]='@';
        len=strlen(string[i]);
        for(j=0;j<len;j++)
        {
            ///printf("\nchar:%c",stack[top]);
            if(string[i][j]=='(')
            stack[++top]='1';
            
            if( string[i][j] == '{' )
            stack[++top] = '2';
            
            if(string[i][j] == '[')
            stack[++top]='3';
            
            
            if(string[i][j]==')' && stack[top]=='1')
            top=top-1;
            
            if(string[i][j]=='}'&&stack[top]=='2')
            top=top-1;
            
            if(string[i][j]==']' && stack[top]=='3')
            top=top-1;
            
            
        }
        
        // printf("\n%c",stack[top-1]);
        // printf("\n%d",top);
        if(top==0 && stack[top] == '@')
        printf("\nYES");
        
        else
        printf("\nNO");
    }
    
}
   	
