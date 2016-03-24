/Users/wpf/Desktop/log/test/linux-2.6.9/arch/ppc64/kernel/process.c
void start_thread(struct pt_regs *regs, unsigned long fdptr, unsigned long sp)
{
get_user(entry, (unsigned long __user *)fdptr);
get_user(toc, (unsigned long __user *)fdptr+1);
}
