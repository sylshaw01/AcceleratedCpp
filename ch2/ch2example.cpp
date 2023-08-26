#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{
    //　名前を聞く
    cout << "あなたの名前を入力してください： ";

    // 名前を読み込む
    string name;
    cin >> name;

    // メッセージをつくる
    const std::string greeting = "こんにちは、" + name + "さん";

    int i = 0;
    int j = 0;
    while(greeting[i])
    {
        if ((greeting[i] & 0xc0) != 0x80) j++;
        i++;
    }


    // 挨拶を囲んでる列の数
    const int pad = 1;

    // ターミナルに書く列の数
    const int rows = pad * 2 + 3;
    const string::size_type cols = i* 2 + (pad*2)+2;

    // 新たな列を作る
    cout << endl;

    // 書いた列の数
    for (int r = 0;r != rows; ++r) {
        string::size_type c = 0;

        while(c!=cols) {
            if (r == pad + 1 && c == pad + 1){
                cout << greeting;
                c+=i;
            } else {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1 )
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }    
            
        }
        cout << endl;
    }

    return 0;



}