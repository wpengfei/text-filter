/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/tpqic02.c

static int qic02_tape_ioctl(struct inode *inode, struct file *filp, unsigned int iocmd, unsigned long ioarg)
{
copy_from_user(&qic02_tape_dynconf, argp, sizeof(qic02_tape_dynconf)))
copy_from_user(&operation, argp, sizeof(operation)))
}
