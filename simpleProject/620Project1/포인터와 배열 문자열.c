#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6
int main_pointer() {
    
    // 12-1 ���� 1
    /*  
    int num = 10;
    int* ptr1 = &num;
    int* ptr2 = ptr1;

    (*ptr1)++;
    (*ptr2)++;
    printf("%d\n", num);
    */

    // 12 -1 ���� 2
    /*
    int num1 = 10, num2 = 20;
    int* ptr1 = &num1;
    (*ptr1) += 10;
    int* ptr2 = &num2;
    (*ptr2) -= 20;

    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("%d %d",*ptr1,*ptr2);
    */
    
    // �迭 �������� ���� ���� ��Ű��
    /*
    int arr1[3] = { 1,2,3 };
    double arr2[3] = { 1.1,2.1,3.1 };
    int* ptr1 = &arr1;
    double* ptr2 = &arr2;

    printf("%d %g\n", *ptr1, *ptr2);
    (*ptr1++);
    (*ptr2++);
    *ptr1 += 10;
    *ptr2 += 10;
    printf("%d %g\n", *ptr1, *ptr2);
    (*ptr1++);
    (*ptr2++);
    *ptr1 += 20;
    *ptr2 += 20;
    printf("%d %g\n", *ptr1, *ptr2);
    */

    // ������ ���� ���� ����
    /*
    int* ptr1 = NULL;
    double* ptr2 = NULL;

    printf("%p %p\n", ptr1 + 1, ptr1 + 2);
    printf("%p %p\n", ptr2 + 1, ptr2 + 2);

    printf("%p %p\n", ptr1, ptr2);
    ptr1++;
    ptr2++;
    printf("%p %p\n", ptr1, ptr2);
    ptr1++;
    ptr2++;
    printf("%p %p\n", ptr1, ptr2);

    int arr[3] = { 12,13,14 };
    int* ptr = arr;
    printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

    printf("%d ", *ptr);
    ptr++;
    printf("%d ", *ptr);
    ptr++;
    printf("%d ", *ptr);
    ptr--;
    printf("%d ", *ptr);
    ptr--;
    printf("%d ", *ptr);
    printf("\n");

    *(ptr++) = 20; // 0��° �迭�� ���� 20�� ���� �� �ּҰ� 1����
    printf("1��° �迭�� ����� �� %d \n", *(ptr)); // 1��° �迭�� ���� ����Ŵ 
    printf("0��° �迭�� ����� �� %d \n", arr[0]); // 0��° �迭�� ���� ����Ŵ
    printf("\n");
    *(ptr+1) = 20; // arr[2]�� 20�� �����Ѵ�.
    printf("arr[1]�� ���� ����Ŵ %d \n", *(ptr));  // arr[1]�� ����Ű�� ���� �� ���� ���ʿ��� ++������ �Ͽ��� ������
    printf("arr[2]�� ���� ����Ŵ %d \n", *(ptr+1)); // arr[2]�� ����� ���� ���
    */

    // 13-1 ���� 1
    /*
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = &arr;
    
    printf("0��° �ε����� ���� �� %d\n", *(ptr)+2);
    printf("1��° �ε����� ���� �� %d\n", *(ptr+1)+2);
    printf("2��° �ε����� ���� �� %d\n", *(ptr+2)+2);
    printf("3��° �ε����� ���� �� %d\n", *(ptr+3)+2);
    printf("4��° �ε����� ���� �� %d\n", *(ptr+4)+2);
    /*
    
    // 13-1 ���� 2
    /*
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = &arr;
    
    printf("0 ��° �ε��� ������ �� %d \n", *(ptr));
    (*ptr += 2);
    printf("0 ��° �ε��� ������ �� %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("1 ��° �ε��� ������ �� %d \n", *(ptr));
    (*ptr += 2);
    printf("1 ��° �ε��� ������ �� %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("2 ��° �ε��� ������ �� %d \n", *(ptr));
    (*ptr += 2);
    printf("2 ��° �ε��� ������ �� %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("3 ��° �ε��� ������ �� %d \n", *(ptr));
    (*ptr += 2);
    printf("3 ��° �ε��� ������ �� %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("4 ��° �ε��� ������ �� %d \n", *(ptr));
    (*ptr += 2);
    printf("4 ��° �ε��� ������ �� %d \n", *(ptr));

    */

    // 13-1 ���� 2

    /*
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = &arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d��° �ε��� �� 2 ������ %d\n",i,*(ptr)+2);
        *(ptr++);
    }
    */
    
    // 13-1 ���� 3
    
    /*
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("���� �� %d��° �ε����� �� %d \n",i, (*ptr));
        (*ptr -= 1);
        printf("���� �� %d��° �ε����� �� %d \n",i, (*ptr));
        printf("\n");
        ptr++;
    }
    
    printf("\n");
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("���� �� �迭�� ����� ���� ��� ���� �� %d \n",sum);
    */

    // 13-1 ���� 4
    /*
    int arr[6] = { 1,2,3,4,5,6 };
    int* ptr = &arr[0];
    int* ptr1 = &arr[5];
    int* temp = 0;
    int i = 0;
    int j = 0;
    
    for (i = 0; i < 3; i++)
    {
        
          temp = *ptr1;
         *ptr1 = *ptr;
         *ptr = temp;
         ptr += 1;  // �ּҰ��� ����,���� ���Ѿ��� ���� ���� ������ �� ����!!!!
         ptr1 -= 1;
        
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    */
 
    // ���ڿ� ������
    /*
    char str1[] = "My String";
    char* str2 = "Your String";
    printf("%s %s\n", str1, str2);

    str2 = "Our String";
    printf("%s %s\n", str1, str2);

    str1[0] = 'X';
    // str2[0] = 'X'; ������� ���� -> ����̱� ������
    printf("%s %s\n", str1, str2);
    */

    // ������ ������ �̷��� �迭 
    /*
    int num1 = 10, num2 = 20, num3 = 30;

    int* arr[3] = { &num1,&num2,&num3 };

    printf("%d \n", *arr[0]);
    printf("%d \n", *arr[1]);
    printf("%d \n", *arr[2]);

    char* strArr[3] = { "String","Simple","Array" }; // ���ڿ��� �ּҰ��� ������ �� �ִ� ������ 3���� ������ �� �ִ�.
    printf("%s \n", strArr[0]);
    printf("%s \n", strArr[1]);
    printf("%s \n", strArr[2]);
    */
   
    

    return 0;
}
