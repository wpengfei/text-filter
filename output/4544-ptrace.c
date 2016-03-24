/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/ptrace.c
asmlinkage void do_ptrace(struct pt_regs *regs)
{
get_user(psr, (&pregs->psr)) ||
get_user(pc, (&pregs->pc)) ||
get_user(npc, (&pregs->npc)) ||
get_user(y, (&pregs->y))) {
get_user(cregs->u_regs[i], (&pregs->u_regs[i-1]))) {
get_user(tstate, (&pregs->tstate)) ||
get_user(tpc, (&pregs->tpc)) ||
get_user(tnpc, (&pregs->tnpc)) ||
get_user(y, (&pregs->y))) {
get_user(cregs->u_regs[i], (&pregs->u_regs[i-1]))) {
copy_from_user(fpregs, &fps->regs[0],
get_user(fsr, (&fps->fsr))) {
copy_from_user(fpregs, &fps->regs[0],
get_user(child->thread_info->xfsr[0], (&fps->fsr))) {
}
