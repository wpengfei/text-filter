/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/drm_atomic.c
int drm_mode_atomic_ioctl(struct drm_device *dev,
{
get_user(obj_id, objs_ptr + copied_objs)) {
get_user(count_props, count_props_ptr + copied_objs)) {
get_user(prop_id, props_ptr + copied_props)) {
copy_from_user(&prop_value,
}
