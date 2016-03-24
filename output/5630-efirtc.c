/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/efirtc.c
static int
{
copy_from_user(&wtime, (struct rtc_time __user *)arg,
get_user(enabled, &ewp->enabled)
copy_from_user(&wtime, &ewp->time, sizeof(struct rtc_time)) )
}
