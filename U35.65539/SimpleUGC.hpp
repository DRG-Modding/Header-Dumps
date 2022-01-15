#ifndef UE4SS_SDK_SimpleUGC_HPP
#define UE4SS_SDK_SimpleUGC_HPP

#include "SimpleUGC_enums.hpp"

class UMakeReplaceableActorComponent : UActorComponent
{
    TSubclassOf<AActor> CompatibleReplacement;
}

class UReplacementActorComponent : UActorComponent
{
    TArray<TSubclassOf<AActor>> ActorClassesToReplace;
}

class UUGCBlueprintLibrary : UBlueprintFunctionLibrary
{

    UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
}

class UModioModInfoWrapper : UObject
{
    FString ModId;
    FString ModName;
    FString ModURL;
    FString ModAuthor;
    FString ModVersion;
    FString ModDescription;
    EUGCApprovalStatus Status;

    bool IsModIdInvalid();
}

class UModioTermsWrapper : UObject
{
    FString AgreeButtonText;
    FString DisagreeButtonText;
    FString TermsLink;
    FString TermsText;
    FString PrivacyLink;
    FString PrivacyText;
    FString TermsOfUseText;

    bool isEmpty();
}

class UUGCLatentActionManager : UObject
{
}

class UUGCPackage : UObject
{
    FString Name;
    FString Version;
    FString ModURL;
    FString Categories;
    EUGCApprovalStatus Status;
    FString ModPath;
    FString PakFileLocation;
    TArray<FString> PakFileAssets;
    FString Author;
    FString AuthorURL;
    FString Description;
    bool IsMounted;
    bool MountingToBeApplied;
    bool DeprecatedLocation;
    bool ShowStatusForAudioCosmetic;
    TArray<int64> Dependencies;
    bool DependencyRemoved;
    bool PackagedForLatestVersion;
    bool OverridePackedForLatestVersion;
    FDateTime LastUpdated;

    FString GetIdAsString();
    int64 GetIdAsInt();
}

class UUGCRegistry : UObject
{
    FUGCRegistryOnPackageMounted OnPackageMounted;
    void UGCPackageMounted(bool Sandbox);
    TArray<UUGCPackage*> UGCPackages;
    TMap<TSubclassOf<AActor>, TSubclassOf<AActor>> RegisteredOverrides;
    bool PackageChange;
    TArray<UUGCPackage*> UGCPackagesInstalledDuringJoin;
    TArray<UUGCPackage*> UGCPackagesUnmountedDuringJoin;

    void UnmountUGCPackages(TArray<FString> ExcludingModIds);
    bool UnmountUGCPackage(UUGCPackage* Package, bool RemoveFromUserSettings);
    void UnmountSandboxUGCPackages();
    void UnmountAllNonVerifiedUGCPackages();
    void UGCPackageMounted__DelegateSignature(bool Sandbox);
    UUGCPackage* TryGetPackageFromId(FString ModId);
    void ResetUGCPackagesManipulatedDuringJoin();
    void RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass);
    void RegisterAssetFromPackage(UUGCPackage* Package);
    int32 NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus);
    bool MountUGCPackage(UUGCPackage* Package, bool FromJoining);
    bool IsModToBeEnabled(int64 ModId);
    bool IsModInstalledImprecise(FString ModName, bool IncludeDeprecatedLocation);
    bool IsModInstalledByIdOrName(FString ModIdOrName, bool IncludeDeprecatedLocation);
    bool IsModInstalled(FString ModId);
    bool IsModEnabled(FString ModId);
    TArray<UUGCPackage*> GetPackagesWhichDependsOnPackage(UUGCPackage* Package);
    TArray<UUGCPackage*> GetPackagesSorted(EPackageSortField ByField, bool Ascending);
    TSubclassOf<AActor> GetOverrideForActorClass(TSubclassOf<AActor> ActorClass);
    bool GetMapsInPackage(UUGCPackage* Package, TArray<FName>& Maps);
    bool GetAllClassesInPackage(UUGCPackage* Package, TArray<TSubclassOf<UObject>>& Classes);
    bool GetActorClassesWithReplacementActorComponentsInPackage(UUGCPackage* Package, TArray<TSubclassOf<AActor>>& ActorClasses);
    void ClearOverrideForClass(TSubclassOf<AActor> ActorClass);
    bool AreModsInstalled(EUGCApprovalStatus ApprovalStatus);
    bool AreDeprecatedModsInstalled();
    bool ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass);
    bool ApplyAllOverridesInPackage(UUGCPackage* Package);
}

class UUGCSubsystem : UEngineSubsystem
{
    bool forceNoMods;
    UUGCRegistry* UGCRegistry;
    bool ModioTermsAndConditionsAccepted;
    FUGCSubsystemOnModioUserAuthenticated OnModioUserAuthenticated;
    void UGCAuthenticatedModioUser(bool Authenticated);
    FUGCSubsystemOnErrorInstalling OnErrorInstalling;
    void UGInstallError(FString ModName, EUGCPackageError ErrorType);
    TMap<FString, EUGCPackageError> ModsFailedInstall;
    FUGCSubsystemOnModDownloadExtractProgress OnModDownloadExtractProgress;
    void UGCModProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    FUGCSubsystemOnModDownloadExtractProgressFinished OnModDownloadExtractProgressFinished;
    void UGModProgressDone(FString ModName, FString ModId);
    FUGCSubsystemOnModUninstallProgressFinished OnModUninstallProgressFinished;
    void UGModProgressDone(FString ModName, FString ModId);
    FUGCSubsystemOnModManagementStateChanged OnModManagementStateChanged;
    void UGCModManagementStateChanged(bool Enabled);
    bool IsModioModManagementEnabled;
    FUGCSubsystemOnLocalUserModsInstalled OnLocalUserModsInstalled;
    void UGCLocalUserModsInstalled();
    bool IsLocalUserModsInstalled;
    TArray<FString> CrashingDisabledMods;
    UUGCLatentActionManager* UGCLatentActionManager;
    TArray<UUGCPackage*> ModsPendingUninstall;
    TMap<int64, UTexture2DDynamic*> CachedThumbnails;
    TArray<EModioRequestType> ModioRequests;
    TArray<int64> ModioSubscribeRequestsIds;
    TArray<int64> ModioSubscribeDependecyRequestsIds;
    TArray<int64> ModioAddDependecyRequestsIds;

    void UGModProgressDone__DelegateSignature(FString ModName, FString ModId);
    void UGInstallError__DelegateSignature(FString ModName, EUGCPackageError ErrorType);
    void UGCModProgress__DelegateSignature(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void UGCModManagementStateChanged__DelegateSignature(bool Enabled);
    void UGCLocalUserModsInstalled__DelegateSignature();
    void UGCAuthenticatedModioUser__DelegateSignature(bool Authenticated);
    void SetPackagesAsRecentlyInstalled(TArray<UUGCPackage*> RecentMods);
    void SetModsAsRecentlyInstalled(TArray<FString> RecentMods);
    void SetCheckGameVersion(bool ShouldCheck);
    void RemoveRequestOfType(EModioRequestType requestType);
    void MarkRecentlyInstalledModsSuccesful();
    void K2_RequestTermsOfUse(UObject* WorldContext, FLatentActionInfo LatentInfo, UModioTermsWrapper*& outTerms);
    bool K2_RequestSubscribe(FString ModId);
    void K2_RequestModThumbnailById(UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId, UTexture2DDynamic*& outThumbnail);
    void K2_RequestModThumbnail(UObject* WorldContext, FLatentActionInfo LatentInfo, UUGCPackage* Package, UTexture2DDynamic*& outThumbnail);
    void K2_RequestModMetaData(UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModioStringID, UModioModInfoWrapper*& outModInfo);
    void K2_RequestModDependencyList(UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId, FString& outParentId, TArray<FString>& outModIds);
    void K2_RequestHasHostHiddenMods(UObject* WorldContext, FLatentActionInfo LatentInfo, TArray<FString> sHostModIds, TArray<FString> sClientModIds, bool& outHidden);
    void K2_RequestFetchModUpdates();
    void K2_RequestAuthentication();
    bool IsModPendingUninstall(UUGCPackage* InMod);
    bool HasOutstadingRequestOfType(EModioRequestType requestType);
    TArray<FString> GetNamesOfModsPendingUninstall();
    TArray<FString> GetNamesOfModsPendingInstall();
    bool GetCheckGameVersion();
    void EnableModioModManagement();
    void DisableModioModManagement();
    void ApplyPendingMods(bool FromJoining);
}

struct UMods
{
    TArray<FModDefinition> Mods;
}

struct UModDefinition
{
    FString Name;
    int32 Category;
    FString Version;
}

#endif
