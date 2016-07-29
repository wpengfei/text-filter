/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/atm/zatm.c
static int zatm_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
{
case ZATM_SETPOOL:
get_user(pool,
copy_from_user(&info,
}
