/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/arm64/kernel/signal32.c
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
{
copy_from_user(to, from, __ARCH_SI_PREAMBLE_SIZE) ||
copy_from_user(to->_sifields._pad,
}
static int compat_restore_vfp_context(struct compat_vfp_sigframe __user *frame)
{
get_user_error(magic, &frame->magic, err);
get_user_error(size, &frame->size, err);
get_user_error(vreg.lo, &frame->ufp.fpregs[i], err);
get_user_error(vreg.hi, &frame->ufp.fpregs[i + 1], err);
get_user_error(fpscr, &frame->ufp.fpscr, err);
}
static int compat_restore_sigframe(struct pt_regs *regs,
{
get_user_error(regs->regs[0], &sf->uc.uc_mcontext.arm_r0, err);
get_user_error(regs->regs[1], &sf->uc.uc_mcontext.arm_r1, err);
get_user_error(regs->regs[2], &sf->uc.uc_mcontext.arm_r2, err);
get_user_error(regs->regs[3], &sf->uc.uc_mcontext.arm_r3, err);
get_user_error(regs->regs[4], &sf->uc.uc_mcontext.arm_r4, err);
get_user_error(regs->regs[5], &sf->uc.uc_mcontext.arm_r5, err);
get_user_error(regs->regs[6], &sf->uc.uc_mcontext.arm_r6, err);
get_user_error(regs->regs[7], &sf->uc.uc_mcontext.arm_r7, err);
get_user_error(regs->regs[8], &sf->uc.uc_mcontext.arm_r8, err);
get_user_error(regs->regs[9], &sf->uc.uc_mcontext.arm_r9, err);
get_user_error(regs->regs[10], &sf->uc.uc_mcontext.arm_r10, err);
get_user_error(regs->regs[11], &sf->uc.uc_mcontext.arm_fp, err);
get_user_error(regs->regs[12], &sf->uc.uc_mcontext.arm_ip, err);
get_user_error(regs->compat_sp, &sf->uc.uc_mcontext.arm_sp, err);
get_user_error(regs->compat_lr, &sf->uc.uc_mcontext.arm_lr, err);
get_user_error(regs->pc, &sf->uc.uc_mcontext.arm_pc, err);
get_user_error(regs->pstate, &sf->uc.uc_mcontext.arm_cpsr, err);
}
