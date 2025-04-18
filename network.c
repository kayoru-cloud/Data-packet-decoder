#include<stdio.h>
#include<string.h>
typedef enum{TYPE_INT,TYPE_FLOAT,TYPE_STRING} Datatype;
typedef union{
    int i;
    float f;
    char s[50];
}DataValue;
typedef struct{
    Datatype type;
    DataValue value;
}Packet;
void printPacket(Packet p){
    switch(p.type){
        case TYPE_INT: printf("Integer: %d\n",p.value.i);break;
        case TYPE_FLOAT:printf("Float: %d\n",p.value.f);
        case TYPE_STRING:printf("String: %d\n",p.value.s);

    }
}
int main(){
    Packet packets[3];
    packets[0].type=TYPE_INT;
    packets[0].value.i=42;
    packets[1].type=TYPE_FLOAT;
    packets[1].value.f=3.14;
    packets[2].type=TYPE_STRING;
    strcpy(packets[2].value.s,"Hello,Network!");
    for(int i=0;i<3;i++){
        printPacket(packets[i]);
    }
    return 0;
}