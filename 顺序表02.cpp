// Created by Lenovo on 2026/10/29.
//设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度为O(1)
#include <stdio.h>
#define MaxSize 100
//定义顺序表结构
typedef struct{
    int data[MaxSize];
    int length;
}SqList;
//逆置函数
bool Reverse(SqList &L){
    //顺序表完整性判断
    if(L.length == 0){
        printf("该表为空表，无法逆置！");
        return false;
    }
    //从第1个元素开始与最后一个元素开始置换，共置换一半的元素。交换过程存放的元素用m暂存
    int m;
    for(int i = 0;i < L.length / 2;i++){
        m = L.data[i];
        L.data[i] = L.data[L.length - i -1];
        L.data[L.length - i -1] = m;
    }
    return true;
}
//主函数
int main(){
    //定义一个顺序表
    SqList L = {{1,2,3,4,5},5};
    Reverse(L);
    for(int i = 0;i < L.length;i++){
        printf("%d",L.data[i]);
    }
    return 0;
}
