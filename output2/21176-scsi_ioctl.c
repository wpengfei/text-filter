/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/block/scsi_ioctl.c
int scsi_cmd_ioctl(struct request_queue *q, struct gendisk *bd_disk, fmode_t mode,
{
case SG_EMULATED_HOST:
copy_from_user(&hdr, arg, sizeof(hdr)))
copy_from_user(&cgc, arg, sizeof(cgc)))
}
