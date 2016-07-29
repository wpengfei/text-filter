/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/r128/r128_state.c
static int r128_cce_dispatch_write_span(struct drm_device *dev,
{
copy_from_user(&x, depth->x, sizeof(x)))
copy_from_user(&y, depth->y, sizeof(y)))
}
static int r128_cce_dispatch_write_pixels(struct drm_device *dev,
{
copy_from_user(x, depth->x, xbuf_size)) {
copy_from_user(y, depth->y, xbuf_size)) {
}
static int r128_cce_dispatch_read_span(struct drm_device *dev,
{
copy_from_user(&x, depth->x, sizeof(x)))
copy_from_user(&y, depth->y, sizeof(y)))
}
static int r128_cce_dispatch_read_pixels(struct drm_device *dev,
{
copy_from_user(x, depth->x, xbuf_size)) {
copy_from_user(y, depth->y, ybuf_size)) {
}
