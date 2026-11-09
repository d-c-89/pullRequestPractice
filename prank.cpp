#include <iostream>
#include <string>
#include <unistd.h>
int main() {
    std::cout << "int main() {}?" << std::endl;
    sleep(1);
    std::cout << "no." << std::endl;
    sleep(1);
    std::cout << "public class main {public static void main(String[] args){}}?" << std::endl;
    sleep(1);
    std::cout << "yes." << std::endl;
    sleep(1);
    std::cout << "access to memory for faster and more direct hardware control?" << std::endl;
    sleep(1);
    std::cout << "no." << std::endl;
    sleep(1);
    std::cout << "a garbage collector that eats CPU and RAM and makes code slower?" << std::endl;
    sleep(1);
    std::cout << "yes." << std::endl;
    sleep(1);
    std::cout << "This doesn't mean I don't want to be on the team, but since this is a practice repository, I thought I should have some fun." << std::endl;
    sleep(1);
    std::string x;
    std::string* ptr=&x;
    sleep(1);
    std::cout << "Just to give a pointer: " << ptr << std::endl;
}