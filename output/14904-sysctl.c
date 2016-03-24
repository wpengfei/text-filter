/Users/wpf/Desktop/log/test/linux-2.6.9/kernel/sysctl.c
int do_sysctl_strategy (ctl_table *table, 
{
get_user(len, oldlenp))
copy_from_user(table->data, newval, len))
}
int proc_dostring(ctl_table *table, int write, struct file *filp,
{
get_user(c, p++))
copy_from_user(table->data, buffer, len))
}
static int do_proc_dointvec(ctl_table *table, int write, struct file *filp,
{
get_user(c, s))
copy_from_user(buf, s, len))
get_user(c, s++))
}
static int do_proc_doulongvec_minmax(ctl_table *table, int write,
{
get_user(c, s))
copy_from_user(buf, s, len))
get_user(c, s++))
}
int sysctl_string(ctl_table *table, int __user *name, int nlen,
{
get_user(len, oldlenp))
copy_from_user(table->data, newval, len))
}
int sysctl_jiffies(ctl_table *table, int __user *name, int nlen,
{
get_user(olen, oldlenp))
get_user(new, (int __user *)newval))
}
