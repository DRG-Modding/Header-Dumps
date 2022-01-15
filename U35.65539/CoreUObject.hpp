#ifndef UE4SS_SDK_CoreUObject_HPP
#define UE4SS_SDK_CoreUObject_HPP

#include "CoreUObject_enums.hpp"

class UObject
{

    void ExecuteUbergraph(int32 EntryPoint);
}

class UInterface : UObject
{
}

class UPackage : UObject
{
}

class UField : UObject
{
}

class UStruct : UField
{
}

class UClass : UStruct
{
}

class UGCObjectReferencer : UObject
{
}

class UTextBuffer : UObject
{
}

class UScriptStruct : UStruct
{
}

class UFunction : UStruct
{
}

class UDelegateFunction : UFunction
{
}

class USparseDelegateFunction : UDelegateFunction
{
}

class UDynamicClass : UClass
{
}

class UPackageMap : UObject
{
}

class UEnum : UField
{
}

class ULinkerPlaceholderClass : UClass
{
}

class ULinkerPlaceholderExportObject : UObject
{
}

class ULinkerPlaceholderFunction : UFunction
{
}

class UMetaData : UObject
{
}

class UObjectRedirector : UObject
{
}

class UProperty : UField
{
}

class UEnumProperty : UProperty
{
}

class UArrayProperty : UProperty
{
}

class UObjectPropertyBase : UProperty
{
}

class UBoolProperty : UProperty
{
}

class UNumericProperty : UProperty
{
}

class UByteProperty : UNumericProperty
{
}

class UObjectProperty : UObjectPropertyBase
{
}

class UClassProperty : UObjectProperty
{
}

class UDelegateProperty : UProperty
{
}

class UDoubleProperty : UNumericProperty
{
}

class UFloatProperty : UNumericProperty
{
}

class UIntProperty : UNumericProperty
{
}

class UInt8Property : UNumericProperty
{
}

class UInt16Property : UNumericProperty
{
}

class UInt64Property : UNumericProperty
{
}

class UInterfaceProperty : UProperty
{
}

class ULazyObjectProperty : UObjectPropertyBase
{
}

class UMapProperty : UProperty
{
}

class UMulticastDelegateProperty : UProperty
{
}

class UMulticastInlineDelegateProperty : UMulticastDelegateProperty
{
}

class UMulticastSparseDelegateProperty : UMulticastDelegateProperty
{
}

class UNameProperty : UProperty
{
}

class USetProperty : UProperty
{
}

class USoftObjectProperty : UObjectPropertyBase
{
}

class USoftClassProperty : USoftObjectProperty
{
}

class UStrProperty : UProperty
{
}

class UStructProperty : UProperty
{
}

class UUInt16Property : UNumericProperty
{
}

class UUInt32Property : UNumericProperty
{
}

class UUInt64Property : UNumericProperty
{
}

class UWeakObjectProperty : UObjectPropertyBase
{
}

class UTextProperty : UProperty
{
}

class UPropertyWrapper : UObject
{
}

class UMulticastDelegatePropertyWrapper : UPropertyWrapper
{
}

class UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper
{
}

struct FDefault__ScriptStruct
{
}

struct FJoinabilitySettings
{
    FName SessionName;
    bool bPublicSearchable;
    bool bAllowInvites;
    bool bJoinViaPresence;
    bool bJoinViaPresenceFriendsOnly;
    int32 MaxPlayers;
    int32 MaxPartySize;
}

struct FUniqueNetIdWrapper
{
}

struct FGuid
{
    int32 A;
    int32 B;
    int32 C;
    int32 D;
}

struct FVector
{
    float X;
    float Y;
    float Z;
}

struct FVector4
{
    float X;
    float Y;
    float Z;
    float W;
}

struct FVector2D
{
    float X;
    float Y;
}

struct FTwoVectors
{
    FVector v1;
    FVector v2;
}

struct FPlane : FVector
{
    float W;
}

struct FRotator
{
    float Pitch;
    float Yaw;
    float Roll;
}

struct FQuat
{
    float X;
    float Y;
    float Z;
    float W;
}

struct FPackedNormal
{
    uint8 X;
    uint8 Y;
    uint8 Z;
    uint8 W;
}

struct FPackedRGB10A2N
{
    int32 Packed;
}

struct FPackedRGBA16N
{
    int32 XY;
    int32 ZW;
}

struct FIntPoint
{
    int32 X;
    int32 Y;
}

struct FIntVector
{
    int32 X;
    int32 Y;
    int32 Z;
}

struct FColor
{
    uint8 B;
    uint8 G;
    uint8 R;
    uint8 A;
}

struct FLinearColor
{
    float R;
    float G;
    float B;
    float A;
}

struct FBox
{
    FVector Min;
    FVector Max;
    uint8 IsValid;
}

struct FBox2D
{
    FVector2D Min;
    FVector2D Max;
    uint8 bIsValid;
}

struct FBoxSphereBounds
{
    FVector Origin;
    FVector BoxExtent;
    float SphereRadius;
}

struct FOrientedBox
{
    FVector Center;
    FVector AxisX;
    FVector AxisY;
    FVector AxisZ;
    float ExtentX;
    float ExtentY;
    float ExtentZ;
}

struct FMatrix
{
    FPlane XPlane;
    FPlane YPlane;
    FPlane ZPlane;
    FPlane WPlane;
}

struct FInterpCurvePointFloat
{
    float InVal;
    float OutVal;
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct FInterpCurveFloat
{
    TArray<FInterpCurvePointFloat> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct FInterpCurvePointVector2D
{
    float InVal;
    FVector2D OutVal;
    FVector2D ArriveTangent;
    FVector2D LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct FInterpCurveVector2D
{
    TArray<FInterpCurvePointVector2D> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct FInterpCurvePointVector
{
    float InVal;
    FVector OutVal;
    FVector ArriveTangent;
    FVector LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct FInterpCurveVector
{
    TArray<FInterpCurvePointVector> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct FInterpCurvePointQuat
{
    float InVal;
    FQuat OutVal;
    FQuat ArriveTangent;
    FQuat LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct FInterpCurveQuat
{
    TArray<FInterpCurvePointQuat> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct FInterpCurvePointTwoVectors
{
    float InVal;
    FTwoVectors OutVal;
    FTwoVectors ArriveTangent;
    FTwoVectors LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct FInterpCurveTwoVectors
{
    TArray<FInterpCurvePointTwoVectors> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct FInterpCurvePointLinearColor
{
    float InVal;
    FLinearColor OutVal;
    FLinearColor ArriveTangent;
    FLinearColor LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct FInterpCurveLinearColor
{
    TArray<FInterpCurvePointLinearColor> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct FTransform
{
    FQuat Rotation;
    FVector Translation;
    FVector Scale3D;
}

struct FRandomStream
{
    int32 InitialSeed;
    int32 Seed;
}

struct FDateTime
{
}

struct FFrameNumber
{
    int32 Value;
}

struct FFrameRate
{
    int32 Numerator;
    int32 Denominator;
}

struct FFrameTime
{
    FFrameNumber FrameNumber;
    float SubFrame;
}

struct FQualifiedFrameTime
{
    FFrameTime Time;
    FFrameRate Rate;
}

struct FTimecode
{
    int32 Hours;
    int32 Minutes;
    int32 Seconds;
    int32 Frames;
    bool bDropFrameFormat;
}

struct FTimespan
{
}

struct FSoftObjectPath
{
    FName AssetPathName;
    FString SubPathString;
}

struct FSoftClassPath : FSoftObjectPath
{
}

struct FPrimaryAssetType
{
    FName Name;
}

struct FPrimaryAssetId
{
    FPrimaryAssetType PrimaryAssetType;
    FName PrimaryAssetName;
}

struct FFallbackStruct
{
}

struct FFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    float Value;
}

struct FFloatRange
{
    FFloatRangeBound LowerBound;
    FFloatRangeBound UpperBound;
}

struct FInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    int32 Value;
}

struct FInt32Range
{
    FInt32RangeBound LowerBound;
    FInt32RangeBound UpperBound;
}

struct FFloatInterval
{
    float Min;
    float Max;
}

struct FInt32Interval
{
    int32 Min;
    int32 Max;
}

struct FPolyglotTextData
{
    ELocalizedTextSourceCategory Category;
    FString NativeCulture;
    FString Namespace;
    FString Key;
    FString NativeString;
    TMap<FString, FString> LocalizedStrings;
    bool bIsMinimalPatch;
    FText CachedText;
}

struct FAutomationEvent
{
    EAutomationEventType Type;
    FString Message;
    FString Context;
    FGuid Artifact;
}

struct FAutomationExecutionEntry
{
    FAutomationEvent Event;
    FString Filename;
    int32 LineNumber;
    FDateTime Timestamp;
}

class UDefault__Class
{
}

class UDefault__DynamicClass
{
}

class UDefault__LinkerPlaceholderClass
{
}

#endif
