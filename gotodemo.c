#include <stdio.h>

int main() {
    int i, sum, end;
    i = sum = 0;
    goto Input;

    Input:
    printf("請輸入整數：");
    scanf("%d", &end);
    goto Condition;

    Increment:
        sum += i;
        goto Condition;

    Condition:
        if (i == end) {
            goto Result;
        }
        else {
            i += 1;
            goto Increment;
        }

    Result:
        printf("%d\n", sum);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：gotodemo.c
   功能：示範 goto 陳述
   作者：張凱慶 */
