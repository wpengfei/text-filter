/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/include/asm/uaccess_32.h
static __always_inline unsigned long
{
case 4:
get_user_size(*(u32 *)to, from, 4, ret, 4);
copy_from_user_ll_nozero(to, from, n);
}
static __always_inline unsigned long
{
case 4:
get_user_size(*(u32 *)to, from, 4, ret, 4);
copy_from_user_ll(to, from, n);
}
static __always_inline unsigned long __copy_from_user_nocache(void *to,
{
case 4:
get_user_size(*(u32 *)to, from, 4, ret, 4);
copy_from_user_ll_nocache(to, from, n);
}
