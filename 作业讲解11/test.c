#include <stdio.h>

//�ṹ����ҵ

//// 1.
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	//pulPtrָ����Ԫ�ص�ַ
//	*(pulPtr + 3) += 3;
//	//��3����3�����Σ������õõ�9����3�ͱ����12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	//���  -- 6,12
//	return 0;
//}

// 2.
// ����ָ����ָ�룬�������һ��ָ��ĵ�ַ����С4/8���ֽ�

// 3.
// ����ָ��+1���������һ������ָ��
// ָ��-ָ�����ָ����ָ��֮���Ԫ�ظ���
//����ָ������÷���4���ֽڣ��ܱȽϴ�С

// 4.
// ָ�����飺
// int* arr[10];
// ����ָ�룺
// int (*arr)[10];

//// 5.дһ����������������һ�������ַ���������
//
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);  //��ʡ��
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
//	gets(arr);//��ȡһ��
//	reverse(arr);
//	printf("�������ַ�����%s\n", arr);
//	return 0;
//}

//// 6.��Sn=a+aa+aaa+aaaa+aaaaa+������ǰ����֮�ͣ�����a��һ������
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

//// 7.��0��100000֮�������ˮ�ɻ���
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ���������
//		//1.����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ� i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 8.��ӡ����

#include <string.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <line-1-i ; j++)
		{
			printf(" ");
		}
		//��ӡ�Ǻ�
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line-1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <=i ; j++)
		{
			printf(" ");
		}
		//��ӡ�Ǻ�
		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}