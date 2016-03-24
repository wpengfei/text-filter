/Users/wpf/Desktop/log/test/linux-2.6.9/fs/ext3/ioctl.c
int ext3_ioctl (struct inode * inode, struct file * filp, unsigned int cmd,
{
get_user(flags, (int __user *) arg))
get_user(generation, (int __user *) arg))
}
