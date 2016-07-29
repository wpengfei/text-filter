/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/s390/lib/uaccess.c
unsigned long __copy_from_user(void *to, const void __user *from, unsigned long n)
{
copy_from_user_mvcos(to, from, n);
copy_from_user_mvcp(to, from, n);
}
