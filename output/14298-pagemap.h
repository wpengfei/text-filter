/Users/wpf/Desktop/log/test/linux-2.6.9/include/linux/pagemap.h
static inline void fault_in_pages_readable(const char __user *uaddr, int size)
{
get_user(c, uaddr);
get_user(c, end);
}
