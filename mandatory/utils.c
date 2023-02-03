#include "../includes/push_swap.h"
 
int find_min(t_list *list)
{
    int     min;
    t_list  *tmp;

    min = *(int *)list->content;
    tmp = list;
    while(list)
    {
        if (min > *(int *)list->content)
        {
            min = *(int *)list->content;
            tmp = list;
        }
        list = list->next;
    }
    tmp->index = 1;
    return (min);
}

void    indexing(t_list *list)
{
    t_list  *max;
    t_list  *tmp;
    int     index;
    int     value;

    index = ft_lstsize(list) + 1;
    value = find_min(list);
    while (--index > 0)
    {
        tmp = list;
        value = find_min(list);
        while (tmp)
        {
            if (value < *(int *)tmp->content && tmp->index == 0)
            {
                value = *(int *)tmp->content;
                max = tmp;
            }
            tmp = tmp->next;
        }
        if (max->index == 0)
            max->index = index;
    }  
}