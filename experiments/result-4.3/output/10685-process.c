/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/h8300/kernel/process.c
asmlinkage int sys_clone(unsigned long __user *args)
{
get_user(clone_flags, &args[0]);
get_user(newsp, &args[1]);
get_user(parent_tidptr, &args[2]);
get_user(child_tidptr, &args[3]);
}
