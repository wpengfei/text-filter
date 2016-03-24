/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc64/kernel/ptrace32.c

int sys32_ptrace(long request, long pid, unsigned long addr, unsigned long data)
{
get_user(addrOthers, (u32 __user * __user *)addr) != 0)
get_user(addrOthers, (u32 __user * __user *)addr) != 0)
get_user(*reg, tmp);
get_user(*reg, tmp);
}
