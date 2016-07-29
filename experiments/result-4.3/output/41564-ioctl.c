/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/fs/nilfs2/ioctl.c
static int nilfs_ioctl_clean_segments(struct inode *inode, struct file *filp,
{
copy_from_user(argv, argp, sizeof(argv)))
copy_from_user(kbufs[n], base, len)) {
}
static int nilfs_ioctl_set_suinfo(struct inode *inode, struct file *filp,
{
copy_from_user(&argv, argp, sizeof(argv)))
copy_from_user(kbuf, base, len)) {
}
