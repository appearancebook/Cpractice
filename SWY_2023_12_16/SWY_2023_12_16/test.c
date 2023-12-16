#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>



struct ListNode 
{
     int val;
    struct ListNode *next;
};
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode* newhead = NULL, * newlist = NULL;
    if (!list1)
        return list2;
    if (!list2)
        return list1;
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            if (newlist == NULL)
            {
                newhead = newlist = list1;
            }
            else
            {
                newlist->next = list1;
                newlist = newlist->next;
            }
            list1 = list1->next;
        }
        else
        {
            if (newlist == NULL)
            {
                newhead = newlist = list2;
            }
            else
            {
                newlist->next = list2;
                newlist = newlist->next;
            }
            list2 = list2->next;
        }
    }
    if (list1)
        newlist->next = list1;
    if (list2)
        newlist->next = list2;

    return newhead;
}

int main()
{
    struct ListNode* list1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    assert(list1);
    struct ListNode* lista = (struct ListNode*)malloc(sizeof(struct ListNode));
    assert(lista);
    struct ListNode* listb = (struct ListNode*)malloc(sizeof(struct ListNode));
    assert(listb);
    struct ListNode* list2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    assert(list2);
    struct ListNode* list3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    assert(list3);
    struct ListNode* list4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    assert(list4);

    list1->val = 1;
    list1->next = lista;
    lista->val = 3;
    lista->next = listb;
    listb->val = 4;
    listb->next = NULL;

    list2->val = 1;
    list2->next = list3;
    list3->val = 2;
    list3->next = list4;
    list4->val = 4;
    list4->next = NULL;
    mergeTwoLists(list1, list2);
    return 0;
}