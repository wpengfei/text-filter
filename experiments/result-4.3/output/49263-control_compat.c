/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/sound/core/control_compat.c
static int snd_ctl_elem_info_compat(struct snd_ctl_file *ctl,
{
copy_from_user(&data->id, &data32->id, sizeof(data->id)))
get_user(data->value.enumerated.item, &data32->value.enumerated.item))
}
static int copy_ctl_value_from_user(struct snd_card *card,
{
copy_from_user(&data->id, &data32->id, sizeof(data->id)))
get_user(indirect, &data32->indirect))
get_user(val, &data32->value.integer[i]))
copy_from_user(data->value.bytes.data,
}
static int snd_ctl_elem_add_compat(struct snd_ctl_file *file,
{
copy_from_user(&data->id, &data32->id, sizeof(data->id)) ||
copy_from_user(&data->type, &data32->type, 3 * sizeof(u32)))
get_user(data->owner, &data32->owner) ||
get_user(data->type, &data32->type))
case SNDRV_CTL_ELEM_TYPE_INTEGER:
get_user(data->value.integer.min, &data32->value.integer.min) ||
get_user(data->value.integer.max, &data32->value.integer.max) ||
get_user(data->value.integer.step, &data32->value.integer.step))
case SNDRV_CTL_ELEM_TYPE_INTEGER64:
copy_from_user(&data->value.integer64,
case SNDRV_CTL_ELEM_TYPE_ENUMERATED:
copy_from_user(&data->value.enumerated,
}
