#ifndef UE4SS_SDK_GooglePAD_HPP
#define UE4SS_SDK_GooglePAD_HPP

#include "GooglePAD_enums.hpp"

class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{

    EGooglePADErrorCode ShowCellularDataConfirmation();
    EGooglePADErrorCode RequestRemoval(FString Name);
    EGooglePADErrorCode RequestInfo(const TArray<FString> AssetPacks);
    EGooglePADErrorCode RequestDownload(const TArray<FString> AssetPacks);
    void ReleaseDownloadState(const int32 State);
    void ReleaseAssetPackLocation(const int32 Location);
    int32 GetTotalBytesToDownload(const int32 State);
    EGooglePADStorageMethod GetStorageMethod(const int32 Location);
    EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status);
    EGooglePADDownloadStatus GetDownloadStatus(const int32 State);
    EGooglePADErrorCode GetDownloadState(FString Name, int32& State);
    int32 GetBytesDownloaded(const int32 State);
    FString GetAssetsPath(const int32 Location);
    EGooglePADErrorCode GetAssetPackLocation(FString Name, int32& Location);
    EGooglePADErrorCode CancelDownload(const TArray<FString> AssetPacks);
};

#endif
