/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/vfio/pci/vfio_pci_rdwr.c
static ssize_t do_io_rw(void __iomem *io, char __user *buf,
{
copy_from_user(&val, buf, 4))
copy_from_user(&val, buf, 2))
copy_from_user(&val, buf, 1))
}
