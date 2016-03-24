/Users/wpf/Desktop/log/test/linux-2.6.9/arch/i386/kernel/traps.c
static void handle_BUG(struct pt_regs *regs)
{
get_user(ud2, (unsigned short *)eip))
get_user(line, (unsigned short *)(eip + 2)))
get_user(file, (char **)(eip + 4)) ||
get_user(c, file))
}
