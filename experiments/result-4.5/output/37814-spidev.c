/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/spi/spidev.c
static long
{
case SPI_IOC_WR_MODE32:
get_user(tmp, (u8 __user *)arg);
get_user(tmp, (u32 __user *)arg);
}
