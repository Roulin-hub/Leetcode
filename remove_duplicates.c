int removeDuplicates(int*nums,int numsSize)
{
	int i,j=1;
	if(numsSize==0)
		return 0;
	for(i=1; i<numsSize; i++)
	{
		if(nums[i]!=nums[j-1])
		{
			nums[j]=nums[i];
			j++;
		}
	}
	return j;
}
