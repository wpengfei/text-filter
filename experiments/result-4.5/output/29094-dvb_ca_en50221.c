/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/media/dvb-core/dvb_ca_en50221.c
static ssize_t dvb_ca_en50221_io_write(struct file *file,
{
copy_from_user(&slot, buf, 1))
copy_from_user(&connection_id, buf + 1, 1))
copy_from_user(fragbuf + 2, buf + fragpos, fraglen);
}
