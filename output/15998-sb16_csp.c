/Users/wpf/Desktop/log/test/linux-2.6.9/sound/isa/sb/sb16_csp.c
static int snd_sb_csp_riff_load(snd_sb_csp_t * p, snd_sb_csp_microcode_t __user * mcode)
{
copy_from_user(&info, mcode, sizeof(info)))
copy_from_user(&file_h, data_ptr, sizeof(file_h)))
copy_from_user(&item_type, data_ptr, sizeof(item_type)))
copy_from_user(&item_h, data_ptr, sizeof(item_h)))
copy_from_user(&item_type, data_ptr, sizeof(item_type)))
copy_from_user(&funcdesc_h, data_ptr + sizeof(item_type), sizeof(funcdesc_h)))
copy_from_user(&code_h, data_ptr, sizeof(code_h)))
copy_from_user(&code_h, data_ptr, sizeof(code_h)))
}
