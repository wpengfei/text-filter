/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/arm64/kernel/signal.c
static int restore_fpsimd_context(struct fpsimd_context __user *ctx)
{
get_user_error(magic, &ctx->head.magic, err);
get_user_error(size, &ctx->head.size, err);
copy_from_user(fpsimd.vregs, ctx->vregs,
get_user_error(fpsimd.fpsr, &ctx->fpsr, err);
get_user_error(fpsimd.fpcr, &ctx->fpcr, err);
}
static int restore_sigframe(struct pt_regs *regs,
{
copy_from_user(&set, &sf->uc.uc_sigmask, sizeof(set));
get_user_error(regs->regs[i], &sf->uc.uc_mcontext.regs[i],
get_user_error(regs->sp, &sf->uc.uc_mcontext.sp, err);
get_user_error(regs->pc, &sf->uc.uc_mcontext.pc, err);
get_user_error(regs->pstate, &sf->uc.uc_mcontext.pstate, err);
}
