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

struct UDefault__ScriptStruct
{
}

struct UJoinabilitySettings
{
    FName SessionName;
    bool bPublicSearchable;
    bool bAllowInvites;
    bool bJoinViaPresence;
    bool bJoinViaPresenceFriendsOnly;
    int32 MaxPlayers;
    int32 MaxPartySize;
}

struct UUniqueNetIdWrapper
{
}

struct UGuid
{
    int32 A;
    int32 B;
    int32 C;
    int32 D;
}

struct UVector
{
    float X;
    float Y;
    float Z;
}

struct UVector4
{
    float X;
    float Y;
    float Z;
    float W;
}

struct UVector2D
{
    float X;
    float Y;
}

struct UTwoVectors
{
    FVector v1;
    FVector v2;
}

struct UPlane : FVector
{
    float W;
}

struct URotator
{
    float Pitch;
    float Yaw;
    float Roll;
}

struct UQuat
{
    float X;
    float Y;
    float Z;
    float W;
}

struct UPackedNormal
{
    uint8 X;
    uint8 Y;
    uint8 Z;
    uint8 W;
}

struct UPackedRGB10A2N
{
    int32 Packed;
}

struct UPackedRGBA16N
{
    int32 XY;
    int32 ZW;
}

struct UIntPoint
{
    int32 X;
    int32 Y;
}

struct UIntVector
{
    int32 X;
    int32 Y;
    int32 Z;
}

struct UColor
{
    uint8 B;
    uint8 G;
    uint8 R;
    uint8 A;
}

struct ULinearColor
{
    float R;
    float G;
    float B;
    float A;
}

struct UBox
{
    FVector Min;
    FVector Max;
    uint8 IsValid;
}

struct UBox2D
{
    FVector2D Min;
    FVector2D Max;
    uint8 bIsValid;
}

struct UBoxSphereBounds
{
    FVector Origin;
    FVector BoxExtent;
    float SphereRadius;
}

struct UOrientedBox
{
    FVector Center;
    FVector AxisX;
    FVector AxisY;
    FVector AxisZ;
    float ExtentX;
    float ExtentY;
    float ExtentZ;
}

struct UMatrix
{
    FPlane XPlane;
    FPlane YPlane;
    FPlane ZPlane;
    FPlane WPlane;
}

struct UInterpCurvePointFloat
{
    float InVal;
    float OutVal;
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct UInterpCurveFloat
{
    TArray<FInterpCurvePointFloat> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct UInterpCurvePointVector2D
{
    float InVal;
    FVector2D OutVal;
    FVector2D ArriveTangent;
    FVector2D LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct UInterpCurveVector2D
{
    TArray<FInterpCurvePointVector2D> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct UInterpCurvePointVector
{
    float InVal;
    FVector OutVal;
    FVector ArriveTangent;
    FVector LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct UInterpCurveVector
{
    TArray<FInterpCurvePointVector> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct UInterpCurvePointQuat
{
    float InVal;
    FQuat OutVal;
    FQuat ArriveTangent;
    FQuat LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct UInterpCurveQuat
{
    TArray<FInterpCurvePointQuat> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct UInterpCurvePointTwoVectors
{
    float InVal;
    FTwoVectors OutVal;
    FTwoVectors ArriveTangent;
    FTwoVectors LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct UInterpCurveTwoVectors
{
    TArray<FInterpCurvePointTwoVectors> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct UInterpCurvePointLinearColor
{
    float InVal;
    FLinearColor OutVal;
    FLinearColor ArriveTangent;
    FLinearColor LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;
}

struct UInterpCurveLinearColor
{
    TArray<FInterpCurvePointLinearColor> Points;
    bool bIsLooped;
    float LoopKeyOffset;
}

struct UTransform
{
    FQuat Rotation;
    FVector Translation;
    FVector Scale3D;
}

struct URandomStream
{
    int32 InitialSeed;
    int32 Seed;
}

struct UDateTime
{
}

struct UFrameNumber
{
    int32 Value;
}

struct UFrameRate
{
    int32 Numerator;
    int32 Denominator;
}

struct UFrameTime
{
    FFrameNumber FrameNumber;
    float SubFrame;
}

struct UQualifiedFrameTime
{
    FFrameTime Time;
    FFrameRate Rate;
}

struct UTimecode
{
    int32 Hours;
    int32 Minutes;
    int32 Seconds;
    int32 Frames;
    bool bDropFrameFormat;
}

struct UTimespan
{
}

struct USoftObjectPath
{
    FName AssetPathName;
    FString SubPathString;
}

struct USoftClassPath : FSoftObjectPath
{
}

struct UPrimaryAssetType
{
    FName Name;
}

struct UPrimaryAssetId
{
    FPrimaryAssetType PrimaryAssetType;
    FName PrimaryAssetName;
}

struct UFallbackStruct
{
}

struct UFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    float Value;
}

struct UFloatRange
{
    FFloatRangeBound LowerBound;
    FFloatRangeBound UpperBound;
}

struct UInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    int32 Value;
}

struct UInt32Range
{
    FInt32RangeBound LowerBound;
    FInt32RangeBound UpperBound;
}

struct UFloatInterval
{
    float Min;
    float Max;
}

struct UInt32Interval
{
    int32 Min;
    int32 Max;
}

struct UPolyglotTextData
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

struct UAutomationEvent
{
    EAutomationEventType Type;
    FString Message;
    FString Context;
    FGuid Artifact;
}

struct UAutomationExecutionEntry
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
