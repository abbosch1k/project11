#include <fstream>
int main(){
    std::ifstream src("a.txt", std::ios::binary);
    std::ofstream dst("b.txt", std::ios::binary);
    dst<<src.rdbuf();
}
