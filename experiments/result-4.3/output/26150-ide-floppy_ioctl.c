/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/ide/ide-floppy_ioctl.c
static int ide_floppy_format_unit(ide_drive_t *drive, struct ide_atapi_pc *pc,
{
get_user(blocks, arg) ||
get_user(length, arg+1) ||
get_user(flags, arg+2)) {
}
