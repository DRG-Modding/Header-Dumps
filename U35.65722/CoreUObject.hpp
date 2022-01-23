#ifndef UE4SS_SDK_CoreUObject_HPP
#define UE4SS_SDK_CoreUObject_HPP

#include "CoreUObject_enums.hpp"

class UObject
{

    void ExecuteUbergraph(int32 EntryPoint);
};

struct FUniqueNetIdWrapper
{
};

class IInterface : public UObject
{
};

struct FDateTime
{
};

struct FVector
{
    float X;
    float Y;
    float Z;
};

struct FRotator
{
    float Pitch;
    float Yaw;
    float Roll;
};

struct FQuat
{
    float X;
    float Y;
    float Z;
    float W;
};

struct FTransform
{
    FQuat Rotation;
    FVector Translation;
    FVector Scale3D;
};

struct FGuid
{
    int32 A;
    int32 B;
    int32 C;
    int32 D;
};

struct FVector2D
{
    float X;
    float Y;
};

struct FLinearColor
{
    float R;
    float G;
    float B;
    float A;
};

struct FBox2D
{
    FVector2D Min;
    FVector2D Max;
    uint8 bIsValid;
};

struct FFrameNumber
{
    int32 Value;
};

struct FVector4
{
    float X;
    float Y;
    float Z;
    float W;
};

struct FBox
{
    FVector Min;
    FVector Max;
    uint8 IsValid;
};

struct FIntVector
{
    int32 X;
    int32 Y;
    int32 Z;
};

struct FSoftObjectPath
{
    FName AssetPathName;
    FString SubPathString;
};

class UPackage : public UObject
{
};

class UField : public UObject
{
};

class UStruct : public UField
{
};

class UClass : public UStruct
{
};

struct FBoxSphereBounds
{
    FVector Origin;
    FVector BoxExtent;
    float SphereRadius;
};

struct FPlane : public FVector
{
    float W;
};

struct FMatrix
{
    FPlane XPlane;
    FPlane YPlane;
    FPlane ZPlane;
    FPlane WPlane;
};

struct FSoftClassPath : public FSoftObjectPath
{
};

struct FColor
{
    uint8 B;
    uint8 G;
    uint8 R;
    uint8 A;
};

struct FFrameRate
{
    int32 Numerator;
    int32 Denominator;
};

struct FFrameTime
{
    FFrameNumber FrameNumber;
    float SubFrame;
};

struct FQualifiedFrameTime
{
    FFrameTime Time;
    FFrameRate Rate;
};

struct FFloatInterval
{
    float Min;
    float Max;
};

struct FTimespan
{
};

struct FRandomStream
{
    int32 InitialSeed;
    int32 Seed;
};

struct FIntPoint
{
    int32 X;
    int32 Y;
};

struct FInt32Interval
{
    int32 Min;
    int32 Max;
};

struct FFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    float Value;
};

struct FFloatRange
{
    FFloatRangeBound LowerBound;
    FFloatRangeBound UpperBound;
};

struct FInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    int32 Value;
};

struct FInt32Range
{
    FInt32RangeBound LowerBound;
    FInt32RangeBound UpperBound;
};

class UGCObjectReferencer : public UObject
{
};

class UTextBuffer : public UObject
{
};

class UScriptStruct : public UStruct
{
};

class UFunction : public UStruct
{
};

class UDelegateFunction : public UFunction
{
};

class USparseDelegateFunction : public UDelegateFunction
{
};

class UDynamicClass : public UClass
{
};

class UPackageMap : public UObject
{
};

class UEnum : public UField
{
};

class ULinkerPlaceholderClass : public UClass
{
};

class ULinkerPlaceholderExportObject : public UObject
{
};

class ULinkerPlaceholderFunction : public UFunction
{
};

class UMetaData : public UObject
{
};

class UObjectRedirector : public UObject
{
};

class UProperty : public UField
{
};

class UEnumProperty : public UProperty
{
};

class UArrayProperty : public UProperty
{
};

class UObjectPropertyBase : public UProperty
{
};

class UBoolProperty : public UProperty
{
};

class UNumericProperty : public UProperty
{
};

class UByteProperty : public UNumericProperty
{
};

class UObjectProperty : public UObjectPropertyBase
{
};

class UClassProperty : public UObjectProperty
{
};

class UDelegateProperty : public UProperty
{
};

class UDoubleProperty : public UNumericProperty
{
};

class UFloatProperty : public UNumericProperty
{
};

class UIntProperty : public UNumericProperty
{
};

class UInt8Property : public UNumericProperty
{
};

class UInt16Property : public UNumericProperty
{
};

class UInt64Property : public UNumericProperty
{
};

class UInterfaceProperty : public UProperty
{
};

class ULazyObjectProperty : public UObjectPropertyBase
{
};

class UMapProperty : public UProperty
{
};

class UMulticastDelegateProperty : public UProperty
{
};

class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
};

class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
};

class UNameProperty : public UProperty
{
};

class USetProperty : public UProperty
{
};

class USoftObjectProperty : public UObjectPropertyBase
{
};

class USoftClassProperty : public USoftObjectProperty
{
};

class UStrProperty : public UProperty
{
};

class UStructProperty : public UProperty
{
};

class UUInt16Property : public UNumericProperty
{
};

class UUInt32Property : public UNumericProperty
{
};

class UUInt64Property : public UNumericProperty
{
};

class UWeakObjectProperty : public UObjectPropertyBase
{
};

class UTextProperty : public UProperty
{
};

class UPropertyWrapper : public UObject
{
};

class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
};

class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
};

struct FInterpCurvePointVector
{
    float InVal;
    FVector OutVal;
    FVector ArriveTangent;
    FVector LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
};

struct FInterpCurveVector
{
    TArray<FInterpCurvePointVector> Points;
    bool bIsLooped;
    float LoopKeyOffset;
};

struct FTimecode
{
    int32 Hours;
    int32 Minutes;
    int32 Seconds;
    int32 Frames;
    bool bDropFrameFormat;
};

struct FPrimaryAssetType
{
    FName Name;
};

struct FPrimaryAssetId
{
    FPrimaryAssetType PrimaryAssetType;
    FName PrimaryAssetName;
};

struct FInterpCurvePointFloat
{
    float InVal;
    float OutVal;
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
};

struct FInterpCurveFloat
{
    TArray<FInterpCurvePointFloat> Points;
    bool bIsLooped;
    float LoopKeyOffset;
};

struct FInterpCurvePointVector2D
{
    float InVal;
    FVector2D OutVal;
    FVector2D ArriveTangent;
    FVector2D LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
};

struct FInterpCurveVector2D
{
    TArray<FInterpCurvePointVector2D> Points;
    bool bIsLooped;
    float LoopKeyOffset;
};

struct FTwoVectors
{
    FVector v1;
    FVector v2;
};

struct FInterpCurvePointTwoVectors
{
    float InVal;
    FTwoVectors OutVal;
    FTwoVectors ArriveTangent;
    FTwoVectors LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
};

struct FInterpCurveTwoVectors
{
    TArray<FInterpCurvePointTwoVectors> Points;
    bool bIsLooped;
    float LoopKeyOffset;
};

struct FInterpCurvePointLinearColor
{
    float InVal;
    FLinearColor OutVal;
    FLinearColor ArriveTangent;
    FLinearColor LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
};

struct FInterpCurveLinearColor
{
    TArray<FInterpCurvePointLinearColor> Points;
    bool bIsLooped;
    float LoopKeyOffset;
};

struct FPolyglotTextData
{
    ELocalizedTextSourceCategory Category;
    FString NativeCulture;
    FString Namespace;
    FString Key;
    FString NativeString;
    TMap<class FString, class FString> LocalizedStrings;
    bool bIsMinimalPatch;
    FText CachedText;
};

struct FInterpCurvePointQuat
{
    float InVal;
    FQuat OutVal;
    FQuat ArriveTangent;
    FQuat LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
};

struct FInterpCurveQuat
{
    TArray<FInterpCurvePointQuat> Points;
    bool bIsLooped;
    float LoopKeyOffset;
};

struct FDefault__ScriptStruct
{
};

struct FJoinabilitySettings
{
    FName SessionName;
    bool bPublicSearchable;
    bool bAllowInvites;
    bool bJoinViaPresence;
    bool bJoinViaPresenceFriendsOnly;
    int32 MaxPlayers;
    int32 MaxPartySize;
};

struct FPackedNormal
{
    uint8 X;
    uint8 Y;
    uint8 Z;
    uint8 W;
};

struct FPackedRGB10A2N
{
    int32 Packed;
};

struct FPackedRGBA16N
{
    int32 XY;
    int32 ZW;
};

struct FOrientedBox
{
    FVector Center;
    FVector AxisX;
    FVector AxisY;
    FVector AxisZ;
    float ExtentX;
    float ExtentY;
    float ExtentZ;
};

struct FFallbackStruct
{
};

struct FAutomationEvent
{
    EAutomationEventType Type;
    FString Message;
    FString Context;
    FGuid Artifact;
};

struct FAutomationExecutionEntry
{
    FAutomationEvent Event;
    FString Filename;
    int32 LineNumber;
    FDateTime Timestamp;
};

class UDefault__Class
{
};

class UDefault__DynamicClass
{
};

class UDefault__LinkerPlaceholderClass
{
};

#endif
