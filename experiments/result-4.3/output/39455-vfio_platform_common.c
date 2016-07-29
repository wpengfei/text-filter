/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/vfio/platform/vfio_platform_common.c
static long vfio_platform_ioctl(void *device_data,
{
copy_from_user(&info, (void __user *)arg, minsz))
copy_from_user(&info, (void __user *)arg, minsz))
copy_from_user(&info, (void __user *)arg, minsz))
copy_from_user(&hdr, (void __user *)arg, minsz))
}
static ssize_t vfio_platform_write_mmio(struct vfio_platform_region reg,
{
copy_from_user(&val, buf, 4))
copy_from_user(&val, buf, 2))
copy_from_user(&val, buf, 1))
}
