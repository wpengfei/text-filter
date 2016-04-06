/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/include/asm-sparc64/uaccess.h
unsigned long __gu_addr = (unsigned long)(ptr); \
{
copy_from_user(to, from, size);
copy_from_user_fixup(to, from, size);
}
