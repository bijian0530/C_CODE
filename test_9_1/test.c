#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//char* my_strstr(const char* p1,const char* p2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefge";
//	char arr2[] = "bcde";
//	char* ret = my_strstr(arr1,arr2);
//	if (ret == NULL)
//	{
//		printf("没有找到\n");
//	}
//	else
//		printf("%s\n",ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//struct s
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[10] = {0};
//	struct s arr3[] = { {"王五",20},{"霍元甲",30} };
//	struct s arr4[5] = {0};
//	my_memcpy(arr4,arr3,sizeof(arr3));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9};
//	my_memmove(arr1, arr1 + 2, 20);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
struct s
{
	int n;
	int arr[0];
};
int main()
{
	struct s* ps = (struct s*)malloc(sizeof(struct s)+5*sizeof(int));
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct s* ptr = realloc(ps,44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",ps->arr[i]);
	}
	printf("\n");
	free(ps);
	ps = NULL;
}


//#include<stdio.h>
//#include<stdlib.h>
//
//struct s
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct s* ps = (struct s*)malloc(sizeof(struct s));
//	ps->arr = malloc(5*sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* ptr = realloc(ps->arr,10*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}
