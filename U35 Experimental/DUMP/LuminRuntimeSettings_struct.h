// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8 {
	Invalid = 0,
	BatteryInfo = 1,
	CameraCapture = 2,
	ComputerVision = 3,
	WorldReconstruction = 4,
	InAppPurchase = 5,
	AudioCaptureMic = 6,
	DrmCertificates = 7,
	Occlusion = 8,
	LowLatencyLightwear = 9,
	Internet = 10,
	IdentityRead = 11,
	BackgroundDownload = 12,
	BackgroundUpload = 13,
	MediaDrm = 14,
	Media = 15,
	MediaMetadata = 16,
	PowerInfo = 17,
	LocalAreaNetwork = 18,
	VoiceInput = 19,
	Documents = 20,
	ConnectBackgroundMusicService = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead = 23,
	PwFoundObjRead = 23,
	NormalNotificationsUsage = 24,
	MusicService = 25,
	ControllerPose = 26,
	GesturesSubscribe = 27,
	GesturesConfig = 28,
	AddressBookRead = 29,
	AddressBookWrite = 30,
	AddressBookBasicAccess = 31,
	CoarseLocation = 32,
	FineLocation = 33,
	HandMesh = 34,
	WifiStatusRead = 35,
	SocialConnectionsInvitesAccess = 36,
	ELuminPrivilege_MAX = 37
};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8 {
	Unspecified = 0,
	Maximum = 1,
	FPS_61 = 2,
	FPS_121 = 3,
	ELuminFrameTimingHint_MAX = 4
};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8 {
	Universe = 0,
	Fullscreen = 1,
	SearchProvider = 2,
	MusicService = 3,
	Screens = 4,
	ScreensImmersive = 5,
	Console = 6,
	SystemUI = 7,
	ELuminComponentType_MAX = 8
};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8 {
	FileExtension = 0,
	MimeType = 1,
	Mode = 2,
	MusicAttribute = 3,
	Schema = 4,
	ELuminComponentSubElementType_MAX = 5
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
// Size: 0x10 (Inherited: 0x00)
struct FLocalizedIconInfos {
	UPROPERTY(BlueprintReadWrite) TArray<FLocalizedIconInfo> IconData; 
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
// Size: 0x30 (Inherited: 0x00)
struct FLocalizedIconInfo {
	UPROPERTY(BlueprintReadWrite) FString LanguageCode; 
	UPROPERTY(BlueprintReadWrite) FDirectoryPath IconModelPath; 
	UPROPERTY(BlueprintReadWrite) FDirectoryPath IconPortalPath; 
};

// ScriptStruct LuminRuntimeSettings.LocalizedAppName
// Size: 0x20 (Inherited: 0x00)
struct FLocalizedAppName {
	UPROPERTY(BlueprintReadWrite) FString LanguageCode; 
	UPROPERTY(BlueprintReadWrite) FString AppName; 
};

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// Size: 0x48 (Inherited: 0x00)
struct FLuminComponentElement {
	UPROPERTY(BlueprintReadWrite) FString Name; 
	UPROPERTY(BlueprintReadWrite) FString VisibleName; 
	UPROPERTY(BlueprintReadWrite) FString ExecutableName; 
	UPROPERTY(BlueprintReadWrite) enum class ELuminComponentType ComponentType; 
	UPROPERTY(BlueprintReadWrite) TArray<FLuminComponentSubElement> ExtraComponentSubElements; 
};

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// Size: 0x18 (Inherited: 0x00)
struct FLuminComponentSubElement {
	UPROPERTY(BlueprintReadWrite) enum class ELuminComponentSubElementType ElementType; 
	UPROPERTY(BlueprintReadWrite) FString Value; 
};

