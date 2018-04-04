#include <stdio.h>

int main() {
    //宣告變數
    int i, sum, end;

    //使用者輸入
    printf("請輸入整數：");
    scanf("%d", &end);

    //do-while迴圈
    i = sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= end);
    printf("%d\n", sum);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：dowhiledemo.c
   功能：示範 do-while 陳述
   作者：張凱慶 */
