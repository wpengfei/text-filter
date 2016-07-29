/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/avr32/kernel/ptrace.c
static int ptrace_setregs(struct task_struct *tsk, const void __user *uregs)
{
copy_from_user(&newregs, uregs, sizeof(newregs)) == 0) {
get_user_regs(tsk);
}
