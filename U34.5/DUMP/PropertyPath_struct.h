// ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x28 (Inherited: 0x00)
struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x00(0x10)
	UFunction* CachedFunction; // 0x18(0x08)
};

// ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x28 (Inherited: 0x00)
struct FPropertyPathSegment {
	FName Name; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	UStruct* Struct; // 0x10(0x08)
};

