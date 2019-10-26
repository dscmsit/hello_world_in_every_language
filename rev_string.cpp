#include <iostream>
#include <cstring>

int main() {
    int i;
    int len;
    char arr[10];
std::cout<< "Enter your first number";
std::cin>> arr;
len = strlen(arr);
std::cout<< len;
for(i=len-1;i>=0;i--){

    std::cout<<arr[i];
}
return 0;

}
