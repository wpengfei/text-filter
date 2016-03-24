/Users/wpf/Desktop/log/test/linux-2.6.9/fs/open.c
asmlinkage long sys_utime(char __user * filename, struct utimbuf __user * times)
{
get_user(newattrs.ia_atime.tv_sec, &times->actime);
get_user(newattrs.ia_mtime.tv_sec, &times->modtime);
}
