/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/sbus/char/openprom.c
static int copyin(struct openpromio __user *info, struct openpromio **opp_p)
{
get_user(bufsize, &info->oprom_size))
copy_from_user(&(*opp_p)->oprom_array,
}
