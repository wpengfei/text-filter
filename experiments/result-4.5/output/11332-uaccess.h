/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/hexagon/include/asm/uaccess.h
static inline long hexagon_strncpy_from_user(char *dst, const char __user *src,
{
copy_from_user(dst, src, n);
copy_from_user(dst, src, res);
}
