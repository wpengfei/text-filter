/Users/wpf/Desktop/log/test/linux-2.6.9/arch/s390/kernel/ptrace.c
static int
{
copy_from_user(&parea, (void __user *) addr,
get_user (tmp, (addr_t __user *) data))
}
static int
{
copy_from_user(&parea, (void __user *) addr,
get_user (tmp, (__u32 __user *) data))
}
