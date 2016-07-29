/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/char/dtlk.c
static ssize_t dtlk_write(struct file *file, const char __user *buf,
{
get_user(ch, buf + i))
get_user(ch, buf) &&
}
