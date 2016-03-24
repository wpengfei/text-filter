/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/rtc.c
static int rtc_do_ioctl(unsigned int cmd, unsigned long arg, int kernel)
{
copy_from_user(&alm_tm, (struct rtc_time __user *)arg,
copy_from_user(&rtc_tm, (struct rtc_time __user *)arg,
}
