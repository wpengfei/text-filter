/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/media/pci/ddbridge/ddbridge-core.c
static long ddb_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
case IOCTL_DDB_FLASHIO:
copy_from_user(&fio, parg, sizeof(fio)))
copy_from_user(wbuf, fio.write_buf, fio.write_len))
}
