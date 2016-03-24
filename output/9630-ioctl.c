/Users/wpf/Desktop/log/test/linux-2.6.9/fs/ncpfs/ioctl.c
int ncp_ioctl(struct inode *inode, struct file *filp,
{
copy_from_user(&request, argp, sizeof(request)))
copy_from_user(bouncebuffer, request.data, request.size)) {
copy_from_user(&sr, argp, sizeof(sr)))
copy_from_user(&sign, argp, sizeof(sign)))
get_user(newstate, (unsigned char __user *)argp))
copy_from_user(&rqdata, argp, sizeof(rqdata)))
copy_from_user(&user, argp, sizeof(user)))
copy_from_user(&user, argp, sizeof(user)))
copy_from_user(newname, user.object_name, user.object_name_len)) {
copy_from_user(&user, argp, sizeof(user)))
copy_from_user(&user, argp, sizeof(user)))
copy_from_user(new, user.data, user.len)) {
copy_from_user(&user, argp, sizeof(user)))
}
