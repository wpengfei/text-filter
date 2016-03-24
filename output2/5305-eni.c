/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/atm/eni.c

static int eni_ioctl(struct atm_dev *dev,unsigned int cmd,void __user *arg)
{
copy_from_user(&mult, arg,
copy_from_user(&ci, arg,sizeof(struct atm_cirange)))
}
