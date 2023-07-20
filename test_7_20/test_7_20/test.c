#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
//void exchange(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(& a, & b);
//	printf("%d %d", a, b);
//	return 0;
//}
//void multable(int num)
//{
//	int a = 0;
//	for (a = 1; a < num; a++)
//	{
//		int b = 0;
//		for (b = 1; b <= a; b++)
//		{
//			int c = 0;
//			c = a * b;
//			printf("%2d *%2d = %2d ", b, a, c);
//		}
//		printf("\n");
//	}
//	
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	multable(num);
//	return 0;
//}
//void  is_prime()
//{
//	for (int b = 100; b < 200; b++)
//	{
//		int c = 0;
//
//		for (int a = 2; a < (b/2)-1; a++)
//		{
//			//判定是否能被其他数整除，如果能被整除，则计数加一并跳出循环
//			if (b % a == 0)
//			{
//				c++;
//				break;
//			}
//
//		//如果除完所有数计数还是0则说明没有能整除的数
//		if (c == 0)
//		{
//			printf("%d  ", b);
//		}
//	}
//	
//}
//int main()
//{
//	is_prime();
//	return 0;
//}

//int main() {
//    int a = 0;  // 素数的个数
//    int num = 0;  // 输入的整数
//    printf("输入一个整数：");
//    scanf("%d", &num);
//    for (int i = 2; i < num; i++) 
//    {
//        if (num % i == 0) {
//            a++;  // 素数个数加1
//        }
//    }
//    if (a == 0) {
//        printf("%d是素数。\n", num);
//    }
//    else {
//        printf("%d不是素数。\n", num);
//    }
//    return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d 是闰年\n",year);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//}
