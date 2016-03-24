/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/sx.c
static int sx_fw_ioctl (struct inode *inode, struct file *filp,
{
get_user (nbytes, descr++);
get_user (offset, descr++); 
get_user (data,	 descr++);
copy_from_user(tmp, (char __user *)data+i, 
get_user (nbytes, descr++);
get_user (offset, descr++); 
get_user (data,   descr++);
}
