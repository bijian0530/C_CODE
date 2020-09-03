#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//void left_move(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str+ j) = *(str+j+1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//	printf("%s\n",arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left,char *right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	assert(k<=len);
//	reverse(str,str+k-1);
//	reverse(str+k, str +len- 1);
//	reverse(str, str +len- 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//	printf("%s\n",arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void left_move(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str+ j) = *(str+j+1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(str1,1);
//		int ret = strcmp(str1, str2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else 
//		printf("no\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1,str1,6);
//	char* ret = strstr(str1,str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}

//
//#include<stdio.h>          //杨氏矩阵中查找一个数字
//int  FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int k = 7;
//	int ret = FindNum(arr,k,3,3);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}


//#include<stdio.h>
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *py - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 5;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr,k,&x,&y);
//	if (ret == 1)
//	{
//		printf("yes\n");
//		printf("下标是:%d %d\n",x,y);
//	}
//	else
//		printf("no\n");
//	return 0;
//}


//#include<stdio.h>     
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
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
//		if (*str != '\0')
//		{
//			return 1 + my_strlen(1 + str);
//		}
//		else
//			return 0;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d ",len);
//	return 0;
//}


//#include<stdio.h>
//void my_strcpy(char* dest,const char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2!=NULL);
//	char* ret = str1;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


//#include<stdio.h>
//void my_strcat(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello";
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//char* my_strcat(char* dest, char* src)
//{
//	int* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	*dest = *src;
//	return *ret;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


