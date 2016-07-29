/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/fs/fhandle.c
static int handle_to_path(int mountdirfd, struct file_handle __user *ufh,
{
copy_from_user(&f_handle, ufh, sizeof(struct file_handle))) {
copy_from_user(&handle->f_handle,
}
