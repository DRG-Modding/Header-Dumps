// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8 {
	Boundary_Outer = 0,
	Boundary_PlayArea = 1,
	Boundary_MAX = 2
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class EFixedFoveatedRenderingLevel : uint8 {
	FFR_Off = 0,
	FFR_Low = 1,
	FFR_Medium = 2,
	FFR_High = 3,
	FFR_HighTop = 4,
	FFR_MAX = 5
};

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8 {
	None = 0,
	HMD = 1,
	LTouch = 2,
	RTouch = 3,
	Touch = 4,
	DeviceObjectZero = 5,
	All = 6,
	ETrackedDeviceType_MAX = 7
};

// ScriptStruct OculusHMD.GuardianTestResult
// Size: 0x20 (Inherited: 0x00)
struct FGuardianTestResult {
	bool IsTriggering; // 0x00(0x01)
	enum class ETrackedDeviceType DeviceType; // 0x01(0x01)
	float ClosestDistance; // 0x04(0x04)
	FVector ClosestPoint; // 0x08(0x0c)
	FVector ClosestPointNormal; // 0x14(0x0c)
};

// ScriptStruct OculusHMD.HmdUserProfile
// Size: 0x48 (Inherited: 0x00)
struct FHmdUserProfile {
	FString Name; // 0x00(0x10)
	FString Gender; // 0x10(0x10)
	float PlayerHeight; // 0x20(0x04)
	float EyeHeight; // 0x24(0x04)
	float IPD; // 0x28(0x04)
	FVector2D NeckToEyeDistance; // 0x2c(0x08)
	TArray<FHmdUserProfileField> ExtraFields; // 0x38(0x10)
};

// ScriptStruct OculusHMD.HmdUserProfileField
// Size: 0x20 (Inherited: 0x00)
struct FHmdUserProfileField {
	FString FieldName; // 0x00(0x10)
	FString FieldValue; // 0x10(0x10)
};

// ScriptStruct OculusHMD.OculusSplashDesc
// Size: 0xa0 (Inherited: 0x00)
struct FOculusSplashDesc {
	FSoftObjectPath TexturePath; // 0x00(0x18)
	FTransform TransformInMeters; // 0x20(0x30)
	FVector2D QuadSizeInMeters; // 0x50(0x08)
	FQuat DeltaRotation; // 0x60(0x10)
	FVector2D TextureOffset; // 0x70(0x08)
	FVector2D TextureScale; // 0x78(0x08)
	bool bNoAlphaChannel; // 0x80(0x01)
};

