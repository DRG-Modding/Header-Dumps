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
	UPROPERTY(BlueprintReadWrite) FString Price; 
	UPROPERTY(BlueprintReadWrite) FString Name; 
	UPROPERTY(BlueprintReadWrite) enum class PurchaseType Type; 
};

// ScriptStruct MagicLeap.PurchaseConfirmation
// Size: 0x50 (Inherited: 0x00)
struct FPurchaseConfirmation {
	UPROPERTY(BlueprintReadWrite) FString PackageName; 
	UPROPERTY(BlueprintReadWrite) enum class PurchaseType Type; 
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// Size: 0x14 (Inherited: 0x00)
struct FMagicLeapMeshBlockRequest {
	UPROPERTY(BlueprintReadWrite) FGuid BlockID; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapMeshLOD LevelOfDetail; 
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapTrackingMeshInfo {
	UPROPERTY(BlueprintReadWrite) FTimespan Timestamp; 
	UPROPERTY(BlueprintReadWrite) TArray<FMagicLeapMeshBlockInfo> BlockData; 
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// Size: 0x48 (Inherited: 0x00)
struct FMagicLeapMeshBlockInfo {
	UPROPERTY(BlueprintReadWrite) FGuid BlockID; 
	UPROPERTY(BlueprintReadWrite) FVector BlockPosition; 
	UPROPERTY(BlueprintReadWrite) FRotator BlockOrientation; 
	UPROPERTY(BlueprintReadWrite) FVector BlockDimensions; 
	UPROPERTY(BlueprintReadWrite) FTimespan Timestamp; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapMeshState BlockState; 
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// Size: 0x24 (Inherited: 0x00)
struct FMagicLeapRaycastHitResult {
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapRaycastResultState HitState; 
	UPROPERTY(BlueprintReadWrite) FVector HitPoint; 
	UPROPERTY(BlueprintReadWrite) FVector Normal; 
	UPROPERTY(BlueprintReadWrite) float Confidence; 
	UPROPERTY(BlueprintReadWrite) int32_t UserData; 
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// Size: 0x38 (Inherited: 0x00)
struct FMagicLeapRaycastQueryParams {
	UPROPERTY(BlueprintReadWrite) FVector Position; 
	UPROPERTY(BlueprintReadWrite) FVector Direction; 
	UPROPERTY(BlueprintReadWrite) FVector UpVector; 
	UPROPERTY(BlueprintReadWrite) int32_t Width; 
	UPROPERTY(BlueprintReadWrite) int32_t Height; 
	UPROPERTY(BlueprintReadWrite) float HorizontalFovDegrees; 
	UPROPERTY(BlueprintReadWrite) bool CollideWithUnobserved; 
	UPROPERTY(BlueprintReadWrite) int32_t UserData; 
};

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
// Size: 0x1c (Inherited: 0x00)
struct FMagicLeapGraphicsClientPerformanceInfo {
	UPROPERTY(BlueprintReadWrite) float FrameStartCPUCompAcquireCPUTimeMs; 
	UPROPERTY(BlueprintReadWrite) float FrameStartCPUFrameEndGPUTimeMs; 
	UPROPERTY(BlueprintReadWrite) float FrameStartCPUFrameStartCPUTimeMs; 
	UPROPERTY(BlueprintReadWrite) float FrameDurationCPUTimeMs; 
	UPROPERTY(BlueprintReadWrite) float FrameDurationGPUTimeMs; 
	UPROPERTY(BlueprintReadWrite) float FrameInternalDurationCPUTimeMs; 
	UPROPERTY(BlueprintReadWrite) float FrameInternalDurationGPUTimeMs; 
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// Size: 0x08 (Inherited: 0x00)
struct FMagicLeapHeadTrackingState {
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapHeadTrackingMode Mode; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapHeadTrackingError Error; 
	UPROPERTY(BlueprintReadWrite) float Confidence; 
};

