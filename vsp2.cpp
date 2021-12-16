#include <header.h>
bool isNumber(string s) {
    if(s.size()==0) return false;
    for(int i=0;i<s.size();i++) {
        if((s[i]>='0' && s[i]<='9')==false) {
            return false;
        }
    }
    return true;
}
string itc_slice_str(string str, int n, int k){
    string itog = "";
    if (k < n) return str;
    else{
        if (k >= itc_len(str)) k = itc_len(str) - 1;
        for (int rez = n; rez < k + 1; rez++)
            itog += str[rez];
        return itog;
    }
}

bool itc_isFirstInSecond(string s1, string s2){
    if (s1 == "") return true;
    if (s2 == "") return false;
    for (int i=0; i <= itc_len(s2) - itc_len(s1); i++) {
        cout << itc_slice_str(s2, i, i + itc_len(s1) - 1) << endl;
        if (itc_slice_str(s2, i, i + itc_len(s1) - 1) == s1) return true;
    }
    return false;
}

void result(string res){
    bool zero = true;
    for (int i=0; i < itc_len(res); i++)
        if (res[i] != '-' && res[i] != '0') zero = false;
    if (zero) res = "0";
    else {
        bool negative = false;
        if (res[0] == '-'){
            res = itc_slice_str(res, 1, itc_len(res));
            negative = true;
        }
        for (int i = 0; res[i] == '0'; i++) res = itc_slice_str(res, 1, itc_len(res));
        if (negative) res = '-' + res;

    }
    cout << "Получилось вот: " << res << endl << endl;
    loading();
}
int m(string num1, string num2, bool negative){
    int result, num1int, num2int;
    num1int = str_to_int(num1);
    num2int = str_to_int(num2);
    result = num1int * num2int;
    if (negative){
    cout << "Получилось вот: " << result * -1 << endl << endl;
    loading();
    }
    else{
    cout << "Получилось вот: " << result << endl << endl;
    loading();
    }
}
