/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/ide/ide-floppy.c
static int idefloppy_begin_format(ide_drive_t *drive, int __user *arg)
{
get_user(blocks, arg) ||
get_user(length, arg+1) ||
get_user(flags, arg+2)) {
}
