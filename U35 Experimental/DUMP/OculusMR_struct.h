// Enum OculusMR.EOculusMR_BoundaryType
enum class EOculusMR_BoundaryType : uint8 {
	BT_OuterBoundary = 0,
	BT_PlayArea = 1,
	BT_MAX = 2
};

// Enum OculusMR.EOculusMR_CompositionMethod
enum class EOculusMR_CompositionMethod : uint8 {
	ExternalComposition = 0,
	DirectComposition = 1,
	EOculusMR_MAX = 2
};

// Enum OculusMR.EOculusMR_DepthQuality
enum class EOculusMR_DepthQuality : uint8 {
	DQ_Low = 0,
	DQ_Medium = 1,
	DQ_High = 2,
	DQ_MAX = 3
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class EOculusMR_PostProcessEffects : uint8 {
	PPE_Off = 0,
	PPE_On = 1,
	PPE_MAX = 2
};

// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class EOculusMR_VirtualGreenScreenType : uint8 {
	VGS_Off = 0,
	VGS_OuterBoundary = 1,
	VGS_PlayArea = 2,
	VGS_MAX = 3
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8 {
	CR_TrackingReference = 0,
	CR_Head = 1,
	CR_MAX = 2
};

// Enum OculusMR.EOculusMR_CameraDeviceEnum
enum class EOculusMR_CameraDeviceEnum : uint8 {
	CD_None = 0,
	CD_WebCamera0 = 1,
	CD_WebCamera1 = 2,
	CD_ZEDCamera = 3,
	CD_MAX = 4
};

// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
// Size: 0x3c (Inherited: 0x00)
struct FOculusMR_PlaneMeshTriangle {
	FVector Vertex0; // 0x00(0x0c)
	FVector2D UV0; // 0x0c(0x08)
	FVector Vertex1; // 0x14(0x0c)
	FVector2D UV1; // 0x20(0x08)
	FVector Vertex2; // 0x28(0x0c)
	FVector2D UV2; // 0x34(0x08)
};

// ScriptStruct OculusMR.TrackedCamera
// Size: 0x70 (Inherited: 0x00)
struct FTrackedCamera {
	int32_t Index; // 0x00(0x04)
	FString Name; // 0x08(0x10)
	float FieldOfView; // 0x18(0x04)
	int32_t SizeX; // 0x1c(0x04)
	int32_t SizeY; // 0x20(0x04)
	enum class ETrackedDeviceType AttachedTrackedDevice; // 0x24(0x01)
	FRotator CalibratedRotation; // 0x28(0x0c)
	FVector CalibratedOffset; // 0x34(0x0c)
	FRotator UserRotation; // 0x40(0x0c)
	FVector UserOffset; // 0x4c(0x0c)
	FRotator RawRotation; // 0x58(0x0c)
	FVector RawOffset; // 0x64(0x0c)
};

