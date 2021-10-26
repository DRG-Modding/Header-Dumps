// Enum SteamVRInputDevice.ESkeletalSummaryDataType
enum class ESkeletalSummaryDataType : uint8 {
	VR_SummaryType_FromAnimation = 0,
	VR_SummaryType_FromDevice = 1,
	VR_SummaryType_MAX = 2
};

// Enum SteamVRInputDevice.ESteamVRInputStringBits
enum class ESteamVRInputStringBits : uint8 {
	VR_InputString_Hand = 0,
	VR_InputString_ControllerType = 1,
	VR_InputString_InputSource = 2,
	VR_InputString_All = 3,
	VR_InputString_MAX = 4
};

// Enum SteamVRInputDevice.EControllerFidelity
enum class EControllerFidelity : uint8 {
	VR_ControllerFidelity_Estimated = 0,
	VR_ControllerFidelity_Full = 1,
	VR_ControllerFidelity_Partial = 2,
	VR_ControllerFidelity_MAX = 3
};

// Enum SteamVRInputDevice.EHandSkeleton
enum class EHandSkeleton : uint8 {
	VR_SteamVRHandSkeleton = 0,
	VR_UE4HandSkeleton = 1,
	VR_MAX = 2
};

// Enum SteamVRInputDevice.EHand
enum class EHand : uint8 {
	VR_LeftHand = 0,
	VR_RightHand = 1,
	VR_MAX = 2
};

// Enum SteamVRInputDevice.EMotionRange
enum class EMotionRange : uint8 {
	VR_WithoutController = 0,
	VR_WithController = 1,
	VR_MAX = 2
};

// Enum SteamVRInputDevice.ESteamVRHand
enum class ESteamVRHand : uint8 {
	VR_Left = 0,
	VR_Right = 1,
	VR_MAX = 2
};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
// Size: 0x620 (Inherited: 0x10)
struct FAnimNode_SteamVRInputAnimPose : FAnimNode_Base {
	enum class EMotionRange MotionRange; // 0x10(0x01)
	enum class EHand hand; // 0x11(0x01)
	enum class EHandSkeleton HandSkeleton; // 0x12(0x01)
	bool Mirror; // 0x13(0x01)
	FSteamVRSkeletonTransform SteamVRSkeletalTransform; // 0x20(0x5d0)
	FUE4RetargettingRefs UE4RetargettingRefs; // 0x5f0(0x28)
};

// ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
// Size: 0x28 (Inherited: 0x00)
struct FUE4RetargettingRefs {
	bool bIsInitialized; // 0x00(0x01)
	bool bIsRightHanded; // 0x01(0x01)
	FVector KnuckleAverageMS_UE4; // 0x04(0x0c)
	FVector WristSideDirectionLS_UE4; // 0x10(0x0c)
	FVector WristForwardLS_UE4; // 0x1c(0x0c)
};

// ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
// Size: 0x5d0 (Inherited: 0x00)
struct FSteamVRSkeletonTransform {
	FTransform Root; // 0x00(0x30)
	FTransform wrist; // 0x30(0x30)
	FTransform Thumb_1; // 0x60(0x30)
	FTransform Thumb_2; // 0x90(0x30)
	FTransform Thumb_3; // 0xc0(0x30)
	FTransform Thumb_4; // 0xf0(0x30)
	FTransform Index_1; // 0x120(0x30)
	FTransform Index_2; // 0x150(0x30)
	FTransform Index_3; // 0x180(0x30)
	FTransform Index_4; // 0x1b0(0x30)
	FTransform Index_5; // 0x1e0(0x30)
	FTransform Middle_1; // 0x210(0x30)
	FTransform Middle_2; // 0x240(0x30)
	FTransform Middle_3; // 0x270(0x30)
	FTransform Middle_4; // 0x2a0(0x30)
	FTransform Middle_5; // 0x2d0(0x30)
	FTransform Ring_1; // 0x300(0x30)
	FTransform Ring_2; // 0x330(0x30)
	FTransform Ring_3; // 0x360(0x30)
	FTransform Ring_4; // 0x390(0x30)
	FTransform Ring_5; // 0x3c0(0x30)
	FTransform Pinky_1; // 0x3f0(0x30)
	FTransform Pinky_2; // 0x420(0x30)
	FTransform Pinky_3; // 0x450(0x30)
	FTransform Pinky_4; // 0x480(0x30)
	FTransform Pinky_5; // 0x4b0(0x30)
	FTransform Aux_Thumb; // 0x4e0(0x30)
	FTransform Aux_Index; // 0x510(0x30)
	FTransform Aux_Middle; // 0x540(0x30)
	FTransform Aux_Ring; // 0x570(0x30)
	FTransform Aux_Pinky; // 0x5a0(0x30)
};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_SteamVRSetWristTransform : FAnimNode_Base {
	FPoseLink ReferencePose; // 0x10(0x10)
	enum class EHandSkeleton HandSkeleton; // 0x20(0x01)
	FPoseLink targetPose; // 0x28(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
// Size: 0x20 (Inherited: 0x00)
struct FSteamVRInputBindingInfo {
	FName DevicePathName; // 0x00(0x08)
	FName InputPathName; // 0x08(0x08)
	FName ModeName; // 0x10(0x08)
	FName slotName; // 0x18(0x08)
};

// ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
// Size: 0x28 (Inherited: 0x00)
struct FSteamVRInputOriginInfo {
	int32_t TrackedDeviceIndex; // 0x00(0x04)
	FString RenderModelComponentName; // 0x08(0x10)
	FString TrackedDeviceModel; // 0x18(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRActionSet
// Size: 0x18 (Inherited: 0x00)
struct FSteamVRActionSet {
	FString Path; // 0x00(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRAction
// Size: 0x28 (Inherited: 0x00)
struct FSteamVRAction {
	FName Name; // 0x00(0x08)
	FString Path; // 0x08(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
// Size: 0x10 (Inherited: 0x00)
struct FSteamVRFingerSplays {
	float Thumb_Index; // 0x00(0x04)
	float Index_Middle; // 0x04(0x04)
	float Middle_Ring; // 0x08(0x04)
	float Ring_Pinky; // 0x0c(0x04)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
// Size: 0x14 (Inherited: 0x00)
struct FSteamVRFingerCurls {
	float Thumb; // 0x00(0x04)
	float Index; // 0x04(0x04)
	float Middle; // 0x08(0x04)
	float Ring; // 0x0c(0x04)
	float Pinky; // 0x10(0x04)
};

