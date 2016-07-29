/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/core/pcm.c
static int snd_pcm_control_ioctl(struct snd_card *card,
{
case SNDRV_CTL_IOCTL_PCM_INFO:
get_user(device, &info->device))
get_user(stream, &info->stream))
get_user(subdevice, &info->subdevice))
}
