/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sparc/kernel/signal_32.c
asmlinkage void do_sigreturn(struct pt_regs *regs)
{
get_user(pc,  &sf->info.si_regs.pc);
get_user(npc, &sf->info.si_regs.npc);
copy_from_user(regs, &sf->info.si_regs, sizeof(struct pt_regs));
get_user(fpu_save, &sf->fpu_save);
get_user(rwin_save, &sf->rwin_save);
get_user(set.sig[0], &sf->info.si_mask);
copy_from_user(&set.sig[1], &sf->extramask,
}
asmlinkage void do_rt_sigreturn(struct pt_regs *regs)
{
get_user(pc, &sf->regs.pc);
get_user(npc, &sf->regs.npc);
get_user(regs->y, &sf->regs.y);
get_user(psr, &sf->regs.psr);
copy_from_user(&regs->u_regs[UREG_G1],
get_user(fpu_save, &sf->fpu_save);
copy_from_user(&set, &sf->mask, sizeof(sigset_t));
get_user(rwin_save, &sf->rwin_save);
}
