/Users/wpf/Desktop/log/test/linux-2.6.9/kernel/time.c
asmlinkage long sys_settimeofday(struct timeval __user *tv,
{
copy_from_user(&user_tv, tv, sizeof(*tv)))
copy_from_user(&new_tz, tz, sizeof(*tz)))
}
