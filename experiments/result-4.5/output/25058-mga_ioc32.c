/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/mga/mga_ioc32.c
static int compat_mga_dma_bootstrap(struct file *file, unsigned int cmd,
{
copy_from_user(&dma_bootstrap32, (void __user *)arg,
get_user(dma_bootstrap32.texture_handle,
get_user(dma_bootstrap32.texture_size,
get_user(dma_bootstrap32.primary_size,
get_user(dma_bootstrap32.secondary_bin_count,
get_user(dma_bootstrap32.secondary_bin_size,
get_user(dma_bootstrap32.agp_mode, &dma_bootstrap->agp_mode)
get_user(dma_bootstrap32.agp_size, &dma_bootstrap->agp_size))
}
