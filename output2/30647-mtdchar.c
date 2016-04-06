/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/mtd/mtdchar.c
static int mtdchar_ioctl(struct file *file, u_int cmd, u_long arg)
{
case MEMERASE64:
copy_from_user(&einfo64, argp,
copy_from_user(&einfo32, argp,
}
