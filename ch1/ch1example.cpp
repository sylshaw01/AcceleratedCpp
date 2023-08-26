// 名前を聞いて、挨拶する
#include <iostream>
#include <string>

int main()
{
    // 名前を聞く
    std::cout << "あなたの名前を入力してください： ";

    // 名前を読み込む
    std::string name;      // nameを定義する
    std::cin >> name;      // 読み込む

    // 挨拶を書く
    std::cout << "こんにちは、" << name << "さん" << std::endl;
    return 0;

}