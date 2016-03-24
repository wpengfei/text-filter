/Users/wpf/Desktop/log/test/linux-2.6.9/arch/um/sys-i386/ptrace.c
static inline int convert_fxsr_from_user_tt(struct pt_regs *regs,
{
copy_from_user( env, buf, 7 * sizeof(long) ) )
copy_from_user( to, from, sizeof(*from) ) )
}
