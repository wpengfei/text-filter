/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/sparc/kernel/sigutil_32.c
int restore_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu)
{
copy_from_user(&current->thread.float_regs[0], &fpu->si_float_regs[0],
get_user(current->thread.fsr, &fpu->si_fsr);
get_user(current->thread.fpqdepth, &fpu->si_fpqdepth);
copy_from_user(&current->thread.fpqueue[0],
}
int restore_rwin_state(__siginfo_rwin_t __user *rp)
{
get_user(wsaved, &rp->wsaved);
copy_from_user(&t->reg_window[i],
get_user(t->rwbuf_stkptrs[i],
}
