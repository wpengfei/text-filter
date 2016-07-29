/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/arm/kernel/traps.c
static void dump_mem(const char *lvl, const char *str, unsigned long bottom,
{
get_user
case the backtrace kills us.
get_user(val, (unsigned long *)p) == 0)
}
static void dump_instr(const char *lvl, struct pt_regs *regs)
{
get_user
case the backtrace kills us.
get_user(val, &((u16 *)addr)[i]);
get_user(val, &((u32 *)addr)[i]);
}
asmlinkage void __exception do_undefinstr(struct pt_regs *regs)
{
get_user(instr, (u16 __user *)pc))
get_user(instr2, (u16 __user *)pc+1))
get_user(instr, (u32 __user *)pc))
}
