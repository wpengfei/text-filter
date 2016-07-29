/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/lustre/lustre/llite/file.c
static int ll_lov_setstripe(struct inode *inode, struct file *file,
{
copy_from_user(lumv1, lumv1p, lum_size))
copy_from_user(&lumv3, lumv3p, lum_size))
}
int ll_fid2path(struct inode *inode, void __user *arg)
{
get_user(pathlen, &gfin->gf_pathlen))
copy_from_user(gfout, arg, sizeof(*gfout))) {
}
static int ll_ioctl_fiemap(struct inode *inode, unsigned long arg)
{
get_user(extent_count,
copy_from_user(fiemap_s, (struct ll_user_fiemap __user *)arg,
copy_from_user(&fiemap_s->fm_extents[0],
}
