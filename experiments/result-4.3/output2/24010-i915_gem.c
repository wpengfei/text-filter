/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/gpu/drm/i915/i915_gem.c
static int
{
copy_from_user_inatomic_nocache(vaddr, user_data, args->size)) {
copy_from_user(vaddr, user_data, args->size);
}
