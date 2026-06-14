#ifndef __UAPI_MSM_SDE_ROTATOR__
#define __UAPI_MSM_SDE_ROTATOR__

#include <linux/types.h>
#include <linux/videodev2.h>

/* SDE Rotator pixel format definitions. */
#define SDE_PIX_FMT_XRGB_8888		V4L2_PIX_FMT_XBGR32
#define SDE_PIX_FMT_ARGB_8888		V4L2_PIX_FMT_ABGR32
#define SDE_PIX_FMT_ABGR_8888		v4l2_fourcc('R', 'A', '2', '4')
#define SDE_PIX_FMT_RGBA_8888		v4l2_fourcc('A', 'B', '2', '4')
#define SDE_PIX_FMT_BGRA_8888		V4L2_PIX_FMT_ARGB32
#define SDE_PIX_FMT_RGBX_8888		v4l2_fourcc('X', 'B', '2', '4')
#define SDE_PIX_FMT_BGRX_8888		V4L2_PIX_FMT_XRGB32
#define SDE_PIX_FMT_RGBA_5551		v4l2_fourcc('R', 'A', '1', '5')
#define SDE_PIX_FMT_ARGB_4444		V4L2_PIX_FMT_ARGB444
#define SDE_PIX_FMT_RGBA_4444		v4l2_fourcc('R', 'A', '1', '2')
#define SDE_PIX_FMT_RGB_888		V4L2_PIX_FMT_RGB24
#define SDE_PIX_FMT_BGR_888		V4L2_PIX_FMT_BGR24
#define SDE_PIX_FMT_RGB_565		V4L2_PIX_FMT_RGB565
#define SDE_PIX_FMT_BGR_565		v4l2_fourcc('B', 'G', '1', '6')
#define SDE_PIX_FMT_Y_CB_CR_H2V2	V4L2_PIX_FMT_YUV420
#define SDE_PIX_FMT_Y_CR_CB_H2V2	V4L2_PIX_FMT_YVU420
#define SDE_PIX_FMT_Y_CR_CB_GH2V2	v4l2_fourcc('Y', 'U', '4', '2')
#define SDE_PIX_FMT_Y_CBCR_H2V2		V4L2_PIX_FMT_NV12
#define SDE_PIX_FMT_Y_CRCB_H2V2		V4L2_PIX_FMT_NV21
#define SDE_PIX_FMT_Y_CBCR_H1V2		v4l2_fourcc('N', 'H', '1', '6')
#define SDE_PIX_FMT_Y_CRCB_H1V2		v4l2_fourcc('N', 'H', '6', '1')
#define SDE_PIX_FMT_Y_CBCR_H2V1		V4L2_PIX_FMT_NV16
#define SDE_PIX_FMT_Y_CRCB_H2V1		V4L2_PIX_FMT_NV61
#define SDE_PIX_FMT_YCBYCR_H2V1		V4L2_PIX_FMT_YUYV
#define SDE_PIX_FMT_Y_CBCR_H2V2_VENUS	v4l2_fourcc('Q', 'N', 'V', '2')
#define SDE_PIX_FMT_Y_CRCB_H2V2_VENUS	v4l2_fourcc('Q', 'N', 'V', '1')
#define SDE_PIX_FMT_RGBA_8888_UBWC	V4L2_PIX_FMT_RGBA8888_UBWC
#define SDE_PIX_FMT_RGBX_8888_UBWC	v4l2_fourcc('Q', 'X', 'B', '4')
#define SDE_PIX_FMT_RGB_565_UBWC	v4l2_fourcc('Q', 'R', 'G', '6')
#define SDE_PIX_FMT_Y_CBCR_H2V2_UBWC	V4L2_PIX_FMT_NV12_UBWC
#define SDE_PIX_FMT_RGBA_1010102	v4l2_fourcc('A', 'B', '3', '0')
#define SDE_PIX_FMT_RGBX_1010102	v4l2_fourcc('X', 'B', '3', '0')
#define SDE_PIX_FMT_ARGB_2101010	v4l2_fourcc('A', 'R', '3', '0')
#define SDE_PIX_FMT_XRGB_2101010	v4l2_fourcc('X', 'R', '3', '0')
#define SDE_PIX_FMT_BGRA_1010102	v4l2_fourcc('B', 'A', '3', '0')
#define SDE_PIX_FMT_BGRX_1010102	v4l2_fourcc('B', 'X', '3', '0')
#define SDE_PIX_FMT_ABGR_2101010	v4l2_fourcc('R', 'A', '3', '0')
#define SDE_PIX_FMT_XBGR_2101010	v4l2_fourcc('R', 'X', '3', '0')
#define SDE_PIX_FMT_RGBA_1010102_UBWC	v4l2_fourcc('Q', 'R', 'B', 'A')
#define SDE_PIX_FMT_RGBX_1010102_UBWC	v4l2_fourcc('Q', 'X', 'B', 'A')
#define SDE_PIX_FMT_Y_CBCR_H2V2_P010	v4l2_fourcc('P', '0', '1', '0')
#define SDE_PIX_FMT_Y_CBCR_H2V2_TP10	v4l2_fourcc('T', 'P', '1', '0')
#define SDE_PIX_FMT_Y_CBCR_H2V2_TP10_UBWC V4L2_PIX_FMT_NV12_TP10_UBWC

#define V4L2_CID_SDE_ROTATOR_SECURE (V4L2_CID_PRIVATE_BASE + 0)

#define SDE_ROTATION_NOP 0x01
#define SDE_ROTATION_FLIP_LR 0x02
#define SDE_ROTATION_FLIP_UD 0x04
#define SDE_ROTATION_90 0x08
#define SDE_ROTATION_180 (SDE_ROTATION_FLIP_LR | SDE_ROTATION_FLIP_UD)
#define SDE_ROTATION_270 (SDE_ROTATION_90 | SDE_ROTATION_180)
#define SDE_ROTATION_DEINTERLACE 0x10
#define SDE_ROTATION_SECURE 0x80
#define SDE_ROTATION_VERIFY_INPUT_ONLY 0x10000
#define SDE_ROTATION_EXT_DMA_BUF 0x20000

struct msm_sde_rotator_fence {
	__u32 type;
	__u32 index;
	__s32 fd;
};

#define VIDIOC_S_SDE_ROTATOR_FENCE \
	_IOW('V', BASE_VIDIOC_PRIVATE + 40, struct msm_sde_rotator_fence)
#define VIDIOC_G_SDE_ROTATOR_FENCE \
	_IOWR('V', BASE_VIDIOC_PRIVATE + 41, struct msm_sde_rotator_fence)

#endif /* __UAPI_MSM_SDE_ROTATOR__ */
