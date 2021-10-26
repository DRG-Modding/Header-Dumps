// Class GooglePAD.GooglePADFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary {

	enum class EGooglePADErrorCode ShowCellularDataConfirmation();
	enum class EGooglePADErrorCode RequestRemoval(FString Name);
	enum class EGooglePADErrorCode RequestInfo(TArray<FString> AssetPacks);
	enum class EGooglePADErrorCode RequestDownload(TArray<FString> AssetPacks);
	void ReleaseDownloadState(int32_t State);
	void ReleaseAssetPackLocation(int32_t Location);
	int32_t GetTotalBytesToDownload(int32_t State);
	enum class EGooglePADStorageMethod GetStorageMethod(int32_t Location);
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus Status);
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32_t State);
	enum class EGooglePADErrorCode GetDownloadState(FString Name, int32_t State);
	int32_t GetBytesDownloaded(int32_t State);
	FString GetAssetsPath(int32_t Location);
	enum class EGooglePADErrorCode GetAssetPackLocation(FString Name, int32_t Location);
	enum class EGooglePADErrorCode CancelDownload(TArray<FString> AssetPacks);
};

