

#include<stdio.h>

int  main()
{   
    
	int a[100],b[100],i,j,m,n,p,q;	void shobha(int a[],int n,int q,int b[]);
	void kamal(int a[],int n,int q,int b[]);
	void jasmine(int a[],int n,int q,int b[]);
	
	printf("Enter the number of curtains availabe\n");
	scanf("%d",&n);
	printf("Enter the size of curtains in order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the no of queries\n");
	scanf("%d",&q);
	printf("enter the queries in order\n");
	for(j=0;j<q;j++)
	scanf("%d",&b[j]);
	
	shobha(a,n,q,b);
	kamal(a,n,q,b);
	
}
void shobha(int a[],int n,int q,int b[])
{  
 int f=1;
	for(int r=0;r<q;r++)
	{   
		for(int s=0;s<n;s++)
		{ 
			if(a[s]<b[r])
			{			
			if(s==(n-1))
			f=0;
			continue;
		    }
			
	    	if(a[s]>b[r])
			{
			a[s]=a[s]-b[r];
			break;
		    }
		   
	    	 if(a[s]==b[r])
			{
			a[s]=0;
			break;
			}
		    
		
		}
		if(f)
		{
		for(int m=0;m<n;m++)
		printf("%d ",a[m]);	
	
		printf("\n");
       } 
	   else
	    printf("-1\n");
        	   
	}
	
	
	
}
void kamal(int a[],int n,int q,int b[])
{
	for(int r=0;r<q;r++)
	{   int f=0;int s=32768;
		for(int t=0;t<n;t++)
		
		{
			
			if(a[t]>=b[r])
			{
			  if(a[t]<s)
			  s=a[t];
			  f=1;
			  
		    }
		    
			
				
		}
		
		if(f)
		{
			for(int i=0;i<n;i++)
			{
			if(a[i]==s)
			{
			if(b[r]==s)
			a[i]=0;
			else 
			a[i]=a[i]-b[r];
		    for(int i=0;i<n;i++)
			printf("%d ",a[i]);
			printf("\n");
		    }
		    }
			
	   }
		else
		printf("-1\n");
	}
}
