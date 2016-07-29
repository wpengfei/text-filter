/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/block/scsi_ioctl.c
int sg_scsi_ioctl(struct request_queue *q, struct gendisk *disk, fmode_t mode,
{
get_user(in_len, &sic->inlen))
get_user(out_len, &sic->outlen))
get_user(opcode, sic->data))
copy_from_user(rq->cmd, sic->data, cmdlen))
copy_from_user(buffer, sic->data + cmdlen, in_len))
}
