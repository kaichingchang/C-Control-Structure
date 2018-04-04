#include <stdio.h>

int main() {
    //宣告變數
    int score;

    //使用者輸入
    printf("請輸入分數：");
    scanf("%d", &score);

    //if-else陳述
    if (score <= 100 && score >= 90) {
        printf("很棒！\n");
    }
    else if (score < 90 && score >= 60) {
        printf("不錯！\n");
    }
    else if (score < 60 && score >= 0){
        printf("加油！\n");
    }
    else {
        printf("未知成績！！\n");
    }

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：ifdemo.c
   功能：示範 if-else 陳述
   作者：張凱慶 */
