/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/fs/namespace.c
int copy_mount_options(const void __user * data, unsigned long *where)
{
case, we'll zero
copy_from_user cannot cross TASK_SIZE ! */
copy_from_user((void *)page, data, size);
}
