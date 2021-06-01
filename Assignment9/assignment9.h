bool findX(int aray[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (aray[i]==x)
        {
            return true;
        }
    }
    return false;
    
}
void printOdd(int aray[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (aray[i]%2==1)
        {
            printf("%d\t",aray[i]);
        }
        
    }
    
}
int ucln(int a, int b)
{
    int ucln;
    for (int i=1; i<=a && i<=b ;i++)
	{
		if(a%i==0 && b%i==0){
			ucln=i;
		}
	}
    return ucln;
}
int bcnn(int c, int d)
{
    int big, bcnn;
	if(c>d)
		big=c;
	else
		big=d;
	do{
		bcnn=big;
		big++;
	}while(!(bcnn%c==0 && bcnn%d==0));
    return bcnn;
}