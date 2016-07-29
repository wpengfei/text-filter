/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/powerpc/platforms/powernv/opal-prd.c
static ssize_t opal_prd_write(struct file *file, const char __user *buf,
{
copy_from_user(&hdr, buf, sizeof(hdr));
copy_from_user(msg, buf, size);
}
