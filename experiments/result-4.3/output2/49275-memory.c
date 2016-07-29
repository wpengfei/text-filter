/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/sound/core/memory.c
int copy_from_user_toio(volatile void __iomem *dst, const void __user *src, size_t count)
{
copy_from_user((void __force *)dst, src, count) ? -EFAULT : 0;
copy_from_user(buf, src, c))
}
