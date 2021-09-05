// Enum Modio.EModioVirusStatus
enum class EModioVirusStatus : uint8 {
	NoThreat = 0,
	Malicious = 1,
	EModioVirusStatus_MAX = 2
};

// Enum Modio.EModioVirusScanStatus
enum class EModioVirusScanStatus : uint8 {
	NotScanned = 0,
	ScanComplete = 1,
	InProgress = 2,
	TooLargeToScan = 3,
	FileNotFound = 4,
	ErrorScanning = 5,
	EModioVirusScanStatus_MAX = 6
};

// Enum Modio.EModioModManagementEventType
enum class EModioModManagementEventType : uint8 {
	Installed = 0,
	Uninstalled = 1,
	Updated = 2,
	EModioModManagementEventType_MAX = 3
};

// Enum Modio.EModioAuthenticationProvider
enum class EModioAuthenticationProvider : uint8 {
	XboxLive = 0,
	Steam = 1,
	GoG = 2,
	Itch = 3,
	Switch = 4,
	Discord = 5,
	EModioAuthenticationProvider_MAX = 6
};

// Enum Modio.EModioLanguage
enum class EModioLanguage : uint8 {
	English = 0,
	Bulgarian = 1,
	French = 2,
	German = 3,
	Italian = 4,
	Polish = 5,
	Portuguese = 6,
	Hungarian = 7,
	Japanese = 8,
	Korean = 9,
	Russian = 10,
	Spanish = 11,
	Thai = 12,
	ChineseSimplified = 13,
	ChineseTraditional = 14,
	EModioLanguage_MAX = 15
};

// Enum Modio.EModioLogLevel
enum class EModioLogLevel : uint8 {
	Trace = 0,
	Info = 1,
	Warning = 2,
	Error = 3,
	EModioLogLevel_MAX = 4
};

// Enum Modio.EModioGallerySize
enum class EModioGallerySize : uint8 {
	Original = 0,
	Thumb320 = 1,
	EModioGallerySize_MAX = 2
};

// Enum Modio.EModioAvatarSize
enum class EModioAvatarSize : uint8 {
	Original = 0,
	Thumb50 = 1,
	Thumb100 = 2,
	EModioAvatarSize_MAX = 3
};

// Enum Modio.EModioLogoSize
enum class EModioLogoSize : uint8 {
	Original = 0,
	Thumb320 = 1,
	Thumb640 = 2,
	Thumb1280 = 3,
	EModioLogoSize_MAX = 4
};

// Enum Modio.EModioPortal
enum class EModioPortal : uint8 {
	None = 0,
	Apple = 1,
	EpicGamesStore = 2,
	GOG = 3,
	Google = 4,
	Itchio = 5,
	Nintendo = 6,
	PSN = 7,
	Steam = 8,
	XboxLive = 9,
	EModioPortal_MAX = 10
};

// Enum Modio.EModioEnvironment
enum class EModioEnvironment : uint8 {
	Test = 0,
	Live = 1,
	EModioEnvironment_MAX = 2
};

// Enum Modio.EModioErrorCondition
enum class EModioErrorCondition : uint8 {
	NoError = 0,
	NetworkError = 1,
	ConfigurationError = 2,
	InvalidArgsError = 3,
	FilesystemError = 4,
	InternalError = 5,
	EntityNotFoundError = 11,
	UserTermsOfUseError = 12,
	EModioErrorCondition_MAX = 13
};

// Enum Modio.EModioSortDirection
enum class EModioSortDirection : uint8 {
	Ascending = 0,
	Descending = 1,
	EModioSortDirection_MAX = 2
};

// Enum Modio.EModioSortFieldType
enum class EModioSortFieldType : uint8 {
	ID = 0,
	DownloadsToday = 1,
	SubscriberCount = 2,
	Rating = 3,
	DateMarkedLive = 4,
	DateUpdated = 5,
	EModioSortFieldType_MAX = 6
};

// Enum Modio.EModioImageState
enum class EModioImageState : uint8 {
	OnDisc = 0,
	LoadingIntoMemory = 1,
	InMemory = 2,
	Corrupted = 3,
	EModioImageState_MAX = 4
};

// Enum Modio.EModioModState
enum class EModioModState : uint8 {
	InstallationPending = 0,
	Installed = 1,
	UpdatePending = 2,
	Downloading = 3,
	Extracting = 4,
	UninstallPending = 5,
	EModioModState_MAX = 6
};

// Enum Modio.EFileSizeUnit
enum class EFileSizeUnit : int32 {
	Largest = 0,
	B = 1,
	KB = 1024,
	MB = 1048576,
	GB = 1073741824,
	EFileSizeUnit_MAX = 1073741825
};

// ScriptStruct Modio.ModioYoutubeURLList
// Size: 0x01 (Inherited: 0x00)
struct FModioYoutubeURLList {
};

// ScriptStruct Modio.ModioSketchfabURLList
// Size: 0x01 (Inherited: 0x00)
struct FModioSketchfabURLList {
};

// ScriptStruct Modio.ModioModInfoList
// Size: 0x28 (Inherited: 0x00)
struct FModioModInfoList {
	FModioPagedResult PagedResult; // 0x00(0x14)
	TArray<FModioModInfo> InternalList; // 0x18(0x10)
};

// ScriptStruct Modio.ModioModInfo
// Size: 0x1c0 (Inherited: 0x00)
struct FModioModInfo {
	FModioModID ModId; // 0x00(0x08)
	FString ProfileName; // 0x08(0x10)
	FString ProfileSummary; // 0x18(0x10)
	FString ProfileDescription; // 0x28(0x10)
	FString ProfileDescriptionPlaintext; // 0x38(0x10)
	FString ProfileUrl; // 0x48(0x10)
	FModioUser ProfileSubmittedBy; // 0x58(0x30)
	FDateTime ProfileDateAdded; // 0x88(0x08)
	FDateTime ProfileDateUpdated; // 0x90(0x08)
	FDateTime ProfileDateLive; // 0x98(0x08)
	char ProfileMaturityOption; // 0xa0(0x01)
	FString MetadataBlob; // 0xa8(0x10)
	FModioFileMetadata FileInfo; // 0xb8(0x68)
	TArray<FModioMetadata> MetadataKvp; // 0x120(0x10)
	TArray<FModioModTag> Tags; // 0x130(0x10)
	int32_t NumGalleryImages; // 0x140(0x04)
	FModioYoutubeURLList YoutubeURLs; // 0x148(0x01)
	FModioSketchfabURLList SketchfabURLs; // 0x158(0x01)
	FModioModStats Stats; // 0x168(0x58)
};

// ScriptStruct Modio.ModioModStats
// Size: 0x58 (Inherited: 0x00)
struct FModioModStats {
	int64_t PopularityRankPosition; // 0x00(0x08)
	int64_t PopularityRankTotalMods; // 0x08(0x08)
	int64_t DownloadsTotal; // 0x10(0x08)
	int64_t SubscribersTotal; // 0x18(0x08)
	int64_t RatingTotal; // 0x20(0x08)
	int64_t RatingPositive; // 0x28(0x08)
	int64_t RatingNegative; // 0x30(0x08)
	int64_t RatingPercentagePositive; // 0x38(0x08)
	float RatingWeightedAggregate; // 0x40(0x04)
	FString RatingDisplayText; // 0x48(0x10)
};

// ScriptStruct Modio.ModioModTag
// Size: 0x10 (Inherited: 0x00)
struct FModioModTag {
	FString Tag; // 0x00(0x10)
};

// ScriptStruct Modio.ModioMetadata
// Size: 0x20 (Inherited: 0x00)
struct FModioMetadata {
	FString Key; // 0x00(0x10)
	FString Value; // 0x10(0x10)
};

// ScriptStruct Modio.ModioFileMetadata
// Size: 0x68 (Inherited: 0x00)
struct FModioFileMetadata {
	FModioFileMetadataID MetadataId; // 0x00(0x08)
	FModioModID ModId; // 0x08(0x08)
	FDateTime DateAdded; // 0x10(0x08)
	enum class EModioVirusScanStatus CurrentVirusScanStatus; // 0x18(0x01)
	enum class EModioVirusStatus CurrentVirusStatus; // 0x19(0x01)
	int64_t Filesize; // 0x20(0x08)
	FString Filename; // 0x28(0x10)
	FString Version; // 0x38(0x10)
	FString Changelog; // 0x48(0x10)
	FString MetadataBlob; // 0x58(0x10)
};

// ScriptStruct Modio.ModioModID
// Size: 0x08 (Inherited: 0x00)
struct FModioModID {
};

// ScriptStruct Modio.ModioFileMetadataID
// Size: 0x08 (Inherited: 0x00)
struct FModioFileMetadataID {
};

// ScriptStruct Modio.ModioUser
// Size: 0x30 (Inherited: 0x00)
struct FModioUser {
	FModioUserID UserId; // 0x00(0x08)
	FString Username; // 0x08(0x10)
	FDateTime DateOnline; // 0x18(0x08)
	FString ProfileUrl; // 0x20(0x10)
};

// ScriptStruct Modio.ModioUserID
// Size: 0x08 (Inherited: 0x00)
struct FModioUserID {
};

// ScriptStruct Modio.ModioPagedResult
// Size: 0x14 (Inherited: 0x00)
struct FModioPagedResult {
	int32_t PageIndex; // 0x00(0x04)
	int32_t PageSize; // 0x04(0x04)
	int32_t PageCount; // 0x08(0x04)
	int32_t TotalResultCount; // 0x0c(0x04)
	int32_t ResultCount; // 0x10(0x04)
};

// ScriptStruct Modio.ModioModTagOptions
// Size: 0x28 (Inherited: 0x00)
struct FModioModTagOptions {
	FModioPagedResult PagedResult; // 0x00(0x14)
	TArray<FModioModTagInfo> InternalList; // 0x18(0x10)
};

// ScriptStruct Modio.ModioModTagInfo
// Size: 0x28 (Inherited: 0x00)
struct FModioModTagInfo {
	FString TagGroupName; // 0x00(0x10)
	TArray<FString> TagGroupValues; // 0x10(0x10)
	bool bAllowMultipleSelection; // 0x20(0x01)
};

// ScriptStruct Modio.ModioErrorCode
// Size: 0x10 (Inherited: 0x00)
struct FModioErrorCode {
};

// ScriptStruct Modio.ModioModManagementEvent
// Size: 0x20 (Inherited: 0x00)
struct FModioModManagementEvent {
	FModioModID ID; // 0x00(0x08)
	enum class EModioModManagementEventType Event; // 0x08(0x01)
	FModioErrorCode Status; // 0x10(0x10)
};

// ScriptStruct Modio.ModioOptionalModInfoList
// Size: 0x30 (Inherited: 0x00)
struct FModioOptionalModInfoList {
};

// ScriptStruct Modio.ModioOptionalModInfo
// Size: 0x1c8 (Inherited: 0x00)
struct FModioOptionalModInfo {
};

// ScriptStruct Modio.ModioOptionalImage
// Size: 0x18 (Inherited: 0x00)
struct FModioOptionalImage {
};

// ScriptStruct Modio.ModioOptionalModTagOptions
// Size: 0x30 (Inherited: 0x00)
struct FModioOptionalModTagOptions {
};

// ScriptStruct Modio.ModioOptionalTerms
// Size: 0xd8 (Inherited: 0x00)
struct FModioOptionalTerms {
};

// ScriptStruct Modio.ModioAuthenticationParams
// Size: 0x28 (Inherited: 0x00)
struct FModioAuthenticationParams {
	FString AuthToken; // 0x00(0x10)
	FString UserEmail; // 0x10(0x10)
	bool bUserHasAcceptedTerms; // 0x20(0x01)
};

// ScriptStruct Modio.ModioEmailAuthCode
// Size: 0x10 (Inherited: 0x00)
struct FModioEmailAuthCode {
};

// ScriptStruct Modio.ModioEmailAddress
// Size: 0x10 (Inherited: 0x00)
struct FModioEmailAddress {
};

// ScriptStruct Modio.ModioApiKey
// Size: 0x10 (Inherited: 0x00)
struct FModioApiKey {
};

// ScriptStruct Modio.ModioGameID
// Size: 0x08 (Inherited: 0x00)
struct FModioGameID {
};

// ScriptStruct Modio.ModioFilterParams
// Size: 0xc8 (Inherited: 0x00)
struct FModioFilterParams {
};

// ScriptStruct Modio.ModioImage
// Size: 0x10 (Inherited: 0x00)
struct FModioImage {
	FString ImagePath; // 0x00(0x10)
};

// ScriptStruct Modio.ModioInitializeOptions
// Size: 0x20 (Inherited: 0x00)
struct FModioInitializeOptions {
	FModioGameID GameID; // 0x00(0x08)
	FModioApiKey APIKey; // 0x08(0x10)
	enum class EModioEnvironment GameEnvironment; // 0x18(0x01)
	enum class EModioPortal PortalInUse; // 0x19(0x01)
};

// ScriptStruct Modio.ModioModCollectionEntry
// Size: 0x4f8 (Inherited: 0x00)
struct FModioModCollectionEntry {
};

// ScriptStruct Modio.ModioOptionalModProgressInfo
// Size: 0x30 (Inherited: 0x00)
struct FModioOptionalModProgressInfo {
};

// ScriptStruct Modio.ModioModProgressInfo
// Size: 0x28 (Inherited: 0x00)
struct FModioModProgressInfo {
	int64_t TotalDownloadSize; // 0x00(0x08)
	int64_t CurrentlyDownloadedBytes; // 0x08(0x08)
	int64_t TotalExtractedSizeOnDisk; // 0x10(0x08)
	int64_t CurrentlyExtractedBytes; // 0x18(0x08)
	FModioModID ID; // 0x20(0x08)
};

// ScriptStruct Modio.ModioTerms
// Size: 0xd0 (Inherited: 0x00)
struct FModioTerms {
	FString AgreeButtonText; // 0x00(0x10)
	FString DisagreeButtonText; // 0x10(0x10)
	FModioLink WebsiteLink; // 0x20(0x28)
	FModioLink TermsLink; // 0x48(0x28)
	FModioLink PrivacyLink; // 0x70(0x28)
	FModioLink ManageLink; // 0x98(0x28)
};

// ScriptStruct Modio.ModioLink
// Size: 0x28 (Inherited: 0x00)
struct FModioLink {
	FString Text; // 0x00(0x10)
	FString URL; // 0x10(0x10)
	bool bRequired; // 0x20(0x01)
};

// ScriptStruct Modio.ModioTestFilterParamData
// Size: 0x10 (Inherited: 0x00)
struct FModioTestFilterParamData {
	FModioModID First; // 0x00(0x08)
	FModioModID Last; // 0x08(0x08)
};

// ScriptStruct Modio.ModioOptionalUser
// Size: 0x38 (Inherited: 0x00)
struct FModioOptionalUser {
};

// ScriptStruct Modio.ModioValidationError
// Size: 0x20 (Inherited: 0x00)
struct FModioValidationError {
	FString FieldName; // 0x00(0x10)
	FString ValidationFailureDescription; // 0x10(0x10)
};

