/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/include/linux/pagemap.h
static inline int fault_in_pages_readable(const char __user *uaddr, int size)
{
get_user(c, uaddr);
get_user(c, end);
}
static inline int fault_in_multipages_readable(const char __user *uaddr,
{
get_user(c, uaddr);
get_user(c, end);
}
