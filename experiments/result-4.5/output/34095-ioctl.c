/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/net/wireless/ath/wil6210/ioctl.c
static int wil_ioc_memio_block(struct wil6210_priv *wil, void __user *data)
{
copy_from_user(&io, data, sizeof(io)))
case wil_mmio_write:
copy_from_user(block, io.block, io.size)) {
}
