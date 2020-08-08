#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>                      //n的阶乘
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int n = 0;
//	printf("请输入一个数");
//	scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//		printf("n的阶乘是%d\n", sum);
//	return 0;
//}                                  
  


//#include<stdio.h>                  //   //1!+2!+3!=9
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int n = 0;
//	int SUM = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		sum = n * sum;
//		SUM = sum + SUM;
//	}
//	printf("SUM is %d\n", SUM);
//	return 0;                        
//}



//#include<stdio.h>                       //查询一个数字    //正确但是跑不出来
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int i = 0;
//	int ssz = sizeof(arr) / sizeof(arr[0]);
//	  //计算元素个数
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//			printf("找到了,arr[%d]\n",i);
//		break;
//	}
//	if (k == sz)
//		printf("没找到\n");
//	return 0;                        
//}



//#include<stdio.h>                //输入三次密码
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s\n", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//				break;
//		}
//		else
//		{
//			printf("密码不正确\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序");
//	}
//	return 0;
//}



//#include<stdio.h>       //找一个数字   优化的算法     BUT  这个程序没错，就是跑不出来
//int main()
//{
//	int	arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);    //计算元素个数
//	int left = 0;   //左下标
//	int right = sz - 1;   //右下标
//	int mid = (left + right) / 2;
//
//	while (left <= right)
//	{
//		if (arr[mid] > k)
//		{
//			right = mid -1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了：arr[%d]\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("there is error\n");
//	}
//	return 0;
//}



//#include<stdio.h>             //程序正确  但跑不出来啊！！！
//#include<string.h>
//int mian()
//{
//	int left = 0;
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int right = strlen(arr1) - 1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[left];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	printf("%s/n", arr2);
//	return 0;
//}



//#include<stdio.h>      //三个数字从大到小进行排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("请输入三个数字");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



//#include<stdio.h>        //能被整除的数
//int main()
//{
//	int i = 0;
//	printf("1-100可以被三整除的数：\n");
//	for (i = 1; i<=100; i++)
//	{
//		
//		if (a = i % 3==0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//#include<stdio.h>                     // 找两个数字的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}



//#include<stdio.h>        //计算出闰年 以及 个数
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		 if (year % 400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\n共有:%d\n", count);
//	return 0;
//}



//#include<stdio.h>                   //  闰年的优化代码
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	if (((year % 4 == 0) && (year % 100!= 0) )|| (year % 400 == 0))
//	{
//		printf("%d ", year);
//		count++;
//	}
//	printf("\n%d", count);
//}



//#include<stdio.h>         //找100-200之间的质数
//int main()
//{
//	int i = 0;
//	int j =0 ;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		
//	}
//	printf("质数的个数为：%d ", count);
//	return 0;
//}



//#include<stdio.h>   //找100-200之间的质数   的优化方案
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j =0 ;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		
//	}
//	printf("质数的个数为：%d ", count);
//	return 0;
//}



//#include<stdio.h>         //找100-200之间的质数  的优化方案（二）
//int main()
//{
//	int i = 0;
//	int j =0 ;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		
//	}
//	printf("质数的个数为：%d ", count);
//	return 0;
//}



// 
//#include<stdio.h>                                      //数1-100之间含有9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		else if (i / 10 == 9)                       //把else if 换成 if 值就会由  19变成20
//		{
//			printf("%d\n", i);
//				count++;
//		}
//	}
//	printf("9个数为：%d\n", count);
//		return 0;
//}



//#include<stdio.h>         //算出 1+1/2+1/3+......+1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("结果为：%lf\n", sum);
//	return 0;
//}



//#include<stdio.h>            //比较输入数字的最大值
//int main()
//{
//	int i = 0;
//	int arr[] = {-1,-2,-3,-5,-17,-16,-27 };                   //注意其中的max的复制！！！！！！
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max=arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为：%d\n", max);
//	return 0;
//}

 
//#include<stdio.h>              //9*9乘法口诀表
//int main()
//{
//	int i=0;
//	int j = 0;
//	for (i * 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{ 
//			printf("%d*%d=%-2d ", i, j, i * j);                //注意这里的%-2d 是左对齐，%2d 是右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//
//}


//#include<stdio.h>                      //数字炸弹游戏
//#include<time.h>
//#include<stdlib.h>
//void memu()
//{
//	printf("***************");
//	printf("** 1.play 0.exit**");
//	printf("***************");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("please enter:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("intger is high\n");
//		}
//		else if (guess < ret)
//		{
//			printf("intger is low\n");
//		}
//		else
//		{
//			printf("congratulations\n");
//			break;
//		}
//	}
//		
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		memu();
//		printf("请选择:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("game over\n");
//			break;
//		default:
//			printf("there is error\n");
//		}
//	}
//	while(input);
//	return 0;
//}


//#include<stdio.h>                                         //给别人关机1   666
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 180");
//again:
//	printf("notice\nyour computer will be shuted in 180s unless you say 毕健真帅啊！\n");
//	scanf("%s", input);
//	if (strcmp(input, "毕健真帅啊！") == 0)
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}



//#include<stdio.h>                                         //给别人关机2   666
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		printf("notice\nyour computer will be shuted in 180s unless you say 毕健真帅啊！\n");
//		scanf("%s", input);
//		if (strcmp(input, "毕健真帅啊！") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '*', 3);
//	printf("%s", str);
//	return 0;
//}


//#include<stdio.h>                 //交换 2个数字的位置
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = *x;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//}



//#include<stdio.h>                 //用函数找  100-200之间的素数
//#include<math.h>
//int is_prime(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//		{
//		if (x % y == 0)
//			return 0;
//		}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("total is %d\n", count);
//	return 0;
//}


//
//#include<stdio.h>                                        // 判断是否为闰年
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("total is %d", count++);
//	return 0;
//}


//#include<stdio.h>                                   //用函数二分查找一个数字下表
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;             //必须放在里面，放在外边 则整个过程只求了一次！！！！！！
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
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
//	int arr[] = {1,2,3,4,7,9,5,17};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("no resut\n");
//	}
//	else
//		printf("find result:arr[%d]\n");
//	return 0;
//}


//#include<stdio.h>                //写一个函数没调用一次，将sum 加上1
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{  
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num=0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}


//#include<stdio.h>                                   //函数递归的方法求出字符串的长度
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
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d \n", len);
//	return 0;
//}


//#include<stdio.h>                                   //递归法求将输入数字  空一格输出
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d\n",&num);
//	print(num);
//	return 0;
//}

//#include<stdio.h>                            //递归法求出  n！
//int fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>                                 //常规法求  n！
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i= 1; i <= n; i++)
//	{
//		ret = i * ret;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}


//#include<stdio.h>                       //用函数的方法求    n!
//int fac(int n)
//{
//	int i = 1;
//	int d = 1;
//	for (i = 1; i <= n; i++)
//	{
//		d *= i ;
//	}
//	return d;
//}
//int main()
//{
//	int ret =1 ;
//	int n = 0;
//	scanf("%d", n);
//	ret = fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}



//#include<stdio.h>                      //利用递归法求出   斐波那契数列
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret=%d \n", ret);
//	return 0;
//}

//
//#include<stdio.h>                                  //优化算法  循环方式  来求  Fib数组
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
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret=%d \n",ret);
//	return 0;
//}

 
//#include<stdio.h>                                           //冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz-1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

   
