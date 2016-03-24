/Users/wpf/Desktop/log/test/linux-2.6.9/arch/um/kernel/ptrace.c
int sys_ptrace(long request, long pid, long addr, long data)
{
get_user(tmp, (unsigned long *) data);
copy_from_user(&ldt, (unsigned long *) data, 
}
