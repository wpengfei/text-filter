/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/input/misc/uinput.c
static int uinput_ff_upload_from_user(const char __user *buffer,
{
copy_from_user(&ff_up_compat, buffer,
copy_from_user(ff_up, buffer,
}
