// ScriptStruct Serialization.StructSerializerTestStruct
// Size: 0x450 (Inherited: 0x00)
struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x00(0x30)
	FStructSerializerBooleanTestStruct Booleans; // 0x30(0x03)
	FStructSerializerObjectTestStruct Objects; // 0x38(0xa0)
	FStructSerializerBuiltinTestStruct Builtins; // 0xe0(0x90)
	FStructSerializerArrayTestStruct Arrays; // 0x170(0x60)
	FStructSerializerMapTestStruct Maps; // 0x1d0(0x140)
	FStructSerializerSetTestStruct Sets; // 0x310(0x140)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x00(0x50)
	TSet<int32_t> IntSet; // 0x50(0x50)
	TSet<FName> NameSet; // 0xa0(0x50)
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0(0x50)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size: 0x90 (Inherited: 0x00)
struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x00(0x10)
	FName Name; // 0x10(0x08)
	FString String; // 0x18(0x10)
	FText Text; // 0x28(0x18)
	FVector Vector; // 0x40(0x0c)
	FVector4 Vector4; // 0x50(0x10)
	FRotator Rotator; // 0x60(0x0c)
	FQuat Quat; // 0x70(0x10)
	FColor Color; // 0x80(0x04)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x00(0x50)
	TMap<FString, FString> StrToStr; // 0x50(0x50)
	TMap<FString, FVector> StrToVec; // 0xa0(0x50)
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0(0x50)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size: 0x60 (Inherited: 0x00)
struct FStructSerializerArrayTestStruct {
	TArray<int32_t> Int32Array; // 0x00(0x10)
	TArray<char> ByteArray; // 0x10(0x10)
	int32_t StaticSingleElement; // 0x20(0x04)
	int32_t StaticInt32Array[0x3]; // 0x24(0x0c)
	float StaticFloatArray[0x3]; // 0x30(0x0c)
	TArray<FVector> VectorArray; // 0x40(0x10)
	TArray<FStructSerializerBuiltinTestStruct> StructArray; // 0x50(0x10)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size: 0xa0 (Inherited: 0x00)
struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x00(0x08)
	UMetaData* SubClass; // 0x08(0x08)
	TSoftClassPtr<UObject> SoftClass; // 0x10(0x28)
	UObject* Object; // 0x38(0x08)
	TWeakObjectPtr<UMetaData> WeakObject; // 0x40(0x08)
	TSoftObjectPtr<UMetaData> SoftObject; // 0x48(0x28)
	FSoftClassPath ClassPath; // 0x70(0x18)
	FSoftObjectPath ObjectPath; // 0x88(0x18)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size: 0x03 (Inherited: 0x00)
struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x00(0x01)
	bool BoolTrue; // 0x01(0x01)
	char Bitfield0 : 1; // 0x02(0x01)
	char Bitfield1 : 1; // 0x02(0x01)
	char Bitfield2Set : 1; // 0x02(0x01)
	char Bitfield3 : 1; // 0x02(0x01)
	char Bitfield4Set : 1; // 0x02(0x01)
	char Bitfield5Set : 1; // 0x02(0x01)
	char Bitfield6 : 1; // 0x02(0x01)
	char Bitfield7Set : 1; // 0x02(0x01)
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size: 0x30 (Inherited: 0x00)
struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x00(0x01)
	int16_t Int16; // 0x02(0x02)
	int32_t Int32; // 0x04(0x04)
	int64_t Int64; // 0x08(0x08)
	char UInt8; // 0x10(0x01)
	uint16_t UInt16; // 0x12(0x02)
	uint32_t UInt32; // 0x14(0x04)
	uint64_t UInt64; // 0x18(0x08)
	float Float; // 0x20(0x04)
	double Double; // 0x28(0x08)
};

// ScriptStruct Serialization.StructSerializerByteArray
// Size: 0x38 (Inherited: 0x00)
struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x00(0x04)
	TArray<char> ByteArray; // 0x08(0x10)
	int32_t Dummy2; // 0x18(0x04)
	TArray<int8_t> Int8Array; // 0x20(0x10)
	int32_t Dummy3; // 0x30(0x04)
};

