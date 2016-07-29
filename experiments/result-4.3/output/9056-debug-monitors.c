/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/arm64/kernel/debug-monitors.c
int aarch32_break_handler(struct pt_regs *regs)
{
get_user(thumb_instr, (u16 __user *)pc);
get_user(thumb_instr, (u16 __user *)(pc + 2));
get_user(arm_instr, (u32 __user *)pc);
}
