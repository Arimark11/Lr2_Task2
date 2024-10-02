#include <iostream>

int main(){

    double x = 0, y = 0, z = 0;

    std::cin >> x >> y >> z;

    if(x>0 && y>0 && z>0){
        if ( x+y > z && y+z > x && z + x > y){
            std::cout << " EXIST " << std::endl;
        }
        else{
            std::cout << "NOT";
        }
    }else{
        std::cout << "NOT";
    }

    return 0;
}