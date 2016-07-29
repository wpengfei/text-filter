/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/scsi/esas2r/esas2r_ioctl.c
int esas2r_ioctl_handler(void *hostdata, int cmd, void __user *arg)
{
copy_from_user(ioctl, arg, sizeof(struct atto_express_ioctl));
copy_from_user didn't copy everything (err %d, cmd %d)",
}
