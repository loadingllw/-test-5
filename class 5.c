#define _CRT_SECURE_NO_WARNINGS 1
//������ѧϰ
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "bit";//����Դ  //strcpy��ʹ��
	char arr2[20];//Ŀ�ĵ�
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}

int main()
{
	char arr[] = "hellow world!";
	memset(arr, 's', 13);
	printf("%s\n", arr);      //memset��ʹ��
	return 0;
}
#include <math.h>
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

int binary_search(int arr[],int k,int sz)//arr��Ϊ���������ε�ʱ�򣬴�������Ԫ�صĵ�ַ
{
	int left = 0;
	int right =sz- 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;                          
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int main()
{
	//�����
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
	//���ֲ��ҵ�
	//�ҵ��ˣ������±�
	//�Ҳ��������� -1
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}



void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);//�ݹ��Ӧ��
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);   //�õݹ��������ַ����ĳ���
	}
	else
		return 0;
}

int main()
{
	char arr[] = "hellow world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


�����ѧϰ
int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *p = arr;
	for (i = 0; i < sz; i++)
	{
		//printf("%d ", arr[i]);
		printf("%d ", *(p + i));
	}

	//for (i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d]=%p===========>%p\n",i, &arr[i],p+i);
	//	//p+i������arr���±�Ϊi��Ԫ�صĵ�ַ

	//}
	return 0;
}

void reverse_string(char*arr)        //��������ַ���
{
	if (*arr != '\0')
	{
		reverse_string(arr + 1);
		printf("%c", *arr);
	}
}



int main()
{
	char arr[] = "hellow";
	reverse_string(arr);
	return 0;
}



int a = 0;
int DigitSum(int x)
{

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n > 9)
	{
		return DigitSum(n);
	}
	else
		return n;
	return 0;
}

int llwpow(int x,int k)
{
	if (k == 0)
		return 1;
	else if(k >= 1)
	    return x*llwpow(x,k-1);
}

int main()
{
	int n = 0;
	int k = 3;;
	scanf("%d", &n);
	int sw=llwpow(n,k);
	printf("%d", sw);
	return 0;
}



int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	return 0;
}

int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);
}
int main()
{
	int n = 2;
	int c=Fun(n);
	printf("%d", c);
}

void bili(int x)
{
	if (x>9)
	{
		bili(x / 10);
	}
	printf("%d ", x % 10);
}

int main()
{
	int n = 3657;
	bili(n);
	return 0;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int a = 1;
	for (i = 1; i <=n; i++)
	{
		a = i*a;
	}
	printf("%d", a);
	return 0;
}

int Fac(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else if (x >= 1)
	{
		return x*Fac(x - 1);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int a=Fac(n);
	printf("%d", a);
	return 0;
}



int  DigitSum(int n)
{
	if (n <= 9)
		return n;
	else
		return DigitSum(n / 10) + n % 10;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a=DigitSum(n);
	printf("%d", a);
	return 0;
}

int main()
{
	int count = 0;
	char arr[30] = "hellow world";
	int i = 0;
	for (i = 0; i <=30; i++)
	{
		if (arr[i] == '\0')
			break;
		else
			count++;
	}
	printf("%d", count);
	return 0;
}


int add(char *arr)
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + add(arr + 1);
}

int main()
{
	char arr[] = "welcome to China";
	int a=add(arr);
	printf("%d", a);
	return 0;
}


int bili(int n)
{
	if (n<3)
		return 1;
	else
		return bili(n - 1) + bili(n - 2);
}

int main()
{
	int n = 10;
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)           //�ǵݹ�ķ�ʽ����쳲�������
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
}




