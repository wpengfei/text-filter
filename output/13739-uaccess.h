/Users/wpf/Desktop/log/test/linux-2.6.9/include/asm-x86_64/uaccess.h
static inline int __copy_from_user(void *dst, const void __user *src, unsigned size) 
{
get_user_asm(*(u8*)dst,(u8 __user *)src,ret,"b","b","=q",1); 
get_user_asm(*(u16*)dst,(u16 __user *)src,ret,"w","w","=r",2);
get_user_asm(*(u32*)dst,(u32 __user *)src,ret,"l","k","=r",4);
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",8);
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",16);
get_user_asm(*(u16*)(8+(char*)dst),(u16 __user *)(8+(char __user *)src),ret,"w","w","=r",2);
get_user_asm(*(u64*)dst,(u64 __user *)src,ret,"q","","=r",16);
get_user_asm(*(u64*)(8+(char*)dst),(u64 __user *)(8+(char __user *)src),ret,"q","","=r",8);
}	
static inline int __copy_in_user(void __user *dst, const void __user *src, unsigned size) 
{
get_user_asm(tmp,(u8 __user *)src,ret,"b","b","=q",1); 
get_user_asm(tmp,(u16 __user *)src,ret,"w","w","=r",2); 
get_user_asm(tmp,(u32 __user *)src,ret,"l","k","=r",4); 
get_user_asm(tmp,(u64 __user *)src,ret,"q","","=r",8); 
}	
