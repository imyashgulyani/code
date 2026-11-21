#include <stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int i,m,j,nums3Size=nums1Size+nums2Size;
    int merge[100];
    double sum;
	for(i=0;i<nums1Size;i++)
	{
		merge[i]=nums1[i];
	}
	for(j=0;j<nums2Size;j++,i++)
	{
		merge[i]=nums2[j];
	}
	
	qsort(merge,nums3Size,sizeof(int),compare);
	if(nums3Size%2!=0)
	{
		m=nums3Size/2;
		sum=double(merge[m]);
	}
	else
	{
		m=nums3Size/2;
		sum=merge[m]+merge[m-1];
		sum=sum/2;
	}
	printf("%lf",sum);
	return sum;
}



int main()
{
	int nums1[]={1,3},nums2[]={2},nums1Size=2,nums2Size=1,i;
	double sum=findMedianSortedArrays(nums1,nums1Size,nums2,nums2Size);
	printf("Result = %lf",sum);
}

