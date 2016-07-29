/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/vfio/vfio_iommu_type1.c
static long vfio_iommu_type1_ioctl(void *iommu_data,
{
default:
copy_from_user(&info, (void __user *)arg, minsz))
copy_from_user(&map, (void __user *)arg, minsz))
copy_from_user(&unmap, (void __user *)arg, minsz))
}
