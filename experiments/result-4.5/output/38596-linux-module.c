/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/staging/lustre/lustre/obdclass/linux/linux-module.c
int obd_ioctl_getdata(char **buf, int *len, void *arg)
{
copy_from_user(&hdr, (void *)arg, sizeof(hdr)))
copy_from_user(*buf, (void *)arg, hdr.ioc_len)) {
}
