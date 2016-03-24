/Users/wpf/Desktop/log/test/linux-2.6.9/include/asm-x86_64/uaccess.h

static inline int __copy_from_user(void *dst, const void __user *src, unsigned size) 
{
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",8);
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",16);
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",16);
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",16);
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",16);
}
