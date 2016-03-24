/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/binfmt_aout32.c

static u32 __user *create_aout32_tables(char __user *p, struct linux_binprm *bprm)
{
get_user(c,p++);
get_user(c,p++);
}
