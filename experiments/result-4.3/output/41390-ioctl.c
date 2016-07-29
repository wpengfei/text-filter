/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/fs/ncpfs/ioctl.c
static long __ncp_ioctl(struct inode *inode, unsigned int cmd, unsigned long arg)
{
case NCP_IOC_NCPREQUEST:
copy_from_user(&request32, argp, sizeof(request32)))
copy_from_user(&request, argp, sizeof(request)))
copy_from_user(bouncebuffer, request.data, request.size)) {
case NCP_IOC_SETOBJECTNAME:
copy_from_user(&user32, argp, sizeof(user32)))
copy_from_user(&user, argp, sizeof(user)))
case NCP_IOC_GETPRIVATEDATA:
copy_from_user(&user32, argp, sizeof(user32)))
copy_from_user(&user, argp, sizeof(user)))
case NCP_IOC_SETPRIVATEDATA:
copy_from_user(&user32, argp, sizeof(user32)))
copy_from_user(&user, argp, sizeof(user)))
}
