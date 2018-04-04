#include <stdio.h>

int main() {
    //宣告變數
    int i, sum, end;

    //使用者輸入
    printf("請輸入整數：");
    scanf("%d", &end);

    //while迴圈
    i = 0;
    sum = 0;
    while (i <= end) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：whiledemo.c
   功能：示範 while 陳述
   作者：張凱慶 */
