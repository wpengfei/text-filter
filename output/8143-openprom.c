/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/sbus/char/openprom.c
static int copyin(struct openpromio __user *info, struct openpromio **opp_p)
{
get_user(bufsize, &info->oprom_size))
copy_from_user(&(*opp_p)->oprom_array,
}
static int openprom_bsd_ioctl(struct inode * inode, struct file * file,
{
copy_from_user(&op, argp, sizeof(op)))
copy_from_user */
copy_from_user(&op, argp, sizeof(op)))
copy_from_user(&op, argp, sizeof(op)))
copy_from_user(&node, argp, sizeof(int)))
}
