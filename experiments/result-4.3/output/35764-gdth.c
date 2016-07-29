/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/scsi/gdth.c
static int ioc_general(void __user *arg, char *cmnd)
{
copy_from_user(&gen, arg, sizeof(gdth_ioctl_general)))
copy_from_user(buf, arg + sizeof(gdth_ioctl_general),  
}
