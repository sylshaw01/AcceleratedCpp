#include <iostream>
#include <string>

using std::endl;
using std::cout;

int main(){
    const int w = 5;
    const int l = 10;
    

    for(int i=0;i<w*2;i++){
        std::cout << "*";
    }
    std::cout << std::endl;
    for(int i = 0;i<w;i++){
        std::cout << "*";
        for(int j =0;j<(w*2)-1;j++){
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }
    for(int i=0;i<w*2;i++){
        std::cout << "*";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i=0;i<l*2;i++){
        std::cout<<"*";
    }
    std::cout << std::endl;
    for(int i=0;i<w;i++){
        std::cout<<"*";
        for(int j=0;j<(l*2)-1;j++){
            std::cout << " ";
        }
        std::cout<<"*" << std::endl;
    }
    for(int i=0;i<l*2;i++){
        std::cout << "*";
    }
    std::cout<<std::endl;



    return 0;
}