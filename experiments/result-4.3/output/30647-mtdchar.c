/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/mtd/mtdchar.c
static int mtdchar_blkpg_ioctl(struct mtd_info *mtd,
{
copy_from_user(&a, arg, sizeof(struct blkpg_ioctl_arg)))
copy_from_user(&p, a.data, sizeof(struct blkpg_partition)))
}
static int mtdchar_ioctl(struct file *file, u_int cmd, u_long arg)
{
case MEMERASE64:
copy_from_user(&einfo64, argp,
copy_from_user(&einfo32, argp,
}
