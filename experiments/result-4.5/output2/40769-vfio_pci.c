/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/vfio/pci/vfio_pci.c
static long vfio_pci_ioctl(void *device_data,
{
copy_from_user(&info, (void __user *)arg, minsz))
copy_from_user(&info, (void __user *)arg, minsz))
default:
copy_from_user(&info, (void __user *)arg, minsz))
default:
copy_from_user(&hdr, (void __user *)arg, minsz))
copy_from_user(&hdr, (void __user *)arg, minsz))
copy_from_user(&hdr, (void __user *)arg, minsz))
}
