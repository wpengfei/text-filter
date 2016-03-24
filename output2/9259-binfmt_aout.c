/Users/wpf/Desktop/log/test/linux-2.6.9/fs/binfmt_aout.c

static unsigned long __user *create_aout_tables(char __user *p, struct linux_binprm * bprm)
{
get_user(c,p++);
get_user(c,p++);
}
