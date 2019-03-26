#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
int data;//密码
int order;//序号
struct LNode*next;
} LNode;
void main()
{
    struct LNode*head;//head为头指针
    struct LNode*p1,*p2;
    int i,j,m,n;
    printf("输入人数");//输入人数
    scanf("%d",&n);
    //为了简化代码,建表的时候使用一个空的Node作为表头.
    p1=(struct LNode*)malloc(sizeof(LNode));
    head=p1;
    for (i=1;i<=n;i++)
    {
        p1->next=(struct LNode*)malloc(sizeof(LNode));
        printf("输入第i个人的密码:",i);//输入密码
        scanf("%d",&p1->next->data);
        p1->next->order=i;
        p1=p1->next;
    }

    p1->next=head->next;//将链表首尾相连,删除空表头.
    p2=head->next;//此时p2指向链表的头
    free (head);
    printf("输入上限:");
    scanf("%d",&m);
    printf("出列顺序:");
    while (p2->next!=p2)//人数大于1
    {
        for(j=1;j<m;j++)
            {
                p1=p2;
                p2=p2->next;

            }
        printf("%d",p2->order);//第m个人出列
        m=p2->data;
        p1->next=p2->next;//删除第m个结点
        free (p2);
        p2=p1->next;
    }
    printf ("%d",p2->order);//输出队列最后一个人
    free (p2);//清空队列的最后一个
}
