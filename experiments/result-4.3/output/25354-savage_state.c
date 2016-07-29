/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/gpu/drm/savage/savage_state.c
int savage_bci_cmdbuf(struct drm_device *dev, void *data, struct drm_file *file_priv)
{
copy_from_user(kcmd_addr, cmdbuf->cmd_addr,
copy_from_user(kvb_addr, cmdbuf->vb_addr,
copy_from_user(kbox_addr, cmdbuf->box_addr,
}
