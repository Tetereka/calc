#include <header.h>

void plusFunc(string num1, string num2, bool negative) {
    int carry = 0;
    string res = "";
    int char1, char2, summ;
    for (int i = itc_len(num1) - 1; i > -1; i--){
        char1 = num1[i];
        char2 = num2[i];
        summ = char1 + char2 - 96 + carry;
        if (summ > 9){
            summ -= 10;
            carry = 1;
        }
        else carry = 0;
        res = to_string(summ) + res;
    }
    if (carry != 0) res = to_string(carry) + res;
    if (negative) res = "-" + res;
    result(res);
}

void minusFunc(string num1, string num2, bool minuss) {
    if (num1 < num2){
        minuss = !minuss;
        string vrem = num1;
        num1 = num2;
        num2 = vrem;
    }
    int vrem2 = 0;
    string res = "";
    int bit1, bit2, difference;
    for (int i = itc_len(num1) - 1; i > -1; i--) {
        bit1 = num1[i];
        bit2 = num2[i];
        difference = bit1 - bit2 - vrem2;
        if (difference < 0){
            difference += 10;
            vrem2 = +1;
        }
        else vrem2 = 0;
        res = to_string(difference) + res;
    }
    if (minuss) res = "-" + res;
    result(res);
}
string preobraz(string num1, string num2) {
    long long num = itc_len(num1) - itc_len(num2);
    for (int i=0; i < num; i++)
        num2 = "0" + num2;
    return num2;
}

