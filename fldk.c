#include<stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}
//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//int main()
//{
//	printf("%d %d\n", enumA, enumB);
//}
//void Find(const int* arr, size_t num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < num; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			} 
//			if (arr[j] == arr[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	char* start = dest; 
//	while (count && (*dest++ = *src++)) 
//	{
//		count--;
//	}
//	if (count) 
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return start;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//}
char* MyStrncat(char* dest, char* src, size_t len)
{
	assert(NULL != dest && NULL != src);
	char* ret = dest;
	int offset = 0;
	while (*dest)
	{
		*dest++;
	}
	if (strlen(src) < len) 
	{
		len = strlen(src);
	}
	while (len--)
	{
		*dest++ = *src++;
	}
	*dest = '\0'; 
	return ret;
}
int main()
{
	char arr1[6] = "World";
	char arr2[15] = "Hello ";
	printf("%s\n", MyStrncat(arr2, arr1, 9));
	return 0;
}