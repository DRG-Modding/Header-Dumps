enum class EModioRequestType {
    Authentication = 0,
    K2_Authentication = 1,
    TermsOfUse = 2,
    FetchModUpdates = 3,
    ModMetaData = 4,
    Thumbnail = 5,
    Subscribe = 6,
    ModDependencySubscribe = 7,
    ModDependencyList = 8,
    ModDependencyAdd = 9,
    EModioRequestType_MAX = 10,
};

enum class EPackageSortField {
    None = 0,
    Name = 1,
    Status = 2,
    Author = 3,
    Mounted = 4,
    EPackageSortField_MAX = 5,
};

enum class EUGCApprovalStatus {
    Fully = 0,
    Progression = 1,
    Sandbox = 2,
    All = 255,
    EUGCApprovalStatus_MAX = 256,
};

enum class EUGCBlueprintSpawning {
    Spacerig = 0,
    Cave = 1,
    Other = 2,
    EUGCBlueprintSpawning_MAX = 3,
};

enum class EUGCDownloadVersion {
    Optional = 0,
    Required = 1,
    All = 255,
    EUGCDownloadVersion_MAX = 256,
};

enum class EUGCPackageError {
    Exists = 0,
    Invalid = 1,
    Other = 2,
    EUGCPackageError_MAX = 3,
};

