#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6
int main() {
    
    // 12-1 문제 1
    /*  
    int num = 10;
    int* ptr1 = &num;
    int* ptr2 = ptr1;

    (*ptr1)++;
    (*ptr2)++;
    printf("%d\n", num);
    */

    // 12 -1 문제 2
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
    
    // 배열 지수들의 값을 증가 시키기
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

    // 포인터 연산 증가 감소
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

    *(ptr++) = 20; // 0번째 배열의 값에 20을 저장 후 주소값 1증가
    printf("1번째 배열에 저장된 값 %d \n", *(ptr)); // 1번째 배열의 값을 가리킴 
    printf("0번째 배열에 저장된 값 %d \n", arr[0]); // 0번째 배열의 값을 가리킴
    printf("\n");
    *(ptr+1) = 20; // arr[2]에 20을 저장한다.
    printf("arr[1]의 값을 가리킴 %d \n", *(ptr));  // arr[1]을 가리키고 있음 왜 와이 위쪽에서 ++연산을 하였기 때문임
    printf("arr[2]의 값을 가리킴 %d \n", *(ptr+1)); // arr[2]에 저장된 값을 출력
    */

    // 13-1 문제 1
    /*
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = &arr;
    
    printf("0번째 인덱스의 증가 값 %d\n", *(ptr)+2);
    printf("1번째 인덱스의 증가 값 %d\n", *(ptr+1)+2);
    printf("2번째 인덱스의 증가 값 %d\n", *(ptr+2)+2);
    printf("3번째 인덱스의 증가 값 %d\n", *(ptr+3)+2);
    printf("4번째 인덱스의 증가 값 %d\n", *(ptr+4)+2);
    */
    
    // 13-1 문제 2
    /*
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = &arr;
    
    printf("0 번째 인덱스 증가전 값 %d \n", *(ptr));
    (*ptr += 2);
    printf("0 번째 인덱스 증가후 값 %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("1 번째 인덱스 증가전 값 %d \n", *(ptr));
    (*ptr += 2);
    printf("1 번째 인덱스 증가후 값 %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("2 번째 인덱스 증가전 값 %d \n", *(ptr));
    (*ptr += 2);
    printf("2 번째 인덱스 증가후 값 %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("3 번째 인덱스 증가전 값 %d \n", *(ptr));
    (*ptr += 2);
    printf("3 번째 인덱스 증가후 값 %d \n", *(ptr));
    printf("\n");
    ptr++;
    printf("4 번째 인덱스 증가전 값 %d \n", *(ptr));
    (*ptr += 2);
    printf("4 번째 인덱스 증가후 값 %d \n", *(ptr));

    */

    // 13-1 문제 3
    
    /*
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = arr;

    printf("감소 전 0번째 인덱스의 값 %d \n", (*ptr));
    (*ptr -= 1);
    printf("감소 후 0번째 인덱스의 값 %d \n", (*ptr));
    ptr++;
    printf("\n");
    printf("감소 전 1번째 인덱스의 값 %d \n", (*ptr));
    (*ptr -= 1);
    printf("감소 후 1번째 인덱스의 값 %d \n", (*ptr));
    ptr++;
    printf("\n");
    printf("감소 전 2번째 인덱스의 값 %d \n", (*ptr));
    (*ptr -= 1);
    printf("감소 후 2번째 인덱스의 값 %d \n", (*ptr));
    ptr++;
    printf("\n");
    printf("감소 전 3번째 인덱스의 값 %d \n", (*ptr));
    (*ptr -= 1);
    printf("감소 후 3번째 인덱스의 값 %d \n", (*ptr));
    ptr++;
    printf("\n");
    printf("감소 전 4번째 인덱스의 값 %d \n", (*ptr));
    (*ptr -= 1);
    printf("감소 후 4번째 인덱스의 값 %d \n", (*ptr));
    ptr++;
    printf("\n");
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("감소 후 배열에 저장된 값을 모두 더한 값 %d \n",sum);
    */

    // 13-1 문제 4
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
         ptr += 1;  // 주소값을 증가,감소 시켜야지 다음 값을 변경할 수 있음!!!!
         ptr1 -= 1;
        
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    */
    return 0;
}
