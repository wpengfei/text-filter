/Users/wpf/Desktop/log/test/linux-2.6.9/arch/arm26/kernel/signal.c
asmlinkage int 
{
get_user(new_ka.sa.sa_handler, &act->sa_handler) ||
get_user(new_ka.sa.sa_restorer, &act->sa_restorer))
get_user(new_ka.sa.sa_flags, &act->sa_flags);
get_user(mask, &act->sa_mask);
}
static int
{
get_user_error(regs->ARM_r0, &sc->arm_r0, err);
get_user_error(regs->ARM_r1, &sc->arm_r1, err);
get_user_error(regs->ARM_r2, &sc->arm_r2, err);
get_user_error(regs->ARM_r3, &sc->arm_r3, err);
get_user_error(regs->ARM_r4, &sc->arm_r4, err);
get_user_error(regs->ARM_r5, &sc->arm_r5, err);
get_user_error(regs->ARM_r6, &sc->arm_r6, err);
get_user_error(regs->ARM_r7, &sc->arm_r7, err);
get_user_error(regs->ARM_r8, &sc->arm_r8, err);
get_user_error(regs->ARM_r9, &sc->arm_r9, err);
get_user_error(regs->ARM_r10, &sc->arm_r10, err);
get_user_error(regs->ARM_fp, &sc->arm_fp, err);
get_user_error(regs->ARM_ip, &sc->arm_ip, err);
get_user_error(regs->ARM_sp, &sc->arm_sp, err);
get_user_error(regs->ARM_lr, &sc->arm_lr, err);
get_user_error(regs->ARM_pc, &sc->arm_pc, err);
}
asmlinkage int sys_sigreturn(struct pt_regs *regs)
{
get_user(set.sig[0], &frame->sc.oldmask)
copy_from_user(&set.sig[1], &frame->extramask,
}
