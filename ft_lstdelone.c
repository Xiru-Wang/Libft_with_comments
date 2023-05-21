#include "libft.h"

/*
删除链表中的一个节点并释放其内存
两个参数：一个是待删除的节点的指针 lst，
另一个是一个函数指针 del，指向的函数用于删除或释放节点中的内容（content）。
*/
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)//如果 lst 是 NULL，那么函数立即返回，因为没有节点需要删除。
		return;
	del(lst->content);//调用 del 函数并传入 lst->content,删除该节点中的内容。
	free(lst);//释放了 lst 指向的节点的内存
}
