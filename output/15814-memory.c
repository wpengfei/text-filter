/Users/wpf/Desktop/log/test/linux-2.6.9/sound/core/memory.c
int copy_from_user_toio(unsigned long dst, const void __user *src, size_t count)
{
copy_from_user((void*)dst, src, count) ? -EFAULT : 0;
copy_from_user(buf, src, c))
}
