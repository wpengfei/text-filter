/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/misc/genwqe/card_dev.c
static long genwqe_ioctl(struct file *filp, unsigned int cmd,
{
case GENWQE_GET_CARD_STATE:
get_user(reg_offs, &io->num))
get_user(reg_offs, &io->num))
get_user(val, &io->val64))
get_user(reg_offs, &io->num))
get_user(reg_offs, &io->num))
get_user(val, &io->val64))
copy_from_user(&load, (void __user *)arg,
copy_from_user(&load, (void __user *)arg, sizeof(load)))
copy_from_user(&m, (void __user *)arg, sizeof(m)))
copy_from_user(&m, (void __user *)arg, sizeof(m)))
}
