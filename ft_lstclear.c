#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	if (!lst || !del)
		return;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;//这行代码的目的是将 lst 移到下一个需要处理的节点，以便在下一次循环中处理。
	}
	*lst = NULL;//循环结束后Finally, the pointer to the list must be set to NULL.
}
/*
这个函数首先检查 *lst 是否为 NULL，如果不是 NULL，就进入循环。
在循环中，首先将 *lst 的 next 节点保存在 temp 中，
然后调用 ft_lstdelone 函数删除 *lst 节点，
最后将 *lst 设置为 temp，即原来 *lst 的 next 节点。这个过程一直重复，
直到链表的所有节点都被删除。

注意，这个函数将会修改传入的 lst 指针，使其指向 NULL，
因为在删除所有节点后，链表应该为空。
这就是为什么需要传入指向头节点的指针的指针 **lst，
而不是头节点的指针 *lst。只有传入指向头节点的指针的指针，我们才能修改头节点的指针。
*/
