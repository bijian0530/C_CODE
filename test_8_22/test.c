#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[6] = {1,5,3,4,5,7};
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d",&a);
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		if (a == arr[i])
//		{
//			break;
//		}
//	}
//	printf("%d",i+1);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <=3; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d",sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <=3; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d",sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 5;
//	int left = 0;
//	int right = sz-1;
//	int middle = (left + right) / 2;
//	while (left<=right)
//	{
//		if (a < arr[middle])
//		{
//			right = middle - 1;
//		}
//		else if (a > arr[middle])
//		{
//			left = middle+1;
//		}
//		else
//		{
//			printf("luck:%d\n",middle);
//			break;
//		}
//	}
//	if (left > right)
//		printf("error\n");
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount is %d",count);
//	return 0;
//}


//#include<stdio.h>
//int is_leap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount is %d",count);
//	return 0;
//}


//#include<stdio.h>
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	printf("before: a=%d,b=%d\n", a, b);
//	swap(&a,&b);
//	printf("later: a=%d,b=%d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	scanf("%d",&a);
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include<stdio.h>
void mulform(int i)
{
	int j = 0;
	for (j = 1; j <= i; j++)
	{
		printf("%-2d*%-2d=%-2d ", i, j, i * j);
	}
}
int main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		mulform(i);
		printf("\n");
	}
	return 0;
}