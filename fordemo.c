#include <stdio.h>

int main() {
    //宣告變數
    int i, sum, end;

    //使用者輸入
    printf("請輸入整數：");
    scanf("%d", &end);

    //for迴圈
    sum = 0;
    for (i = 0; i <= end; i++) {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：fordemo.c
   功能：示範 for 陳述
   作者：張凱慶 */
