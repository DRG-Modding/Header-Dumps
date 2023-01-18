#ifndef UE4SS_SDK_Serialization_HPP
#define UE4SS_SDK_Serialization_HPP

struct FStructSerializerArrayTestStruct
{
    TArray<int32> Int32Array;
    TArray<uint8> ByteArray;
    int32 StaticSingleElement;
    int32 StaticInt32Array;
    float StaticFloatArray;
    TArray<FVector> VectorArray;
    TArray<FStructSerializerBuiltinTestStruct> StructArray;

};

struct FStructSerializerBooleanTestStruct
{
    bool BoolFalse;
    bool BoolTrue;
    uint8 Bitfield0;
    uint8 Bitfield1;
    uint8 Bitfield2Set;
    uint8 Bitfield3;
    uint8 Bitfield4Set;
    uint8 Bitfield5Set;
    uint8 Bitfield6;
    uint8 Bitfield7Set;

};

struct FStructSerializerBuiltinTestStruct
{
    FGuid Guid;
    FName Name;
    FString String;
    FText Text;
    FVector Vector;
    FVector4 Vector4;
    FRotator Rotator;
    FQuat Quat;
    FColor Color;

};

struct FStructSerializerByteArray
{
    int32 Dummy1;
    TArray<uint8> ByteArray;
    int32 Dummy2;
    TArray<int8> Int8Array;
    int32 Dummy3;

};

struct FStructSerializerMapTestStruct
{
    TMap<int32, FString> IntToStr;
    TMap<class FString, class FString> StrToStr;
    TMap<class FString, class FVector> StrToVec;
    TMap<class FString, class FStructSerializerBuiltinTestStruct> StrToStruct;

};

struct FStructSerializerNumericTestStruct
{
    int8 Int8;
    int16 Int16;
    int32 Int32;
    int64 Int64;
    uint8 UInt8;
    uint16 UInt16;
    uint32 UInt32;
    uint64 UInt64;
    float Float;
    double Double;

};

struct FStructSerializerObjectTestStruct
{
    UClass* Class;
    TSubclassOf<class UMetaData> SubClass;
    TSoftClassPtr<UMetaData> SoftClass;
    class UObject* Object;
    TWeakObjectPtr<class UMetaData> WeakObject;
    TSoftObjectPtr<UMetaData> SoftObject;
    FSoftClassPath ClassPath;
    FSoftObjectPath ObjectPath;

};

struct FStructSerializerSetTestStruct
{
    TSet<FString> StrSet;
    TSet<int32> IntSet;
    TSet<FName> NameSet;
    TSet<FStructSerializerBuiltinTestStruct> StructSet;

};

struct FStructSerializerTestStruct
{
    FStructSerializerNumericTestStruct Numerics;
    FStructSerializerBooleanTestStruct Booleans;
    FStructSerializerObjectTestStruct Objects;
    FStructSerializerBuiltinTestStruct Builtins;
    FStructSerializerArrayTestStruct Arrays;
    FStructSerializerMapTestStruct Maps;
    FStructSerializerSetTestStruct Sets;

};

#endif
