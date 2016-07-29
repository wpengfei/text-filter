/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/sparc/kernel/ptrace_64.c
static int genregs32_get(struct task_struct *target,
{
get_user(*k++, &reg_window[pos++]))
get_user(reg, &reg_window[pos++]) ||
}
static int genregs32_set(struct task_struct *target,
{
get_user(reg, u++))
get_user(reg, u++) ||
get_user(reg, u++))
}
