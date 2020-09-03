#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int binary_search(int arr[], int sz,int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 2;
//	int ret=binary_search(arr, sz,k);
//	if (ret == -1)
//	{
//		printf("error\n");
//	}
//	else
//	{
//		printf("find label answer:%d\n",ret);
//	}
//	return 0;
//}


//#include<stdio.h>
//void add(int* num)
//{
//	*num = *num + 1;
//}
//int mian()
//{
//	int num = 0;
//	add(&num);
//	printf("num is %d",num);
//	return 0;
//}
//
//
//#include<stdio.h>
//void print(int a)
//{
//	int sum = 0;
//	if (a > 9)
//	{
//		print(a/10);
//	}
//	printf("%d ",a%10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}


//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ",len);
//	return 0;
//}


//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ",len);
//	return 0;
//}

//
//#include<stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=fac(n);
//	printf("%d ",ret);
//	return 0;
//}

//#include<stdio.h>
//int mian()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d ",sum);
//	return 0;
//}


//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n-2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d ",ret);
//	return 0;
//}

//
//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d\n",ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i==j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i <10; i++)
//	{
//		for (j = 0; j <i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#include<stdio.h>     
//void move(int arr[], int sz)
//{
//	int left = 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	move(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* str)
//{
//	int *left = str;
//	int *right = str+strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] ="0";
//	scanf("%s",arr);
//	reverse_string(arr);
//	printf("%s ",arr);
//	return 0;
//}


//#include<stdio.h>
//int DigitSum(int a)
//{
//	int sum = 0;
//	if (a > 9)
//	{
//		DigitSum(a / 10);
//	}
//	sum = sum + a % 10;
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=DigitSum(a);
//	printf("%d ",ret);
//	return 0;
//}


//#include<stdio.h>
//int power(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else 
//	{
//		return n * power(n, k - 1);
//	}
//	
//}
//int main()
//{
//	int n = 0.0;
//	int k = 0;
//	scanf("%d%d",&n,&k);
//	int ret = power(n,k);
//	printf("%d ",ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int len = my_strlen(arr);
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* s)
//{
//	char* left = s;
//	int len = strlen(s);
//	char* right = s+len- 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


#include<stdio.h>
void reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = strlen(arr);
	arr[0] = arr[len-1];
	arr[len - 1]='\0';
	if (strlen(arr + 1) > 1)
	{
		reverse_string(arr + 1);
	}
		arr[len - 1] = tmp;
	
}
int main()
{
	char arr[] ="abcdef";
	reverse_string(arr);
	printf("%s",arr);
	return 0;
}

//#include<stdio.h>
//double power(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return(double) n * power(n,k-1);
//	}
//	else
//	{
//		return 1.0 /(power(n, -k));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d",&n,&k);
//	double ret = power(n,k);
//	printf("%lf",ret);
//	return 0;
//}