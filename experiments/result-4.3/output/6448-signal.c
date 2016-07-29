/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/arm/kernel/signal.c
static int restore_vfp_context(struct vfp_sigframe __user *frame)
{
get_user_error(magic, &frame->magic, err);
get_user_error(size, &frame->size, err);
}
static int restore_sigframe(struct pt_regs *regs, struct sigframe __user *sf)
{
copy_from_user(&set, &sf->uc.uc_sigmask, sizeof(set));
get_user_error(regs->ARM_r0, &sf->uc.uc_mcontext.arm_r0, err);
get_user_error(regs->ARM_r1, &sf->uc.uc_mcontext.arm_r1, err);
get_user_error(regs->ARM_r2, &sf->uc.uc_mcontext.arm_r2, err);
get_user_error(regs->ARM_r3, &sf->uc.uc_mcontext.arm_r3, err);
get_user_error(regs->ARM_r4, &sf->uc.uc_mcontext.arm_r4, err);
get_user_error(regs->ARM_r5, &sf->uc.uc_mcontext.arm_r5, err);
get_user_error(regs->ARM_r6, &sf->uc.uc_mcontext.arm_r6, err);
get_user_error(regs->ARM_r7, &sf->uc.uc_mcontext.arm_r7, err);
get_user_error(regs->ARM_r8, &sf->uc.uc_mcontext.arm_r8, err);
get_user_error(regs->ARM_r9, &sf->uc.uc_mcontext.arm_r9, err);
get_user_error(regs->ARM_r10, &sf->uc.uc_mcontext.arm_r10, err);
get_user_error(regs->ARM_fp, &sf->uc.uc_mcontext.arm_fp, err);
get_user_error(regs->ARM_ip, &sf->uc.uc_mcontext.arm_ip, err);
get_user_error(regs->ARM_sp, &sf->uc.uc_mcontext.arm_sp, err);
get_user_error(regs->ARM_lr, &sf->uc.uc_mcontext.arm_lr, err);
get_user_error(regs->ARM_pc, &sf->uc.uc_mcontext.arm_pc, err);
get_user_error(regs->ARM_cpsr, &sf->uc.uc_mcontext.arm_cpsr, err);
}
