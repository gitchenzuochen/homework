#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
int data;//����
int order;//���
struct LNode*next;
} LNode;
void main()
{
    struct LNode*head;//headΪͷָ��
    struct LNode*p1,*p2;
    int i,j,m,n;
    printf("��������");//��������
    scanf("%d",&n);
    //Ϊ�˼򻯴���,�����ʱ��ʹ��һ���յ�Node��Ϊ��ͷ.
    p1=(struct LNode*)malloc(sizeof(LNode));
    head=p1;
    for (i=1;i<=n;i++)
    {
        p1->next=(struct LNode*)malloc(sizeof(LNode));
        printf("�����i���˵�����:",i);//��������
        scanf("%d",&p1->next->data);
        p1->next->order=i;
        p1=p1->next;
    }

    p1->next=head->next;//��������β����,ɾ���ձ�ͷ.
    p2=head->next;//��ʱp2ָ�������ͷ
    free (head);
    printf("��������:");
    scanf("%d",&m);
    printf("����˳��:");
    while (p2->next!=p2)//��������1
    {
        for(j=1;j<m;j++)
            {
                p1=p2;
                p2=p2->next;

            }
        printf("%d",p2->order);//��m���˳���
        m=p2->data;
        p1->next=p2->next;//ɾ����m�����
        free (p2);
        p2=p1->next;
    }
    printf ("%d",p2->order);//����������һ����
    free (p2);//��ն��е����һ��
}
