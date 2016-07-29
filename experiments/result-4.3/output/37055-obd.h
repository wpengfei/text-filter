/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/lustre/lustre/include/obd.h
static inline int lov_lum_swab_if_needed(struct lov_user_md_v3 *lumv3,
{
copy_from_user(lumv3, lum, sizeof(struct lov_user_md_v1)))
copy_from_user(lumv3, lum, sizeof(*lumv3)))
copy_from_user(lumv3, lum, sizeof(*lumv3)))
}
