#include <stdio.h>

int main() {
    //宣告變數
    char str[50];
    int v1, v2, v3, v4, v5, c;
    v1 = v2 = v3 = v4 = v5 = c = 0;

    //使用者輸入
    printf("請輸入英文單字：");
    scanf("%s", str);

    for (int i = 0; i < 50; i++) {
        //switch-case-default陳述
        switch (str[i]) {
            case 'a':
            case 'A':
                v1++;
                break;

            case 'e':
            case 'E':
                v2++;
                break;

            case 'i':
            case 'I':
                v3++;
                break;

            case 'o':
            case 'O':
                v4++;
                break;

            case 'u':
            case 'U':
                v5++;
                break;

            default:
                c++;
        }
    }

    //印出統計數量
    printf("a:%d, e:%d, i:%d, o:%d, u:%d\n", v1, v2, v3, v4, v5);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：switchdemo.c
   功能：示範 switch 陳述
   作者：張凱慶 */
