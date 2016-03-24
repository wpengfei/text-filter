/Users/wpf/Desktop/log/test/linux-2.6.9/arch/m32r/kernel/ptrace.c
static int ptrace_setregs(struct task_struct *tsk, void __user *uregs)
{
copy_from_user(&newregs, uregs, sizeof(struct pt_regs)) == 0) {
get_user_regs(tsk);
}
