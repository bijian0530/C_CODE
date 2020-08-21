#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*padd)(int, int) = add;   //&add也行
//	int sum = (*padd)(2, 3);
//		printf("sum=%d\n",sum);
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//#include<stdio.h>
//int main()
//{
//	int* arr[10];  //	指针数组
//	
//	int(*p)[10] = &arr;  //数组指针
//	
//	//函数指针
//	int (*pa)(int, int) = add;
//	printf("%d\n", (*pa)(1, 2));
//	//printf("%d\n", pa(1, 2));
//	//printf("%d\n", add(1, 2));
//	
//	//函数指针的数组
//	int (*ppa[10])(int, int);
//
//	//指向函数指针的数组的指针
//	int (*(*pppa)[10])(int, int);
//	return 0;
//}

//#include<stdio.h>                  //冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[6] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//#include<stdlib.h>
//#include<stdio.h>                      //冒泡排序 整形优化
//int cmp_int(const void* e1, const void* e2)
//{
////比较两个数的值
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[6] = { 6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//
//#include<stdlib.h>
//#include<stdio.h>                      //冒泡排序 浮点型
//int cmp_float(const void* e1, const void* e2)
//{
//	//比较两个数的值
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//int main()
//{
//	int f[] = { 6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	return 0;
//}





//#include<stdio.h>
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    printf("%d", func(1));
//    return 0;
//}


//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d",&x,&y);
//	while (x%y!=0)
//	{
//		int tmp = x % y;
//		x = y;
//		y = tmp;
//	}
//	printf("%d\n",y);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("\ncount is %d",count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i<=200; i++)
//	{
//		for (j = 2; j <=i/2; j += 2)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			if (i/2 == j)
//			{
//				printf("%d ",i);
//				count++;
//			}
//		}
//	}
//	printf("\ncount is %d",count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int tmp = 1;
//	for (i = 1; i <=100; i++)
//	{
//		sum += tmp*1.0 / i;
//		tmp = -tmp;
//	}
//	printf("%lf",sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,-7,8,-9,-10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



