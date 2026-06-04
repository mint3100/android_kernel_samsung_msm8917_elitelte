# android_kernel_samsung_msm8917_elitelte_kor

Samsung MSM8917/MSM8937 kernel source for the Korean Samsung Galaxy Folder2 (`elitelte_kor`, SM-G160N), prepared for the LineageOS 15.1 Android 8.1 bring-up.

This is a source-built kernel tree. The matching device tree is configured to build `zImage` from this repository and package it into the Android boot image through the normal LineageOS build system.

## Kernel Summary

| Item | Value |
| --- | --- |
| Device | Samsung Galaxy Folder2 |
| Model | SM-G160N |
| Codename | `elitelte_kor` |
| Platform | Qualcomm MSM8937 / MSM8917 family |
| Android target | LineageOS 15.1 / Android 8.1 |
| Architecture | 32-bit ARM |
| Kernel image | `zImage` |
| Toolchain | `arm-eabi-4.8` from LineageOS prebuilts |
| Device tree path | `device/samsung/elitelte_kor` |

## Android Build Integration

The matching device tree points to this repository with:

```make
TARGET_KERNEL_ARCH := arm
TARGET_KERNEL_SOURCE := kernel/samsung/msm8917_elitelte_kor
TARGET_KERNEL_CONFIG := msm8937_sec_defconfig
TARGET_KERNEL_VARIANT_CONFIG := msm8937_sec_elitelte_kor_defconfig
TARGET_KERNEL_SELINUX_CONFIG := selinux_defconfig
TARGET_KERNEL_CROSS_COMPILE_PREFIX := arm-eabi-
```

The supported build path is through LineageOS:

```sh
source build/envsetup.sh
lunch lineage_elitelte_kor-userdebug
mka bootimage
```

A full ROM build will also build the kernel from this tree:

```sh
mka bacon
```

## Device-Specific Pieces

Important elitelte files include:

```text
arch/arm/configs/msm8937_sec_defconfig
arch/arm/configs/msm8937_sec_elitelte_kor_defconfig
arch/arm/configs/selinux_defconfig
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-kor-r03.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-kor-r04.dts
arch/arm/boot/dts/samsung/msm8917/msm8917-sec-elitelte-kor-r05.dts
```

## Bring-up Notes

- This tree is intended for the Korean `elitelte_kor` target.
- The ROM target is 32-bit LineageOS 15.1, not an arm64 userspace build.
- Do not replace this with a prebuilt kernel when validating ROM boot behavior.
- The Android boot image is assembled by the device tree and LineageOS build system; this repository should only provide kernel and DT sources.
- Device revisions `r03`, `r04`, and `r05` are present for the Korean target.

## Related Repositories

- `android_device_samsung_elitelte_kor`
- `android_vendor_samsung_elitelte_kor`

## License

This repository contains Linux kernel source and Samsung/Qualcomm platform code. See the original `README`, `COPYING`, and upstream source files for license details.

## Branch

Use the `lineage-15.1` branch for Android 8.1 work.
