/Users/wpf/Desktop/log/test/linux-2.6.9/sound/core/control.c
static int snd_ctl_elem_add(snd_ctl_file_t *file, snd_ctl_elem_info_t __user *_info, int replace)
{
copy_from_user(&info, _info, sizeof(info)))
copy_from_user(ue->priv_data, *(char **)info.value.enumerated.name, extra_size))
}
