/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/block/scsi_ioctl.c
static int sg_scsi_ioctl(struct file *file, request_queue_t *q,
{
get_user(in_len, &sic->inlen))
get_user(out_len, &sic->outlen))
get_user(opcode, sic->data))
copy_from_user(rq->cmd, sic->data, cmdlen))
copy_from_user(buffer, sic->data + cmdlen, in_len))
}
int scsi_cmd_ioctl(struct file *file, struct gendisk *bd_disk, unsigned int cmd, void __user *arg)
{
copy_from_user(&hdr, arg, sizeof(hdr)))
copy_from_user(&cgc, arg, sizeof(cgc)))
}
