/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/cpqfcTSinit.c
int cpqfcTS_ioctl( struct scsi_device *ScsiDev, int Cmnd, void *arg)
{
copy_from_user( &ioc, arg, sizeof( VENDOR_IOCTL_REQ)))
copy_from_user(buf, vendor_cmd->bufp, 
}
