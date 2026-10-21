#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int account;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    // 讀取第一筆帳號（輸入 -1 結束）
    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    // 當帳號不為 -1 時持續執行迴圈
    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%lf", &totalCharges);

        printf("Enter total credits: ");
        scanf("%lf", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        // 計算新餘額：期初餘額 + 本月消費總額 - 本月已付金額
        newBalance = beginningBalance + totalCharges - totalCredits;

        // 判斷新餘額是否超過信用額度
        if (newBalance > creditLimit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance:      %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }

    return 0;
}