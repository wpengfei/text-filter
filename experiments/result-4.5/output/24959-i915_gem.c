/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/i915/i915_gem.c
static int
{
copy_from_user_inatomic_nocache(vaddr, user_data, args->size)) {
copy_from_user(vaddr, user_data, args->size);
}
static int
{
copy_from_user_swizzled(vaddr, shmem_page_offset,
copy_from_user(vaddr + shmem_page_offset,
}
