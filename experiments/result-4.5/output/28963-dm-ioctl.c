/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/md/dm-ioctl.c
static int copy_params(struct dm_ioctl __user *user, struct dm_ioctl *param_kernel,
{
copy_from_user(param_kernel, user, minimum_data_size))
copy_from_user(dmi, user, param_kernel->data_size))
}
