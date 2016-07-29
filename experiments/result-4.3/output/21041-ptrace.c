/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/xtensa/kernel/ptrace.c
int ptrace_setregs(struct task_struct *child, void __user *uregs)
{
get_user(regs->pc, &gregset->pc);
get_user(ps, &gregset->ps);
get_user(regs->lbeg, &gregset->lbeg);
get_user(regs->lend, &gregset->lend);
get_user(regs->lcount, &gregset->lcount);
get_user(ws, &gregset->windowstart);
get_user(wb, &gregset->windowbase);
get_user(regs->threadptr, &gregset->threadptr);
copy_from_user(regs->areg + XCHAL_NUM_AREGS - wb * 4,
copy_from_user(regs->areg, gregset->a + wb * 4,
}
int ptrace_setxregs(struct task_struct *child, void __user *uregs)
{
copy_from_user(&ti->xtregs_cp, &xtregs->cp0,
copy_from_user(&regs->xtregs_opt, &xtregs->opt,
copy_from_user(&ti->xtregs_user, &xtregs->user,
}
