/Users/wpf/Desktop/log/test/linux-2.6.9/include/asm-ppc64/uaccess.h
static inline unsigned long
{
get_user_size(*(u8 *)to, from, 1, ret, 1);
get_user_size(*(u16 *)to, from, 2, ret, 2);
get_user_size(*(u32 *)to, from, 4, ret, 4);
get_user_size(*(u64 *)to, from, 8, ret, 8);
}
