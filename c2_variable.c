#include <stdio.h>

int main(){
    /*variable = allocated space in memory to store a value
                 We refer to a variable's name to access te stored value.
                 That variable now behaves as if it was the value it contains.
                 BUT we need to declare what type of data we are storing*/

    int x;           //declaration
    x = 24;          //initialization
    int y = 10;      //declaration + initialization

    int age = 17;                    //interger: so nguyen
    float gpa = 2.05;                //floating point number: so thap phan
    char grade = 'A';                //single characater: ki tu don le
    char name[] = "Nguyen Tuan Dat"; //array of characters: mot mang ki tu
    // Vi C khong phai ngon ngu lap trinh huong doi tuong ==> khong co kieu bien str nhu Python

    printf("Hello %s\n",name);                  //%s la string
    printf("You are %d years old\n",age);       //%d la dai dien cho data type, chen bien vao lenh printf
    printf("Your averge grade is %c\n",grade);  //%c la char
    printf("Your gpa is %f\n",gpa);             //%f la float
    printf("Toi sinh ngay %d thang %d",x,y);    //chen nhieu bien cung luc

    return 0;
}