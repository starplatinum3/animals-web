#include <stdio.h>
#define N 10//待排序个数
typedef int KeyType;//关键字类型定义
typedef struct
{
    KeyType key;
 
}RecType;
typedef RecType SeqList[N + 1];//顺序表类型
SeqList R = {10,18,4,3,6,12,1,9,18,8};
//  C语言快速排列求打印每一趟结果算法 - 『编程语言区』 - 吾爱破解 - LCG - LSG |安卓破解|病毒分析|www.52pojie.cn
// https://www.52pojie.cn/thread-894274-1-1.html
 
void QuickSort(SeqList R, int low, int high)//快速排序(两个函数递归)
{
    int pivot;//基准位置
    if (low < high)
    {//位置大于1才需要排序
        pivot = Partition(R, low, high);//调用划分函数
        QuickSort(R, low, pivot-1);//最低和基准位置的排序
        QuickSort(R, pivot + 1, high);//最高和基准位置右边之间的排序
    }
}
int Partition(SeqList R, int i, int j)//划分函数(用于返回基准位置,并排序)
{//1.判断右边是否小于关键字，是的话，R[左指针]=R[右指针]。左指针右移
 //2.判断左边是否大于关键字，是的话，R[右指针]=R[左指针]。右指针左移
 //3.R[左指针]=R[关键字]
    RecType pivot = R[i];//用顺序表的第一个值作为基准位置
    int bool1 = 0;
    if (i < j)
        bool1 = 1;
    while (i < j)//用于左右的标识如果重叠时结束循环
    {
        while (i < j&&R[j].key >= pivot.key)//判断右边的值是否大于等于基准位置的值
        {
            j--;//是的话，右标识左移，直到右边比关键字小或等于，或者左右标识重叠为止
        }
        if (i < j)
        {
            R[i++] = R[j];//找到的话，左边的数组等于右边数组。然后左标识要右移
 
        }
             
 
        while (i < j&&R[i].key <= pivot.key)//判断左边的值是否小于等于基准位置的值
        {
            i++;//是的话，左边标识要右移，直到左边标识的值比基准位置的值小
        }
        if (i < j)
 
        {
            R[j--] = R[i];
 
        }
             
    }
    R[i] = pivot;//R[左指针]=R[关键字]
    if (bool1)
    {
        printf("---------------------------\n");
        for (int z = 0; z <= N-1; z++)
            if(z==i)
                printf("[%d],", R[z]);
            else
                printf("%d,", R[z]);
        printf("\n");
    }
     
 
    return i;
}
 
void main() {
    QuickSort(R, 0, N-1);
    getchar();
}