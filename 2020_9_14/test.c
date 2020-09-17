#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n",b);  //算数位移（还有逻辑位移）
//	return 0;
//}


//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf( " %d, % d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//#include<stdio.h>
//void print_arr(int* p)
//{
//	int i = 6;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//int main()
//{
//	int arr[6] = {1, 2, 3, 4, 5, 6};
//	print_arr(arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void reverse_str(char* pr,int len)
//{
//	int i = 0;
//	int left = 0;
//	int right = len - 1;
//	for (i = 0; i < len/2; i++)
//	{
//		int tmp = *(pr + left);
//		*(pr + left) = *(pr+right);
//		*(pr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	int len = strlen(str);
//	reverse_str(str,len);
//	printf("%s\n",str);
//	return 0;
//}


//#include<stdio.h>
//int sum_a(int a)
//{
//	int tmp = 0;
//	int sum = 0;
//	while (a)
//	{
//		sum = sum + a;
//		a = a / 10;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 22222;
//	int ret = sum_a(a);
//	printf("%d ",ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum+(int)pow(tmp%10,count);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m >> i) == (n >> i))
//		{
//			count++;
//		}
//	}
//	printf("%d ",count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 17;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d",a,b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 7;
//	printf("偶数位:\n");
//	for (i = 0; i < 30; i=i+2)
//	{
//		printf("%d ",(a>>i)&1);
//	}
//	printf("\n");
//	printf("奇数位:\n");
//	for (i = 1; i < 31; i+=2)
//	{
//		printf("%d ",(a>>i)&1);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 7;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d ",count);
	return 0;
}