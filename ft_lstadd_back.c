#include "libft.h"
//之所以是一个双指针，是因为这个函数需要改变头节点的指针，
//因此需要传入头节点指针的地址。
//使用双指针可以直接修改头节点指针的值（即指向的地址），从而改变链表的头节点。
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;//用这个指针遍历链表：

	if (lst == NULL || new == NULL)
		return;
	if (*lst == NULL)//if the value of head is empty
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)//在循环中移动 temp 指针，直到 temp 指向链表的尾部。
			temp = temp -> next;//遍历链表
		temp -> next = new;//用于插入新节点。
	}
}
