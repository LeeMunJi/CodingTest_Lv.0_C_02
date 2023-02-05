// 1

// ���� �迭 array�� �Ű������� �־��� ��, 7�� �� �� �� �ִ��� ��ȯ�ϴ� �Լ� �ϼ�

// ���ѻ���
// 1 <= array ���� <= 100
// 0 <= array ���� <= 100,000

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len�� �迭 array�� �����Դϴ�.
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

// ���� ��ҹ��ڷ� �̷���� ���ڿ� my_string�� �Ű������� �־��� ��, my_string�� ��� �ҹ��ڷ� �ٲٰ� ���ĺ� ������� ���ڿ��� ��ȯ�ϴ� �Լ� �ϼ�

// ���ѻ���
// 0 < my_string ���� < 100

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string) {

    int len = strlen(my_string);
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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

// � ������ 1�ð��� �ι踸ŭ ������. ó�� ������ ������ n�� ����� �ð� t�� �Ű������� �־��� �� t�ð� �� ������ ���� ��ȯ�ϴ� �Լ� �ϼ�

// ���ѻ���
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

// ���� n�� �Ű������� �־��� ��, n�� ��������� 1�� �ƴ϶�� 2�� ��ȯ�ϵ��� �ϴ� �Լ� �ϼ�

// ���ѻ���
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

// ���ڿ� str1, str2�� �Ű������� �־��� ��, str1�ȿ� str2�� �ִٸ� 1�� ���ٸ� 2�� ��ȯ�ϵ��� �ϴ� �Լ� �ϼ�

// ���ѻ���
// 1 <= str1 ���� <= 100
// 1 <= str2 ���� <= 100
// ���ڿ��� ���ĺ� �빮��, �ҹ���, ���ڷ� �����Ǿ� ����

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* str1, const char* str2) {
    return strstr(str1, str2) ? 1 : 2;
}
*/