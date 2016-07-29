/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/misc/genwqe/card_dev.c
static long genwqe_ioctl(struct file *filp, unsigned int cmd,
{
case GENWQE_WRITE_REG64: {
get_user(reg_offs, &io->num))
get_user(val, &io->val64))
case GENWQE_WRITE_REG32: {
get_user(reg_offs, &io->num))
get_user(val, &io->val64))
}
