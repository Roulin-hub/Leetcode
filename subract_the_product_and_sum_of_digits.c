int subtractProductAndSum(int n)
{
	int product=1;
	int sum=0;
	int diff;
	while(n>0)
	{
		diff=n%10;
		product=product*diff;
		sum=sum+diff;
		n=n/10;
	}
	return product-sum;
}
