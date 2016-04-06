/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/watchdog/ts72xx_wdt.c
static long ts72xx_wdt_ioctl(struct file *file, unsigned int cmd,
{
case WDIOC_KEEPALIVE:
get_user(options, p);
get_user(new_timeout, p);
}
