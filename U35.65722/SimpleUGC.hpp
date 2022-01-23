#ifndef UE4SS_SDK_SimpleUGC_HPP
#define UE4SS_SDK_SimpleUGC_HPP

#include "SimpleUGC_enums.hpp"

class UMakeReplaceableActorComponent : public UActorComponent
{
    TSubclassOf<class AActor> CompatibleReplacement;
};

class UReplacementActorComponent : public UActorComponent
{
    TArray<class TSubclassOf<AActor>> ActorClassesToReplace;
};

class UUGCBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class UUGCRegistry* GetUGCRegistry(class UObject* WorldContextObject);
};

class UModioModInfoWrapper : public UObject
{
    FString ModId;
    FString ModName;
    FString ModURL;
    FString ModAuthor;
    FString ModVersion;
    FString ModDescription;
    EUGCApprovalStatus Status;

    bool IsModIdInvalid();
};

class UModioTermsWrapper : public UObject
{
    FString AgreeButtonText;
    FString DisagreeButtonText;
    FString TermsLink;
    FString TermsText;
    FString PrivacyLink;
    FString PrivacyText;
    FString TermsOfUseText;

    bool isEmpty();
};

class UUGCLatentActionManager : public UObject
{
};

class UUGCPackage : public UObject
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
};

class UUGCRegistry : public UObject
{
    FUGCRegistryOnPackageMounted OnPackageMounted;
    void UGCPackageMounted(bool Sandbox);
    TArray<class UUGCPackage*> UGCPackages;
    TMap<class TSubclassOf<AActor>, class TSubclassOf<AActor>> RegisteredOverrides;
    bool PackageChange;
    TArray<class UUGCPackage*> UGCPackagesInstalledDuringJoin;
    TArray<class UUGCPackage*> UGCPackagesUnmountedDuringJoin;

    void UnmountUGCPackages(TArray<FString> ExcludingModIds);
    bool UnmountUGCPackage(class UUGCPackage* Package, bool RemoveFromUserSettings);
    void UnmountSandboxUGCPackages();
    void UnmountAllNonVerifiedUGCPackages();
    void UGCPackageMounted__DelegateSignature(bool Sandbox);
    class UUGCPackage* TryGetPackageFromId(FString ModId);
    void ResetUGCPackagesManipulatedDuringJoin();
    void RegisterOverrideForClass(TSubclassOf<class AActor> ClassToOverride, TSubclassOf<class AActor> OverrideClass);
    void RegisterAssetFromPackage(class UUGCPackage* Package);
    int32 NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus);
    bool MountUGCPackage(class UUGCPackage* Package, bool FromJoining);
    bool IsModToBeEnabled(int64 ModId);
    bool IsModInstalledImprecise(FString ModName, bool IncludeDeprecatedLocation);
    bool IsModInstalledByIdOrName(FString ModIdOrName, bool IncludeDeprecatedLocation);
    bool IsModInstalled(FString ModId);
    bool IsModEnabled(FString ModId);
    TArray<class UUGCPackage*> GetPackagesWhichDependsOnPackage(class UUGCPackage* Package);
    TArray<class UUGCPackage*> GetPackagesSorted(EPackageSortField ByField, bool Ascending);
    TSubclassOf<class AActor> GetOverrideForActorClass(TSubclassOf<class AActor> ActorClass);
    bool GetMapsInPackage(class UUGCPackage* Package, TArray<FName>& Maps);
    bool GetAllClassesInPackage(class UUGCPackage* Package, TArray<class UClass*>& Classes);
    bool GetActorClassesWithReplacementActorComponentsInPackage(class UUGCPackage* Package, TArray<class TSubclassOf<AActor>>& ActorClasses);
    void ClearOverrideForClass(TSubclassOf<class AActor> ActorClass);
    bool AreModsInstalled(EUGCApprovalStatus ApprovalStatus);
    bool AreDeprecatedModsInstalled();
    bool ApplyOverridesForActorClass(TSubclassOf<class AActor> ActorClass);
    bool ApplyAllOverridesInPackage(class UUGCPackage* Package);
};

class UUGCSubsystem : public UEngineSubsystem
{
    bool forceNoMods;
    class UUGCRegistry* UGCRegistry;
    bool ModioTermsAndConditionsAccepted;
    FUGCSubsystemOnModioUserAuthenticated OnModioUserAuthenticated;
    void UGCAuthenticatedModioUser(bool Authenticated);
    FUGCSubsystemOnErrorInstalling OnErrorInstalling;
    void UGInstallError(FString ModName, EUGCPackageError ErrorType);
    TMap<class FString, class EUGCPackageError> ModsFailedInstall;
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
    class UUGCLatentActionManager* UGCLatentActionManager;
    TArray<class UUGCPackage*> ModsPendingUninstall;
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
    void SetPackagesAsRecentlyInstalled(TArray<class UUGCPackage*> RecentMods);
    void SetModsAsRecentlyInstalled(TArray<FString> RecentMods);
    void SetCheckGameVersion(bool ShouldCheck);
    void RemoveRequestOfType(EModioRequestType requestType);
    void MarkRecentlyInstalledModsSuccesful();
    void K2_RequestTermsOfUse(class UObject* WorldContext, FLatentActionInfo LatentInfo, class UModioTermsWrapper*& outTerms);
    bool K2_RequestSubscribe(FString ModId);
    void K2_RequestModThumbnailById(class UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId, class UTexture2DDynamic*& outThumbnail);
    void K2_RequestModThumbnail(class UObject* WorldContext, FLatentActionInfo LatentInfo, class UUGCPackage* Package, class UTexture2DDynamic*& outThumbnail);
    void K2_RequestModMetaData(class UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModioStringID, class UModioModInfoWrapper*& outModInfo);
    void K2_RequestModDependencyList(class UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId, FString& outParentId, TArray<FString>& outModIds);
    void K2_RequestHasHostHiddenMods(class UObject* WorldContext, FLatentActionInfo LatentInfo, TArray<FString> sHostModIds, TArray<FString> sClientModIds, bool& outHidden);
    void K2_RequestFetchModUpdates();
    void K2_RequestAuthentication();
    bool IsModPendingUninstall(class UUGCPackage* InMod);
    bool HasOutstadingRequestOfType(EModioRequestType requestType);
    TArray<FString> GetNamesOfModsPendingUninstall();
    TArray<FString> GetNamesOfModsPendingInstall();
    bool GetCheckGameVersion();
    void EnableModioModManagement();
    void DisableModioModManagement();
    void ApplyPendingMods(bool FromJoining);
};

struct FModDefinition
{
    FString Name;
    int32 Category;
    FString Version;
};

struct FMods
{
    TArray<FModDefinition> Mods;
};

#endif
