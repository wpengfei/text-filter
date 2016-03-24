/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/solaris/ioctl.c

static inline int solaris_timod(unsigned int fd, unsigned int cmd, u32 arg,
{
get_user(prim, (u32 __user *)A(arg)))
get_user(tmp2, (u32 __user *)A(arg)+2))
get_user(prim, (u32 __user *)A(arg)))
get_user(tmp2, (u32 __user *)A(arg)+2))
get_user(tmp, (u32 __user *)A(arg)+3) ||
get_user(tmp, (u32 __user *)A(arg)+3) ||
get_user(tmp2, (u32 __user *)A(arg)+2))
get_user(prim, (u32 __user *)A(arg)))
get_user(tmp2, (u32 __user *)A(arg)+2))
get_user(prim, (u32 __user *)A(arg)))
get_user(tmp2, (u32 __user *)A(arg)+2))
}
