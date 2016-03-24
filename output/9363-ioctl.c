/Users/wpf/Desktop/log/test/linux-2.6.9/fs/ext2/ioctl.c
int ext2_ioctl (struct inode * inode, struct file * filp, unsigned int cmd,
{
get_user(flags, (int __user *) arg))
get_user(inode->i_generation, (int __user *) arg))
}
