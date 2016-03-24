/Users/wpf/Desktop/log/test/linux-2.6.9/include/asm-sparc64/uaccess.h

static inline unsigned long copy_from_user(void *to, const void __user *from,
{
copy_from_user(to, from, size);
copy_from_user_fixup(to, from, size);
}
