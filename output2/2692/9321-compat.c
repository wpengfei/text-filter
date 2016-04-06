/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/fs/compat.c
int compat_get_fd_set(unsigned long nr, compat_ulong_t __user *ufdset,
{
get_user(l, ufdset);
get_user(*fdset, ufdset);
}
