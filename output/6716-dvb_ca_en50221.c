/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/media/dvb/dvb-core/dvb_ca_en50221.c
static ssize_t dvb_ca_en50221_io_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
{
copy_from_user(&slot, buf, 1)) return -EFAULT;
copy_from_user(&connection_id, buf+1, 1)) return -EFAULT;
copy_from_user(fragbuf+2, buf+fragpos, fraglen)) != 0) goto exit;
}
