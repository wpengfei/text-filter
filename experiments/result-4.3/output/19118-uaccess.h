/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/tile/include/asm/uaccess.h
static inline unsigned long __must_check copy_from_user(void *to,
{
copy_from_user(to, from, n);
copy_from_user_overflow();
}
