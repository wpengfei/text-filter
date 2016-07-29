/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/um/ptrace_32.c
int is_syscall(unsigned long addr)
{
copy_from_user(&instr, (void __user *) addr, sizeof(instr));
copy_from_user doesn't. Maybe access_process_vm is
copy_from_user failed.
}
