/Users/wpf/Desktop/log/test/linux-2.6.9/fs/namespace.c
int copy_mount_options(const void __user *data, unsigned long *where)
{
copy_from_user cannot cross TASK_SIZE ! */
copy_from_user((void *)page, data, size);
}
