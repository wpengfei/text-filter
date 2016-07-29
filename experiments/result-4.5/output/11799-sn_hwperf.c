/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/ia64/sn/kernel/sn2/sn_hwperf.c
static long sn_hwperf_ioctl(struct file *fp, u32 op, unsigned long arg)
{
copy_from_user(&a, (const void __user *)arg,
copy_from_user(p, (const void __user *)a.ptr, a.sz);
}
