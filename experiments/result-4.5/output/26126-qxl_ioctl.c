/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/gpu/drm/qxl/qxl_ioctl.c
static int qxl_process_single_command(struct qxl_device *qdev,
{
default:
copy_from_user_inatomic_nocache(fb_cmd + sizeof(union qxl_release_info) + (release->release_offset & ~PAGE_SIZE), (void *)(unsigned long)cmd->command, cmd->command_size);
copy_from_user(&reloc,
}
