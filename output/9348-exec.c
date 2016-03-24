/Users/wpf/Desktop/log/test/linux-2.6.9/fs/exec.c
int copy_strings(int argc,char __user * __user * argv, struct linux_binprm *bprm)
{
get_user(str, argv+argc) ||
copy_from_user(kaddr+offset, str, bytes_to_copy);
}
