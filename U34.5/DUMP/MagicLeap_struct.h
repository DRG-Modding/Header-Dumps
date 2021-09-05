// Enum MagicLeap.PurchaseType
enum class PurchaseType : uint8 {
	Consumable = 0,
	Nonconsumable = 1,
	Undefined = 2,
	PurchaseType_MAX = 3
};

// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8 {
	EFocusLostReason_Invalid = 0,
	EFocusLostReason_System = 1,
	EFocusLostReason_MAX = 2
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8 {
	Minimum = 0,
	Medium = 1,
	Maximum = 2,
	EMagicLeapMeshLOD_MAX = 3
};

// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8 {
	New = 0,
	Updated = 1,
	Deleted = 2,
	Unchanged = 3,
	EMagicLeapMeshState_MAX = 4
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8 {
	None = 0,
	Confidence = 1,
	Block = 2,
	LOD = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4
};

// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8 {
	Triangles = 0,
	PointCloud = 1,
	EMagicLeapMeshType_MAX = 2
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8 {
	RequestFailed = 0,
	NoCollision = 1,
	HitUnobserved = 2,
	HitObserved = 3,
	EMagicLeapRaycastResultState_MAX = 4
};

// Enum MagicLeap.CloudStatus
enum class CloudStatus : uint8 {
	CloudStatus_NotDone = 0,
	CloudStatus_Done = 1,
	CloudStatus_MAX = 2
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8 {
	Lost = 0,
	Recovered = 1,
	RecoveryFailed = 2,
	NewSession = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8 {
	PositionAndOrientation = 0,
	Unavailable = 1,
	Unknown = 2,
	EMagicLeapHeadTrackingMode_MAX = 3
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8 {
	None = 0,
	NotEnoughFeatures = 1,
	LowLight = 2,
	Unknown = 3,
	EMagicLeapHeadTrackingError_MAX = 4
};

// ScriptStruct MagicLeap.PurchaseItemDetails
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseItemDetails {
	FString Price; // 0x10(0x10)
	FString Name; // 0x20(0x10)
	enum class PurchaseType Type; // 0x30(0x01)
};

// ScriptStruct MagicLeap.PurchaseConfirmation
// Size: 0x50 (Inherited: 0x00)
struct FPurchaseConfirmation {
	FString PackageName; // 0x10(0x10)
	enum class PurchaseType Type; // 0x48(0x01)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// Size: 0x14 (Inherited: 0x00)
struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x00(0x10)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x10(0x01)
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x00(0x08)
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x08(0x10)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// Size: 0x48 (Inherited: 0x00)
struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x00(0x10)
	FVector BlockPosition; // 0x10(0x0c)
	FRotator BlockOrientation; // 0x1c(0x0c)
	FVector BlockDimensions; // 0x28(0x0c)
	FTimespan Timestamp; // 0x38(0x08)
	enum class EMagicLeapMeshState BlockState; // 0x40(0x01)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// Size: 0x24 (Inherited: 0x00)
struct FMagicLeapRaycastHitResult {
	enum class EMagicLeapRaycastResultState HitState; // 0x00(0x01)
	FVector HitPoint; // 0x04(0x0c)
	FVector Normal; // 0x10(0x0c)
	float Confidence; // 0x1c(0x04)
	int32_t UserData; // 0x20(0x04)
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// Size: 0x38 (Inherited: 0x00)
struct FMagicLeapRaycastQueryParams {
	FVector Position; // 0x00(0x0c)
	FVector Direction; // 0x0c(0x0c)
	FVector UpVector; // 0x18(0x0c)
	int32_t Width; // 0x24(0x04)
	int32_t Height; // 0x28(0x04)
	float HorizontalFovDegrees; // 0x2c(0x04)
	bool CollideWithUnobserved; // 0x30(0x01)
	int32_t UserData; // 0x34(0x04)
};

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
// Size: 0x1c (Inherited: 0x00)
struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x00(0x04)
	float FrameStartCPUFrameEndGPUTimeMs; // 0x04(0x04)
	float FrameStartCPUFrameStartCPUTimeMs; // 0x08(0x04)
	float FrameDurationCPUTimeMs; // 0x0c(0x04)
	float FrameDurationGPUTimeMs; // 0x10(0x04)
	float FrameInternalDurationCPUTimeMs; // 0x14(0x04)
	float FrameInternalDurationGPUTimeMs; // 0x18(0x04)
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// Size: 0x08 (Inherited: 0x00)
struct FMagicLeapHeadTrackingState {
	enum class EMagicLeapHeadTrackingMode Mode; // 0x00(0x01)
	enum class EMagicLeapHeadTrackingError Error; // 0x01(0x01)
	float Confidence; // 0x04(0x04)
};

