/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/media/sn9c102_core.c
static int sn9c102_v4l2_ioctl(struct inode* inode, struct file* filp,
{
copy_from_user(&i, arg, sizeof(i)))
copy_from_user(&index, arg, sizeof(index)))
copy_from_user(&qc, arg, sizeof(qc)))
copy_from_user(&ctrl, arg, sizeof(ctrl)))
copy_from_user(&ctrl, arg, sizeof(ctrl)))
copy_from_user(&crop, arg, sizeof(crop)))
copy_from_user(&fmtd, arg, sizeof(fmtd)))
copy_from_user(&format, arg, sizeof(format)))
copy_from_user(&format, arg, sizeof(format)))
copy_from_user(&rb, arg, sizeof(rb)))
copy_from_user(&b, arg, sizeof(b)))
copy_from_user(&b, arg, sizeof(b)))
copy_from_user(&b, arg, sizeof(b)))
copy_from_user(&type, arg, sizeof(type)))
copy_from_user(&type, arg, sizeof(type)))
}
