#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int sum(int a)
//{
//    static int b = 3;
//    b += 1;
//    return (a + b );
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

//#include<stdio.h>
//int add(int a, int b)
//{
//    int c = 0;
//    c = a + b;
//    return c;
//}
//int main()
//{
//    int a= 0;
//    int b = 0;
//    scanf("%d%d",&a,&b);
//    int sum = add(a,b);
//    printf("%d",sum);
//    return 0;
//}


//#include<stdio.h>
//void add(int a, int b)
//{
//    int c = 0;
//    c = a + b;
//    printf("%d",c);
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    add(a, b);
//    return 0;
//}

//
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (a % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//		printf("偶数\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a > b && b > c)
//		printf("从大到小顺序:%d %d %d\n",a,b,c);
//	if (a > b && c < a && c > b)
//	{
//		printf("从大到小顺序:%d %d %d\n", a, c,b);
//	}
//	if (b > a && a > c)
//	{
//		printf("从大到小顺序:%d %d %d\n", b,a,c);
//	}
//	if (b > a && b < c && c > a)
//	{
//		printf("从大到小顺序:%d %d %d\n", b,c,a);
//	}
//	if (c > a && a > b)
//	{
//		printf("从大到小顺序:%d %d %d\n", c,a,b);
//	}
//	if (c > a && a < b && b < c)
//	{
//		printf("从大到小顺序:%d %d %d\n",c,b,a);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}