enum class EGameplayContainerMatchType {
    Any = 0,
    All = 1,
    EGameplayContainerMatchType_MAX = 2,
};

namespace EGameplayTagMatchType {
    enum Type {
        Explicit = 0,
        IncludeParentTags = 1,
        EGameplayTagMatchType_MAX = 2,
    };
}

namespace EGameplayTagQueryExprType {
    enum Type {
        Undefined = 0,
        AnyTagsMatch = 1,
        AllTagsMatch = 2,
        NoTagsMatch = 3,
        AnyExprMatch = 4,
        AllExprMatch = 5,
        NoExprMatch = 6,
        EGameplayTagQueryExprType_MAX = 7,
    };
}

enum class EGameplayTagSelectionType {
    None = 0,
    NonRestrictedOnly = 1,
    RestrictedOnly = 2,
    All = 3,
    EGameplayTagSelectionType_MAX = 4,
};

enum class EGameplayTagSourceType {
    Native = 0,
    DefaultTagList = 1,
    TagList = 2,
    RestrictedTagList = 3,
    DataTable = 4,
    Invalid = 5,
    EGameplayTagSourceType_MAX = 6,
};

