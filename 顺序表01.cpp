// Created by Lenovo on 2026/10/29.
// 从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值，空出的位置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行

//#include <stdio.h>
//void DeleteList(SqList &L,int min){
//    if(L.length==0){
//        printf("顺序表为空");
//        return 0;
//    }
//    int len=0;
//    int min=L.data[0];
//    for(int i=0;i<L.length;i++){
//        if(min>L.data[i+1]){
//            min=L.data[i+1];
//        }
//        len++;
//    }
//    L.data[len]=L.data[L.length-1];
//    return min;
//}

#include <stdio.h>
#define MaxSize 100
typedef struct{
    int data[MaxSize];
    int length;
}SqList;


bool Del_Min(SqList &L,int &value){
    if(L.length == 0){
        printf("顺序表为空，出错退出\n");
        return false;
    }
    value = L.data[0];
    int pos = 0;
    for(int i = 0;i < L.length;i++){
        if(L.data[i]<value){
            value = L.data[i];
            pos = i;
        }
    }
    L.data[pos]=L.data[L.length-1];
    L.length--;
    return true;
}


int main(){
    SqList L = {{5,4,1,2,3},5};
    int x;
    Del_Min(L,x);
    for(int i = 0;i<L.length;i++){
        printf("%d",L.data[i]);
    }
    printf("\n");
    printf("%d",x);
    return 0;
}
