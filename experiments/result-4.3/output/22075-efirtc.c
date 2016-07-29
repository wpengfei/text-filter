/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/char/efirtc.c
static long efi_rtc_ioctl(struct file *file, unsigned int cmd,
{
case RTC_WKALM_SET:
get_user(enabled, &ewp->enabled)
copy_from_user(&wtime, &ewp->time, sizeof(struct rtc_time)) )
}
