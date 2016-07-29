/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/misc/mic/host/mic_virtio.c
static int mic_virtio_copy_from_user(struct mic_vdev *mvdev, void __user *ubuf,
{
copy_from_user(mvr->buf, ubuf, partlen)) {
copy_from_user_toio(..) if it existed.
copy_from_user((void __force *)dbuf, ubuf, len)) {
}
static int mic_copy_dp_entry(struct mic_vdev *mvdev,
{
copy_from_user(&dd, argp, sizeof(dd))) {
copy_from_user(dd_config, argp, mic_desc_size(&dd))) {
}
