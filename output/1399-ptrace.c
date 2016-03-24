/Users/wpf/Desktop/log/test/linux-2.6.9/arch/arm26/kernel/ptrace.c
static unsigned long
{
get_user_reg (child, insn & 15);
get_user_reg (child, (insn >> 8) & 15);
}
static int ptrace_setregs(struct task_struct *tsk, void *uregs)
{
copy_from_user(&newregs, uregs, sizeof(struct pt_regs)) == 0) {
get_user_regs(tsk);
}
