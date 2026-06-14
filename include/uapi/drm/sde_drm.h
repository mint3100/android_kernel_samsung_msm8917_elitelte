#ifndef _SDE_DRM_H_
#define _SDE_DRM_H_

#include <stdint.h>

/* Total number of supported color planes. */
#define SDE_MAX_PLANES 4

/* Total number of parameterized detail enhancer mapping curves. */
#define SDE_MAX_DE_CURVES 3

/* Y/RGB and UV filter configuration. */
#define FILTER_EDGE_DIRECTED_2D 0x0
#define FILTER_CIRCULAR_2D 0x1
#define FILTER_SEPARABLE_1D 0x2
#define FILTER_BILINEAR 0x3

/* Alpha filters. */
#define FILTER_ALPHA_DROP_REPEAT 0x0
#define FILTER_ALPHA_BILINEAR 0x1

/* LUT configuration flags. */
#define SCALER_LUT_SWAP 0x1
#define SCALER_LUT_DIR_WR 0x2
#define SCALER_LUT_Y_CIR_WR 0x4
#define SCALER_LUT_UV_CIR_WR 0x8
#define SCALER_LUT_Y_SEP_WR 0x10
#define SCALER_LUT_UV_SEP_WR 0x20

struct sde_drm_pix_ext_v1 {
	int32_t num_ext_pxls_lr[SDE_MAX_PLANES];
	int32_t num_ext_pxls_tb[SDE_MAX_PLANES];

	int32_t left_ftch[SDE_MAX_PLANES];
	int32_t right_ftch[SDE_MAX_PLANES];
	int32_t top_ftch[SDE_MAX_PLANES];
	int32_t btm_ftch[SDE_MAX_PLANES];

	int32_t left_rpt[SDE_MAX_PLANES];
	int32_t right_rpt[SDE_MAX_PLANES];
	int32_t top_rpt[SDE_MAX_PLANES];
	int32_t btm_rpt[SDE_MAX_PLANES];
};

struct sde_drm_de_v1 {
	uint32_t enable;
	int16_t sharpen_level1;
	int16_t sharpen_level2;
	uint16_t clip;
	uint16_t limit;
	uint16_t thr_quiet;
	uint16_t thr_dieout;
	uint16_t thr_low;
	uint16_t thr_high;
	uint16_t prec_shift;
	int16_t adjust_a[SDE_MAX_DE_CURVES];
	int16_t adjust_b[SDE_MAX_DE_CURVES];
	int16_t adjust_c[SDE_MAX_DE_CURVES];
};

struct sde_drm_scaler_v2 {
	uint32_t enable;
	uint32_t dir_en;
	struct sde_drm_pix_ext_v1 pe;

	uint32_t horz_decimate;
	uint32_t vert_decimate;

	int32_t init_phase_x[SDE_MAX_PLANES];
	int32_t phase_step_x[SDE_MAX_PLANES];
	int32_t init_phase_y[SDE_MAX_PLANES];
	int32_t phase_step_y[SDE_MAX_PLANES];

	uint32_t preload_x[SDE_MAX_PLANES];
	uint32_t preload_y[SDE_MAX_PLANES];
	uint32_t src_width[SDE_MAX_PLANES];
	uint32_t src_height[SDE_MAX_PLANES];

	uint32_t dst_width;
	uint32_t dst_height;

	uint32_t y_rgb_filter_cfg;
	uint32_t uv_filter_cfg;
	uint32_t alpha_filter_cfg;
	uint32_t blend_cfg;

	uint32_t lut_flag;
	uint32_t dir_lut_idx;
	uint32_t y_rgb_cir_lut_idx;
	uint32_t uv_cir_lut_idx;
	uint32_t y_rgb_sep_lut_idx;
	uint32_t uv_sep_lut_idx;

	struct sde_drm_de_v1 de;
};

#endif /* _SDE_DRM_H_ */
