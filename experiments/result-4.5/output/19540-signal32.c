/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sparc/kernel/signal32.c
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
{
copy_from_user(to, from, 3*sizeof(int)) ||
copy_from_user(to->_sifields._pad, from->_sifields._pad,
}
void do_sigreturn32(struct pt_regs *regs)
{
get_user(pc, &sf->info.si_regs.pc) ||
get_user(npc, &sf->info.si_regs.npc))
get_user(regs->y, &sf->info.si_regs.y);
get_user(psr, &sf->info.si_regs.psr);
get_user(regs->u_regs[i], &sf->info.si_regs.u_regs[i]);
get_user(i, &sf->v8plus.g_upper[0]);
get_user(((u32 *)regs->u_regs)[2*i], &sf->v8plus.g_upper[i]);
get_user(asi, &sf->v8plus.asi);
get_user(fpu_save, &sf->fpu_save);
get_user(rwin_save, &sf->rwin_save);
get_user(seta.sig[0], &sf->info.si_mask);
copy_from_user(&seta.sig[1], &sf->extramask,
}
asmlinkage void do_rt_sigreturn32(struct pt_regs *regs)
{
get_user(pc, &sf->regs.pc) || 
get_user(npc, &sf->regs.npc))
get_user(regs->y, &sf->regs.y);
get_user(psr, &sf->regs.psr);
get_user(regs->u_regs[i], &sf->regs.u_regs[i]);
get_user(i, &sf->v8plus.g_upper[0]);
get_user(((u32 *)regs->u_regs)[2*i], &sf->v8plus.g_upper[i]);
get_user(asi, &sf->v8plus.asi);
get_user(fpu_save, &sf->fpu_save);
copy_from_user(&seta, &sf->mask, sizeof(compat_sigset_t));
get_user(rwin_save, &sf->rwin_save);
}
