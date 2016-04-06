/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/fs/openpromfs/inode.c
static ssize_t property_write(struct file *filp, const char __user *buf,
{
get_user(ctmp, &buf[i]))
get_user(ctmp, &buf[i]))
copy_from_user(tmp + first_off, buf,
copy_from_user(tmp, buf, last_cnt))
copy_from_user(tchars, buf, 16))
copy_from_user(p, buf, count))
}
