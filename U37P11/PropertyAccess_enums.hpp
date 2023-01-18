enum class EPropertyAccessCopyBatch {
    InternalUnbatched = 0,
    ExternalUnbatched = 1,
    InternalBatched = 2,
    ExternalBatched = 3,
    Count = 4,
    EPropertyAccessCopyBatch_MAX = 5,
};

enum class EPropertyAccessCopyType {
    None = 0,
    Plain = 1,
    Complex = 2,
    Bool = 3,
    Struct = 4,
    Object = 5,
    Name = 6,
    Array = 7,
    PromoteBoolToByte = 8,
    PromoteBoolToInt32 = 9,
    PromoteBoolToInt64 = 10,
    PromoteBoolToFloat = 11,
    PromoteByteToInt32 = 12,
    PromoteByteToInt64 = 13,
    PromoteByteToFloat = 14,
    PromoteInt32ToInt64 = 15,
    PromoteInt32ToFloat = 16,
    EPropertyAccessCopyType_MAX = 17,
};

enum class EPropertyAccessIndirectionType {
    Offset = 0,
    Object = 1,
    Array = 2,
    ScriptFunction = 3,
    NativeFunction = 4,
    EPropertyAccessIndirectionType_MAX = 5,
};

enum class EPropertyAccessObjectType {
    None = 0,
    Object = 1,
    WeakObject = 2,
    SoftObject = 3,
    EPropertyAccessObjectType_MAX = 4,
};

