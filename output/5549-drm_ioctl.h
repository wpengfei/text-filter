/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/drm/drm_ioctl.h
int DRM(setunique)(struct inode *inode, struct file *filp,
{
copy_from_user(&u, (drm_unique_t __user *)arg, sizeof(u)))
copy_from_user(dev->unique, u.unique, dev->unique_len))
}
