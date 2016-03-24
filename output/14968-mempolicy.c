/Users/wpf/Desktop/log/test/linux-2.6.9/mm/mempolicy.c
static int get_nodes(unsigned long *nodes, unsigned long __user *nmask,
{
get_user(t,  nmask + k))
copy_from_user(nodes, nmask, nlongs*sizeof(unsigned long)))
}
