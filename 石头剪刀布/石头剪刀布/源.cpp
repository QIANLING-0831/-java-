#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int play;
//	int rob=rand()%3;
//	srand(time(NULL));
//	scanf("%d", &play);
//	rob = rand() % 3;
//	printf("玩家：%d\n", play);
//	printf("机器人：%d\n", rob);
//	
//	if (play == rob)	
//	{
//		printf("平局");
//	}
//	else		
//	{
//		
//		if (play == 2 && rob == 0)
//		{
//			printf("玩家胜利");
//		}
//		else if (play == 0 && rob == 2)
//		{
//			printf("机器人胜利");
//		}
//		else		
//		{
//			if (play < rob)
//			{
//				printf("玩家胜利");
//			}
//			else
//			{
//				printf("机器人胜利");
//			}
//		}
//	}
//}

//int factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//double xpower(double x, int n)
//{
//	int i;
//	double result = x;
//	if (x == 0)
//		return 0;
//	if (n == 0)
//		return 1;
//	for (i = 1; i < n; i++)
//		result *= x;
//	printf("%d^%d = %d\n", x, n, result);
//	return result;
//}
//int main()
//{
//	double ex = 1, fn;
//	double fac, npow,x;
//	int i,n;
//	printf("请输入n和x的值:\n");
//	scanf("%d%lf", &n, &x);
//	printf("%lf\n", x);
//	for (i = 1; i <= n; i++) {
//		npow = xpower(x, i);
//		fac = factorial(i);
//		fn =  npow / fac;
//		ex += fn;
//	}
//	printf("ex=%lf\n", ex); 
//}

//#include<stdio.h>
//#include<math.h>
//int c = 0;
//int main()
//{
//    int a,i, n, k;
//    double j[100],m=0;
//    printf("输入一个整数：");
//    scanf("%d", &n);
//    j[0] = 3;
//    for (a = 3; a <= n; a++)
//    {
//        k = (int)sqrt(a);
//        for (i = 2; i <= k; i++)
//        {
//            if (a % i == 0)
//                break;
//            else
//            {
//                c += 1;
//                printf("c=%d\n", c);
//                j[c] = sqrt(a);
//                printf("%d\n", a);
//            }
//        }
//    }
//    for (; c >= 0; c--)
//    {
//        printf("j[]%d\n", j[c]);
//        m += j[c];
//    }
//    printf("%lf", m);
//}

//有问题

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[7] = { 'C','E','A','e','d','c','a' };
//	char b[7];
//	int i, j, c, n;
//	a[0] = '\0', a[6] = '\0';
//	for (i = 0; i < 7; i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			a[i] += 32; /*b[i] = a[i]; a[i] -= 32;*/
//		}
//		else b[i] = a[i];
//	}
//	for (i = 0; i < 6 - 1; i++)
//		for (j = 1; j < 6 - i - 1; j++)
//		{
//			if (b[j] < b[j + 1])
//			{
//				c = a[j]; a[j] = a[j + 1]; a[j + 1] = c;
//			/*	n = b[j]; b[j] = b[j + 1]; a[j + 1] = n;*/
//			}
//			//if (a[j] < a[j + 1])
//			//{
//			//	c = a[j]; a[j] = a[j + 1]; a[j + 1] = c;
//			//	printf("j=%c  j+=%c\n", a[j], a[j + 1]);
//			//}
//		}
//	for (i = 0; i < 7; i++)
//		printf("%c", a[i]);
//}

//#include<stdio.h>
//int* f(int* s, int* t)
//{
//    int* k;
//    if (*s < *t)
//    {
//        k = s; *s =* t; t = k;
//    }
//    printf("%d%d", *s, *t);
//    return s;
//}
//int main()
//{
//    int i = 3, j = 5, * p = &i, * q = &j, * r;
//    r = f(p, q);
//    printf("%d,%d,%d,%d,%d\n", i, j, *p, *q, *r);
//}

//#include <stdio.h>
//int k = 7, m = 5;
//void f(int** s)
//{
//	int* t = &k; printf("%d     ", *t);
//	s = &t; printf("%d        ", *t);
//	*s = &m; printf("%d        ", *t);
//	printf("%d,%d,%d,", k, *t, **s);
//}
//int main()
//{
//	int i = 3, * p = &i, ** r = &p;
//	f(r);
//	printf("%d,%d,%d\n", i, *p, **r);
//}

//#include<stdio.h> 
//#include<math.h>
//int fun(int h)
//{
//	int k, s = 0, sum = 0, p = 0;
//	int i, a[200], j, b = 0;
//	for (i = 2; i < h; i++)
//	{
//		for (j = 2; j < i; j++)
//			if (i % j == 0)break;
//		if (j < i)continue;
//		{b++; a[b] = i; }
//	}
//	for (i = b, j = 0; j < 10; j++)
//	{
//		sum += a[i];
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int high, sum;
//	printf("输入数据");
//	scanf("%d", &high);
//	sum = fun(high);
//	printf("其最大10个素数之和是%d", sum);
//}

//#include <stdio.h>
//int fun(void);
//int main()
//{
//    int sum;
//    sum = fun();
//    printf("sum=%4d\n", sum);
//    return 0;
//}
//
//int fun(void)
//{
//    int i, j, k, sum = 0;
//    printf("The result:\n");
//    for (i = 1; i <= 3; i++)
//    {
//        for (j = 1; j <= 5; j++)
//        {
//            for (k = 0; k <= 6; k++)
//            {
//                if (i + j + k == 8)
//                {
//                    printf("red:%4d white:%4d black:%4d\n", i, j, k);
//                    sum = sum + 1;
//                }
//            }
//        }
//    }
//    return sum;
//}

//创建链表，输出链表中数据的平均值
//#include <stdio.h>
//#include <stdlib.h>
//#define   N   8
//struct  slist
//{
//    double   s;
//    struct slist* next;
//};
//typedef  struct slist  STREC;
//double  fun(STREC* h)
//{
//
//    double max = h->s;
//    while (h != NULL)
//    {
//        max += h->s;
//        h = h->next;
//    }
//    return max / 8;
//}
//
//STREC* creat(double* s)
//{
//    STREC* h, * p, * q;   int  i = 0;
//    h = p = (STREC*)malloc(sizeof(STREC)); p->s = 0;
//    while (i < N)
//    {
//        q = (STREC*)malloc(sizeof(STREC));
//        q->s = s[i]; i++; p->next = q; p = q;
//    }
//    p->next = 0;
//    return  h;
//}
//void outlist(STREC* h)
//{
//    STREC* p;
//    p = h->next;   printf("head");
//    do
//    {
//        printf("->%2.0f", p->s); p = p->next;
//    } while (p != 0);
//    printf("\n\n");
//}
//int main()
//{
//    double  s[N] = { 85,76,69,85,91,80,64,87 }, p;
//    STREC* h;
//    h = creat(s);   outlist(h);
//    p = fun(h);
//    printf("max=%6.1f\n", p);
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* fp, * ff;
//	if ((fp = fopen("student.txt", "r")) == NULL)
//	{
//		printf("不能打开此文件");
//		return  0;
//	}
//	if ((ff = fopen("out.txt", "w")) == NULL)
//	{
//		printf("不能打开该文件");
//		return 0;
//	}
//	else //(!feof(fp))
//	{
//		char name[20];
//		float a, b, c;
//		fscanf(fp, "%s %f %f %f\n", name, &a, &b, &c);
//		float ave = (a + b + c) / 3.0;
//		fprintf(ff, "%s %.2f %.2f %.2f %.2f\n", name, a, b, c, ave);
//	}
//	fclose(fp);
//	fclose(ff);
//	printf("运行成功，请前往文件查看");
//}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include<graphics.h>
#include<malloc.h>
#include<time.h>
int main()
{
	int a;
	srand((unsigned)time(NULL));
	while (1)
	{
		a = rand() % 7;//生成0-6的随机数
		//Sleep(500);//每次行动后会停下来的时间
		if (a == 0)
		{
			printf("0");
		}
		else if (a == 1)
		{
			printf("1");
		}
		else if (a == 2)
		{
			printf("2");
		}
		else if (a == 3)
		{
			printf("3");
		}
		else if (a == 4)  // 发射子弹
		{
			printf("4");
		}
		else if (a == 5)  // 炮弹换方向 
		{
			printf("5");
		}
		else if (a == 6)  //  炮弹换方向 
		{
			printf("6");
		}
	}
}