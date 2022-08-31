#include <stdio.h>

//结构体作业

//// 1.
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	//pulPtr指向首元素地址
//	*(pulPtr + 3) += 3;
//	//加3跳过3个整形，解引用得到9，加3就变成了12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	//结果  -- 6,12
//	return 0;
//}

// 2.
// 二级指针是指针，用来存放一级指针的地址，大小4/8个字节

// 3.
// 整形指针+1，向后跳过一个整形指针
// 指针-指针等于指针与指针之间的元素个数
//整形指针解引用访问4个字节，能比较大小

// 4.
// 指针数组：
// int* arr[10];
// 数组指针：
// int (*arr)[10];

//// 5.写一个函数，可以逆序一个输入字符串的内容
//
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);  //可省略
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[256] = { 0 };
//	// scanf("%s", arr);
//	gets(arr);//读取一行
//	reverse(arr);
//	printf("逆序后的字符串：%s\n", arr);
//	return 0;
//}

//// 6.求Sn=a+aa+aaa+aaaa+aaaaa+……的前五项之和，其中a是一个数字
//#include <string.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d,%d", &a, &n);
//	int ret = 0;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	// 2 22 222 2222 22222
//	return 0;
//}

//// 7.求0—100000之间的所有水仙花数
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否是自幂数
//		//1.计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较 i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 8.打印菱形

#include <string.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <line-1-i ; j++)
		{
			printf(" ");
		}
		//打印星号
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line-1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <=i ; j++)
		{
			printf(" ");
		}
		//打印星号
		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}