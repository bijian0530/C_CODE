#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		//n�Ľ׳�
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//#include<stdio.h>
//int max(int a, int b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int c = max(a, b);
//	printf("max=%d\n",c);
//	return 0;
//}


//#include<stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;   //'\0'
//}
//int main()
//{
//	char arr1[] = "********";
//	char arr2[] = "bite";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


//#include<stdio.h>                      //strcpy�Ĺ���ģ��
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "********";
//	char arr2[] = "bite";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//
//#include<stdio.h>               9*9�˷���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>                 a��b�Ĺ�Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d%d",&a,&b);
//	while (a % b)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	printf("%d",b);
//	return 0;
//}


//#include<stdio.h>                 //˭������
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer!='a') + (killer=='c') + (killer=='d') + (killer!='d') == 3)
//			printf("killer is %c", killer);
//	}
//	return 0;
//}

//
//#include<stdio.h>              //100-200������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j==i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d",count);
//	return 0;
//}


//#include<stdio.h>          //���δ�ӡ                        
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d",&line);
////1.��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//1.��ӡ���ո�
//		for (j = 0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
////2.��ӡ�°벿��
//	for (i = 0;i<line-1; i++)
//	{
//		//�ո��ӡ
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		//*��ӡ
//		for (j = 0; j < 2*(line - 1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//


//#include<stdio.h>            //n��k�η�
//int power(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * power(n, k - 1);
//	else
//		return (1 / n * power(n, k - 1));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d",&n,&k);
//	int ret = power(n, k);
//	printf("%d\n",ret);
//	return 0;
//}


//#include<stdio.h>       
//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//			putchar(ch + 32);
//		else if (ch >= 'a' && ch < 'z')
//			putchar(ch - 32);
//		else if (ch>='0'&&ch<='9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d",total);
//	return 0;
//}


//#include<stdio.h>   // 1+(-1/2)+1/3+...
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * 1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf",sum);
//	return 0;
//}


//#include<stdio.h>      //�������������Ԫ��-���İ취
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,0};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>      //�������������Ԫ��-�Ż�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>        //����a �� b ��ʹ�õ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n",a,b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d b=%d\n",a,b);
//	return 0;
//}


//#include<stdio.h>          //����a �� b ��ʹ�õ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d%d", &a,&b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//} 


//#include<stdio.h>              //1000-2000֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
//		{
//			printf("%d ",year);
//		}
//		count++;
//	}
//	printf("\ncount is %d",count);
//	return 0;
//}


//#include<stdio.h>       //��һ��������������ֵ
//int main()
//{
//	int i = 0;
//	int arr[] = { -1,-2,-3,-4,-5,-6 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max is %d",max);
//	return 0;
//}


//#include<stdio.h>          //����(a+b)/2��ƽ��ֵ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int average = a + (b - a) / 2;
//	printf("%d",average);
//	return 0;
//}


//#include<stdio.h>           //�Ż�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int average = a + ((b - a) >> 1);
//	printf("%d", average);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int average = (a & b) + ((a ^ b) >> 1);
//	printf("%d", average);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	int b = ~a;
//	//11111111111111111111111111111111  ����
//	//11111111111111111111111111111110  ����
//	//10000000000000000000000000000001  ԭ��
//	printf("%d",b);
//	return 0;
//}