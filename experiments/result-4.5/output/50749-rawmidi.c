/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/core/rawmidi.c
static int snd_rawmidi_info_select_user(struct snd_card *card,
{
get_user(info.device, &_info->device))
get_user(info.stream, &_info->stream))
get_user(info.subdevice, &_info->subdevice))
}
