/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/vfio/vfio_iommu_spapr_tce.c
static long tce_iommu_ioctl(void *iommu_data,
{
default:
copy_from_user(&info, (void __user *)arg, minsz))
copy_from_user(&param, (void __user *)arg, minsz))
copy_from_user(&param, (void __user *)arg, minsz))
copy_from_user(&param, (void __user *)arg, minsz))
copy_from_user(&param, (void __user *)arg, minsz))
case VFIO_IOMMU_DISABLE:
copy_from_user(&create, (void __user *)arg, minsz))
copy_from_user(&remove, (void __user *)arg, minsz))
}
