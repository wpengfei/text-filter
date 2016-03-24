/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/scsi_ioctl.c
int scsi_ioctl_send_command(struct scsi_device *sdev,
{
get_user(inlen, &sic->inlen))
get_user(outlen, &sic->outlen))
get_user(opcode, cmd_in))
copy_from_user(cmd, cmd_in, cmdlen))
copy_from_user(buf, cmd_in + cmdlen, inlen))
}
