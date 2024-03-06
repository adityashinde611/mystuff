#include <stdio.h>
// #pragma pack(1)
/*
    Structure is user define data type which is collection of heterogeneous datatype. Heterogenous means having different datatype.
    In structure we can access all members at a time.
    sizeof structure is sum of sizeof all its member.

    Union is user define datatype which is collection of heterogeneous datatype. 
    In union we can access only one member at a time.
    sizeof union is sizeof largest member size.

    Common points for structure and union
    1. We cannot initialised members of structure where we declare it.Because memory gets allocate for structure when we create object of it.
    2. Ways of creating object and its initialisation are same of both.

    We can create structure and union globally as well as locally.


*/
struct s1
{
    int a;  // 4
    float b;  // 4
    double c;  // 8
    char d; // 1
}obj = {10,10.1,10.12,'a'};// initializing list

struct outer1
{
    int a;  // 4
    float b;  // 4
    struct inner1
    {
        double c;  // 8
        char d; // 1
    };
};

struct outer2
{
    int a;  // 4
    float b;  // 4
    struct inner2
    {
        double c;  // 8
        char d; // 1
    }inner_obj;
};


union u1{
    int a;  // 4
    float b;  // 4
    double c;  // 8
    char d; // 1
};


int main(){
    
    printf("Size of Befor including pragma pack %d \n",sizeof(struct s1));// 24
    printf("Size of After including pragma pack(1) %d \n",sizeof(struct s1));//17

    printf("Size of Befor including pragma pack %d \n",sizeof(union u1));// 8
    printf("Size of After including pragma pack(1) %d \n",sizeof(union u1));//8

    printf("Size of Befor creating outer object %d \n",sizeof(struct outer1));// 
    printf("Size of after creating inner object %d \n",sizeof(struct outer2));//17

    struct s1 obj2;

    obj2.a = 20; //member by  member initializing list
    obj2.b = 20.1;// we cannot perform member by member initializing list globally.

    
    


    
    return 0;
}