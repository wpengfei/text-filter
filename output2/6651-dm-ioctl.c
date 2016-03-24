/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/md/dm-ioctl.c

static int copy_params(struct dm_ioctl __user *user, struct dm_ioctl **param)
{
copy_from_user(&tmp, user, sizeof(tmp)))
copy_from_user(dmi, user, tmp.data_size)) {
}
