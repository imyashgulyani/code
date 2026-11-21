#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
int i,j,*a;
a = (int*)malloc(2 * sizeof(int)); 
    for(i=0;i<numsSize-1;i++)
    {
    	for(j=i+1;j<numsSize;j++)
    	{
		
	    	if(nums[i]+nums[j]==target)
	    	{
	    			*(a+0)=i;
	                *(a+1)=j;
	    			*returnSize=2;
	    			return a;
	    			
			}
		}
	}
	return a;
}
int main()
{
	int nums[100],numsSize,i,target,flag=0,returnSize=0;
	printf("enter size of array\n");
	scanf("%d",&numsSize);
	printf("enter value in array\n");
	for(i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}
	printf("enter number of addition\n");
	scanf("%d",&target);
	int *a=twoSum(nums,numsSize,target,&returnSize);
	printf("Output = [%d,%d]",*a,*(a+1));
	
}
