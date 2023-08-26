//　名前を聞いて、額入り挨拶を作る
#include <iostream>
#include <string>

int main()
{
    std::cout << "あなたの名前を入力してください： ";
    std::string name;
    std::cin >> name;

    // メッセージを作る
    const std::string greeting = "こんにちは、" + name + "さん";
    //　見ないで、UNICODEのために...
    int i, j;
    i = 0;
    j = 0;
    while(greeting[i])
    {
        if ((greeting[i] & 0xc0) != 0x80) j++;
        i++;
    }

    // ２列目と４列目を作る
    const std::string spaces(2*j, ' ');
    const std::string second = "* " + spaces + " *";

    // １列目と５列目を作る
    const std::string first(second.size(), '*');

    // ターミナルに書く
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    //　注意！　日本語で名前を入力しない場合：　アスターの数が間違える

    return 0;
}