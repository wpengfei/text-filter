/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/include/asm/uaccess_64.h
int __copy_from_user_nocheck(void *dst, const void __user *src, unsigned size)
{
get_user_asm(*(u8 *)dst, (u8 __user *)src,
get_user_asm(*(u16 *)dst, (u16 __user *)src,
get_user_asm(*(u32 *)dst, (u32 __user *)src,
get_user_asm(*(u64 *)dst, (u64 __user *)src,
case 10:
get_user_asm(*(u64 *)dst, (u64 __user *)src,
get_user_asm(*(u16 *)(8 + (char *)dst),
case 16:
get_user_asm(*(u64 *)dst, (u64 __user *)src,
get_user_asm(*(u64 *)(8 + (char *)dst),
}
