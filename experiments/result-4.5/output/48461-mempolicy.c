/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/mm/mempolicy.c
static int get_nodes(nodemask_t *nodes, const unsigned long __user *nmask,
{
get_user(t, nmask + k))
copy_from_user(nodes_addr(*nodes), nmask, nlongs*sizeof(unsigned long)))
}
