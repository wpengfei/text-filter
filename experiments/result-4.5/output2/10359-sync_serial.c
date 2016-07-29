/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/cris/arch-v10/drivers/sync_serial.c
static ssize_t sync_serial_write(struct file *file, const char *buf,
{
copy_from_user((void *)free_outp, buf, c))
copy_from_user((void *)out_buffer, buf, c1))
}
