/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/staging/lustre/lnet/selftest/conctl.c
static int
{
copy_from_user(&ndent, args->lstio_grp_ndentp,
copy_from_user(&index, args->lstio_grp_idxp,
copy_from_user(name,
}
static int
{
copy_from_user(&index, args->lstio_bat_idxp,
copy_from_user(&ndent, args->lstio_bat_ndentp,
copy_from_user(name,
}
static int lst_test_add_ioctl(lstio_test_args_t *args)
{
copy_from_user(batch_name, args->lstio_tes_bat_name,
copy_from_user(src_name, args->lstio_tes_sgrp_name,
copy_from_user(dst_name, args->lstio_tes_dgrp_name,
copy_from_user(param, args->lstio_tes_param,
}
