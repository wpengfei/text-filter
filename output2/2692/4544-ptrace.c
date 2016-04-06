/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/arch/sparc64/kernel/ptrace.c
asmlinkage void do_ptrace(struct pt_regs *regs)
{
case PTRACE_POKETEXT: /* write the word at location addr. */
copy_from_user(fpregs, &fps->regs[0],
copy_from_user(fpregs, &fps->regs[0],
}
