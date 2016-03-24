/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/applicom.c
static ssize_t ac_write(struct file *file, const char __user *buf, size_t count, loff_t * ppos)
{
copy_from_user(&st_loc, buf, sizeof(struct st_ram_io))) 
copy_from_user(&tmpmailbox, &buf[sizeof(struct st_ram_io)],
}
