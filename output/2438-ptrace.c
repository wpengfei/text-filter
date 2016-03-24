/Users/wpf/Desktop/log/test/linux-2.6.9/arch/m68knommu/kernel/ptrace.c
asmlinkage int sys_ptrace(long request, long pid, long addr, long data)
{
get_user(tmp, (unsigned long *) data)) {
copy_from_user(&child->thread.fp, (void *)data,
}
