/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/drivers/block/scsi_ioctl.c
int scsi_cmd_ioctl(struct file *file, struct gendisk *bd_disk, unsigned int cmd, void __user *arg)
{
case SG_EMULATED_HOST:
copy_from_user(&hdr, arg, sizeof(hdr)))
copy_from_user(&cgc, arg, sizeof(cgc)))
}