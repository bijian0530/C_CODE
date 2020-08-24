#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char password[20] = {0};
//	int ch = 0;
//	printf("please enter password\n");
//	scanf("%s\n",&password);
//	getchar();
//	printf("please confirm y or n\n");
//	ch = getchar();
//	if (ch == 'y')
//		printf("succeed\n");
//	else
//		printf("fail confirm\n");
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	int ch = 0;
//	scanf("%s\n", password);
//	while (getchar() != '0')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'y')
//	{
//		printf("ok");
//	}
//	if (ch == 'n')
//	{
//		printf("give up\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	
//	int n = 6;
//	scanf("%d",&n);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;   //中间值mid必须放在这里
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n <arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("find:arr[%d]\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("error\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bijian W L";
//	char arr2[] = "**********";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)	
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "000111222") == 0)
//		{
//			printf("correct\n");
//			break;
//		}
//		else
//			printf("error\n");
//	}
//	if (i == 3)
//	{
//		printf("account locked\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("输入我是猪\n");
//	scanf("%s",input);
//	if (strcmp("我是猪", input) == 0)
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("输入我是猪\n");
//		scanf("%s", input);
//		if (strcmp("我是猪", input) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i=i+2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount is %d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ",i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount is %d ",count);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[] = "jushenwula";
//	memset(ch,'*',2);
//	printf("%s ", ch);
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
//	swap(&a, &b);
//	printf("a=%d b=%d",a,b);
//	return 0;
//}


