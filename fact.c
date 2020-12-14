int fact(int n)
{
    int i;
    int fact = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
