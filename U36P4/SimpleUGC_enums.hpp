enum class EUGCApprovalStatus {
    Fully = 0,
    Progression = 1,
    Sandbox = 2,
    All = 255,
    EUGCApprovalStatus_MAX = 256,
};

enum class EPackageSortField {
    None = 0,
    Name = 1,
    Status = 2,
    Author = 3,
    Mounted = 4,
    EPackageSortField_MAX = 5,
};

enum class EModioRequestType {
    InitializeLocalInstallation = 0,
    Authentication = 1,
    K2_Authentication = 2,
    TermsOfUse = 3,
    FetchModUpdates = 4,
    ModMetaData = 5,
    Thumbnail = 6,
    K2_HostHiddenModsInstalled = 7,
    HostHiddenModsInstalled = 8,
    Subscribe = 9,
    ModDependencySubscribe = 10,
    ModDependencyList = 11,
    ModDependencyAdd = 12,
    EModioRequestType_MAX = 13,
};

enum class EUGCPackageError {
    Exists = 0,
    Invalid = 1,
    Other = 2,
    EUGCPackageError_MAX = 3,
};

enum class EUGCDownloadVersion {
    Optional = 0,
    Required = 1,
    All = 255,
    EUGCDownloadVersion_MAX = 256,
};

enum class EUGCBlueprintSpawning {
    Spacerig = 0,
    Cave = 1,
    Other = 2,
    EUGCBlueprintSpawning_MAX = 3,
};

