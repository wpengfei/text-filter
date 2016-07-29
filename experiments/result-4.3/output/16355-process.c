/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/powerpc/kernel/process.c
void start_thread(struct pt_regs *regs, unsigned long start, unsigned long sp)
{
get_user(entry, (unsigned long __user *)start);
get_user(toc, (unsigned long __user *)start+1);
}
