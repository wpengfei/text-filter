/Users/wpf/Desktop/log/test/linux-2.6.9/arch/arm/kernel/traps.c
static void dump_mem(const char *str, unsigned long bottom, unsigned long top)
{
get_user
get_user(val, (unsigned long *)p);
}
static void dump_instr(struct pt_regs *regs)
{
get_user
get_user(val, &((u16 *)addr)[i]);
get_user(val, &((u32 *)addr)[i]);
}
asmlinkage void do_undefinstr(struct pt_regs *regs)
{
get_user(instr, (u16 __user *)pc);
get_user(instr, (u32 __user *)pc);
}
