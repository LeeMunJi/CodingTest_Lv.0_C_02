// 1

// 정수 배열 array가 매개변수로 주어질 때, 7이 총 몇 개 있는지 반환하는 함수 완성

// 제한사항
// 1 <= array 길이 <= 100
// 0 <= array 원소 <= 100,000

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    for (int i = 0; i < array_len; i++) {
        while (array[i] != 0) {
            if (array[i] % 10 == 7)
                answer++;
            array[i] /= 10;
        }
    }
    return answer;
}
*/

// 2

// 영어 대소문자로 이루어진 문자열 my_string이 매개변수로 주어질 때, my_string을 모두 소무자로 바꾸고 알파벳 순서대로 문자열을 반환하는 함수 완성

// 제한사항
// 0 < my_string 길이 < 100

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {

    int len = strlen(my_string);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(len + 1);

    for (int i = 0; i <= len; i++)
    {
        answer[i] = tolower(my_string[i]);
    }

    for (int k = 0; k < len; k++)
    {
        for (int j = 0; j < len - k - 1; j++)
        {
            if (answer[j] > answer[j + 1])
            {
                char temp = answer[j + 1];
                answer[j + 1] = answer[j];
                answer[j] = temp;
            }
        }
    }
    return answer;
}
*/

// 3

// 어떤 세균은 1시간에 두배만큼 증식함. 처음 세균의 마리수 n과 경과한 시간 t가 매개변수로 주어질 때 t시간 후 세균의 수를 반환하는 함수 완성

// 제한사항
// 1 <= n <= 10
// 1 <= t <= 15

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int answer = 0;
    for (int i = 0; i < t; i++)
    {
        n *= 2;
    }
    answer = n;
    return answer;
}
*/

// 4

// 정수 n이 매개변수로 주어질 때, n이 제곱수라면 1을 아니라면 2를 반환하도록 하는 함수 완성

// 제한사항
// 1 <= n <= 1,000,000

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    int flag = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (i * i == n) {
            answer = 1;
            break;
        }
    }

    return answer;
}
*/

// 5

// 문자열 str1, str2가 매개변수로 주어질 때, str1안에 str2가 있다면 1을 없다면 2를 반환하도록 하는 함수 완성

// 제한사항
// 1 <= str1 길이 <= 100
// 1 <= str2 길이 <= 100
// 문자열은 알파벳 대문자, 소문자, 숫자로 구성되어 있음

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    return strstr(str1, str2) ? 1 : 2;
}
*/