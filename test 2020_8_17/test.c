#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	char* m = "abc";
//	//printf("%s\n",arr);
//	//printf("%s\n", p);
//	printf("%c\n", *arr);
//	printf("%s\n", m);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[] = {1,2,3};
//	int arr2[] = {2,3,4};
//	int arr3[] = {3,4,5};
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d \n", p[i]);
//		//printf("%d \n", arr[i]);
//		//printf("%d \n", *(p+i));
//		printf("%d \n", *(arr+i));
//		//printf("%d \n", );
//	}
//	
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int(*p)[10] = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(*p + i));
//		printf("%d ", (*p)[i]);    //*p==arr
//	}
//	return 0;
//}


//#include<stdio.h>
//void print(int arr[3][2], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//	}
//}
//int main()
//{
//	int arr[3][2]= {{1,2,},{4,5,},{7,8,}};
//	print(arr,3,2);
//	return 0;
//}

//
//#include<stdio.h>                //二位数组用  数组指针表示
//void print(int(*p)[2], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			/*printf("%d ",*(*(p+i)+j));*/
//			/*printf("%d ", (*(p + i))[j]);    //四种写法
//			printf("%d ", *(p[i]+j));*/
//			printf("%d ", p[i][j]);
//		}
//	}
//}
//int main()
//{
//	int arr[3][2] = { {1,2,},{4,5,},{7,8,} };
//	print(arr, 3, 2);
//	return 0;
//}


