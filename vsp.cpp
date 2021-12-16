#include <header.h>

void loading(){
    cout << "Перезапускаюсь";
    Sleep(500);
    cout << ".";
    Sleep(500);
    cout << ".";
    Sleep(500);
    cout << ".";
    Sleep(500);
    cout << "\r \r";
    cout << "Перезапускаюсь";
    Sleep(500);
    cout << ".";
    Sleep(500);
    cout << ".";
    Sleep(500);string toForm(string num1, string num2)
    cout << ".";
    cout << endl << endl;
}

long itc_len(string str){
    int i = 0;
    while (str[i] != '\0'){
        i += 1;
    }
    return i;
}
string toForm(string num1, string num2){
    long long num = itc_len(num1) - itc_len(num2);
    for (int i=0; i < num; i++)
        num2 = "0" + num2;
    return num2;
}
int charToInt(char c){
    return c - '0';
}

int str_to_int(string str)
{
    int figure = 0;
    int k = 1;
    for (int i = 1; i < itc_len(str); i++)
    {
        k = k * 10;
    }

    for (int i = 0; i < itc_len(str); i++)
    {
        char number = str[i] - 48;
        figure = figure + number * k;
        k = k / 10;
    }
    return(figure);
}
