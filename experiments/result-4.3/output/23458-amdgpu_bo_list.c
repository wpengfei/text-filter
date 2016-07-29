/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/gpu/drm/amd/amdgpu/amdgpu_bo_list.c
int amdgpu_bo_list_ioctl(struct drm_device *dev, void *data,
{
copy_from_user(info, uptr, bytes))
copy_from_user(&info[i], uptr, bytes))
}
