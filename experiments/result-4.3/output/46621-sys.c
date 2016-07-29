/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/kernel/sys.c
static int prctl_set_mm_map(int opt, const void __user *addr, unsigned long data_size)
{
copy_from_user(&prctl_map, addr, sizeof(prctl_map)))
copy_from_user(user_auxv,
}
