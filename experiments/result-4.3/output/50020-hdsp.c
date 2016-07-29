/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/sound/pci/rme9652/hdsp.c
static int snd_hdsp_hwdep_ioctl(struct snd_hwdep *hw, struct file *file, unsigned int cmd, unsigned long arg)
{
case SNDRV_HDSP_IOCTL_UPLOAD_FIRMWARE: {
get_user(firmware_data, &firmware->firmware_data))
copy_from_user(hdsp->fw_uploaded, firmware_data,
}
