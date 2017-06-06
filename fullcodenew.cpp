

#include<stdio.h>

int  main()
{   
    
	int a[100],y[100],z[100],b[100],i,j,m,n,p,q;	void shobha(int a[],int n,int q,int b[]);
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
	for(int i=0;i<n;i++)
	y[i]=a[i];	
	for(int i=0;i<n;i++)
	z[i]=a[i];
	shobha(a,n,q,b);
	kamal(y,n,q,b);
	jasmine(z,n,q,b);
	
}
void shobha(int a[],int n,int q,int b[])
{  
   printf("SHOBHA\n");
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
void kamal(int y[],int n,int q,int b[])
{   printf("KAMAL\n");
	for(int r=0;r<q;r++)
	{   int f=0;int s=32768;
		for(int t=0;t<n;t++)
		
		{
			
			if(y[t]>=b[r])
			{
			  if(y[t]<s)
			  s=y[t];
			  f=1;
			  
		    }
		    
			
				
		}
		
		if(f)
		{
			for(int i=0;i<n;i++)
			{
			if(y[i]==s)
			{
			if(b[r]==s)
			y[i]=0;
			else 
			y[i]=y[i]-b[r];
		    for(int i=0;i<n;i++)
			printf("%d ",y[i]);
			printf("\n");
		    }
		    }
			
	   }
		else
		printf("-1\n");
	}
}
void jasmine(int z[],int n,int q,int b[])
{
        printf("JASMINE\n");
		for(int r=0;r<q;r++)
	{    int f=0;int l=0;
		for(int t=0;t<n;t++)
		
		{
			
			if(z[t]>=b[r])
			{
			  if(z[t]>l)
			  l=z[t];
			  f=1;
			  
		    }
		    
			
				
		}
		
		if(f)
		{
			for(int i=0;i<n;i++)
			{
			if(z[i]==l)
			{
			if(b[r]==l)
			z[i]=0;
			else 
			z[i]=z[i]-b[r];
		    for(int i=0;i<n;i++)
			printf("%d ",z[i]);
			printf("\n");
		    }
		    }
			
	   }
		else
		printf("-1\n");
	}
}

