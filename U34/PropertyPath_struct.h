// ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x28 (Inherited: 0x00)
struct FCachedPropertyPath {
	struct TArray<struct FPropertyPathSegment> Segments; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
	struct UFunction* CachedFunction; // 0x18(0x08)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x28 (Inherited: 0x00)
struct FPropertyPathSegment {
	struct FName Name; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	char UnknownData_18[0x10]; // 0x18(0x10)
};

