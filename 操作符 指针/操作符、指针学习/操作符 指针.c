#define _CRT_SECURE_NO_WARNINGS 

//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	//>>--右移操作符
//	//移动的是二进制位   100000000000000000000000000100000
//	int b = a >> 1;
//	printf("b=%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	//整数的二进制有：源码 反码 补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001  原码
//	//11111111111111111111111111111110  反码
//	//11111111111111111111111111111111  补码
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>            //算一个数字二进制 中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d",&num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n",count);
//	return 0;
//}


//#include<stdio.h>             //算一个数字二进制 中1的个数   优化算法
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d",&num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 11;          //00000000000000000000000000001011
//	a = a | (1<<2);      //00000000000000000000000000000100   1<<2      
//	printf("%d\n",a);    //00000000000000000000000000000001
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	//~ 按2进制位取反
//	//00000000000000000000000000000000   补码
//	//11111111111111111111111111111111   反码
//	//11111111111111111111111111111110   原码
//	//10000000000000000000000000000001
//	printf("%d\n",~a);
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu s1 = {"bijian",23,"1640702200603"};
//	struct stu* ps = &s1;
//	printf("%d\n", (*ps).age);
//	
//	printf("%d\n",ps-> age);   //左边 结构体指针->成员名
//	/*printf("%d\n",s1.age);
//	printf("%s\n", s1.id);
//	printf("%s\n", s1.name);*/
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n",*p);  
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*p);
//		p = p + 1;
//	}
//return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch[6] = { 0 };
//	printf("%d\n", &ch[5] - &ch[0]);      //5
//	return 0;
//}


//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	char arr[] = "bijian";
//	int len = my_strlen(arr);
//	printf("%d\n",len);            //6
//	return 0;
//}


//#include<stdio.h>                //数组初试化0  打印 换数组中数字的位置
//void init(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//#include<stdio.h>          //交换数组元素
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d ", arr1[i]);
//	}
//	
//	return 0;
//}


//#include<stdio.h>                 //求二进制中1的个数
//int is_count(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count=is_count(a);
//	printf("%d",count);
//	return 0;
//}

//
//#include<stdio.h>                        //第二种方法
//
//int is_count(unsigned int a)
//{
//	int count = 0;
//	while(a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = is_count(a);
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>                    //找2个数 不同位的个数
//int get_diff_bit(int a, int b)
//{
//	int count = 0;
//	int tmp = a ^ b;
//	while (tmp)
//	{
//		tmp = tmp & tmp - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int count = get_diff_bit(a,b);
//	printf("%d\n",count);
//	return 0;
//}


//#include<stdio.h>      //打印一个数字二进制 奇、偶数
//   //10  
//   //00000000000000000000000000001010  原码
//void print(int a)
//{
//	int i = 0;
//	printf("偶数位:\n");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ",(a>>i)&1);
//	}
//	printf("\n");
//	printf("奇数位:\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}


//#include<stdio.h>              //用指针打印数组的元素
//print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//return 0;
//}


//#include<stdio.h>                 //输入一个数字打印出 n阶乘法表
//print_table(int a)
//{
//	int i = 0;
//	for (i = 0; i <= a; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print_table(a);
//	return 0;
//}


//#include<stdio.h>               //倒置字符串中元素 (使用库函数)
//#include<string.h>
//void reverse_string(char arr[], int len)
//{
//	int left = 0;
//	int right = len;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr) - 1;
//	reverse_string(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>              //倒置字符串中元素  (不使用库函数)
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count++;
//}
//void reverse_string(char arr[], int len)
//{
//	int left = 0;
//	int right = len;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr) - 1;
//	reverse_string(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>                    //递归法求 数字和
//int digitsum(int a)
//{
//	if (a > 9)
//	{
//		return digitsum(a / 10) + a % 10;
//	}
//	else
//		return a;
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	int ret=digitsum(a);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>             //计算N的 K次方
//
//int pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / (pow(n, -k)));
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n * pow(n, k - 1);
//	return 0;
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d",&n,&k);
//	double ret = pow(n,k);
//	printf("%lf\n",ret);
//	return 0;
//}


//#include<stdio.h>
//struct	S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit";
//	struct T t = { "hi",{10,'a',"bijian",1.0}, arr};
//	printf("%s\n",t.ch);
//	printf("%d\n", t.s.a);
//	printf("%c\n", t.s.c);
//	printf("%s\n", t.pc);
//	return 0;
//}


#include<stdio.h>
typedef struct stu
{
	char name[20];
	short age;
	char tele[11];
}stu;
void print(stu* d)
{
	printf("%s\n", d->name);
	printf("%d\n", d->age);
	printf("%s\n", d->tele);
}
int main()
{
	stu s = {"nb",18,"110"};
	print(&s);
	return 0;
}


