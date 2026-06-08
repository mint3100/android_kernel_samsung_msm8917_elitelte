# android_kernel_samsung_msm8917_elitelte

Samsung MSM8917/MSM8937 kernel source for Galaxy Folder2 elitelte variants,
prepared for the LineageOS 15.1 Android 8.1 bring-up.

## Kernel Summary

| Item | Value |
| --- | --- |
| Device | Samsung Galaxy Folder2 |
| Models | SM-G160N, SM-G1650 |
| Codename | `elitelte` |
| Platform | Qualcomm MSM8937 / MSM8917 family |
| Architecture | 32-bit ARM |
| Kernel image | `zImage` plus separate `dt.img` |
| Toolchain | `arm-eabi-4.8` from LineageOS prebuilts |

## Android Build Integration

The device tree points to this repository with:

```make
TARGET_KERNEL_ARCH := arm
TARGET_KERNEL_SOURCE := kernel/samsung/msm8917_elitelte
TARGET_KERNEL_CONFIG := msm8937_sec_defconfig
TARGET_KERNEL_VARIANT_CONFIG := msm8937_sec_elitelte_$(ELITELTE_VARIANT)_defconfig
TARGET_KERNEL_SELINUX_CONFIG := selinux_defconfig
TARGET_KERNEL_CROSS_COMPILE_PREFIX := arm-eabi-
```

## Variant Defconfigs

```text
arch/arm/configs/msm8937_sec_elitelte_kor_defconfig
arch/arm/configs/msm8937_sec_elitelte_chn_defconfig
```

KOR builds select the KOR defconfig and produce KOR DTBs. CHN builds select the
CHN/HK stock defconfig and produce CHN DTBs.

## Important DT Sources

```text
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-kor-r03.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-kor-r04.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-kor-r05.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-chn-r00.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-chn-r01.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-chn-r02.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-chn-r03.dts
```

## Branch

Use the `lineage-15.1` branch for Android 8.1 work.
