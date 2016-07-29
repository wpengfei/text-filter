/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sparc/kernel/sigutil_64.c
int restore_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu)
{
get_user(fprs, &fpu->si_fprs);
copy_from_user(fpregs, &fpu->si_float_regs[0],
copy_from_user(fpregs+16, &fpu->si_float_regs[32],
get_user(current_thread_info()->xfsr[0], &fpu->si_fsr);
get_user(current_thread_info()->gsr[0], &fpu->si_gsr);
}
int restore_rwin_state(__siginfo_rwin_t __user *rp)
{
get_user(wsaved, &rp->wsaved);
copy_from_user(&t->reg_window[i],
get_user(t->rwbuf_stkptrs[i],
}
