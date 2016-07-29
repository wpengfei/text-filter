/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/etnaviv/etnaviv_gem_submit.c
int etnaviv_ioctl_gem_submit(struct drm_device *dev, void *data,
{
copy_from_user(bos, to_user_ptr(args->bos),
copy_from_user(relocs, to_user_ptr(args->relocs),
copy_from_user(stream, to_user_ptr(args->stream),
}
