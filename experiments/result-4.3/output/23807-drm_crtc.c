/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/gpu/drm/drm_crtc.c
int drm_mode_gamma_set_ioctl(struct drm_device *dev,
{
copy_from_user(r_base, (void __user *)(unsigned long)crtc_lut->red, size)) {
copy_from_user(g_base, (void __user *)(unsigned long)crtc_lut->green, size)) {
copy_from_user(b_base, (void __user *)(unsigned long)crtc_lut->blue, size)) {
}
