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
    Authentication = 0,
    K2_Authentication = 1,
    TermsOfUse = 2,
    FetchModUpdates = 3,
    ModMetaData = 4,
    Thumbnail = 5,
    K2_HostHiddenModsInstalled = 6,
    HostHiddenModsInstalled = 7,
    Subscribe = 8,
    ModDependencySubscribe = 9,
    ModDependencyList = 10,
    ModDependencyAdd = 11,
    EModioRequestType_MAX = 12,
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

