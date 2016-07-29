/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/lustre/lustre/libcfs/linux/linux-module.c
int libcfs_ioctl_getdata(char *buf, char *end, void *arg)
{
copy_from_user(buf, arg, sizeof(*hdr)))
copy_from_user(buf, arg, hdr->ioc_len))
}
