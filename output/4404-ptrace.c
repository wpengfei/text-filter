/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc/kernel/ptrace.c
asmlinkage void do_ptrace(struct pt_regs *regs)
{
get_user(psr, (&pregs->psr));
get_user(pc, (&pregs->pc));
get_user(npc, (&pregs->npc));
get_user(y, (&pregs->y));
get_user(cregs->u_regs[i], (&pregs->u_regs[i-1]));
copy_from_user(&child->thread.float_regs[0], &fps->regs[0], (32 * sizeof(unsigned long)));
get_user(child->thread.fsr, (&fps->fsr));
get_user(child->thread.fpqdepth, (&fps->fpqd));
get_user(child->thread.fpqueue[i].insn_addr,
get_user(child->thread.fpqueue[i].insn, (&fps->fpq[i].insn));
}
