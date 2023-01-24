#ifndef UE4SS_SDK_CoreUObject_HPP
#define UE4SS_SDK_CoreUObject_HPP

#include "CoreUObject_enums.hpp"

struct FARFilter
{
    TArray<FName> PackageNames;
    TArray<FName> PackagePaths;
    TArray<FName> ObjectPaths;
    TArray<FName> ClassNames;
    TSet<FName> RecursiveClassesExclusionSet;
    bool bRecursivePaths;
    bool bRecursiveClasses;
    bool bIncludeOnlyOnDiskAssets;

};

struct FAssetBundleData
{
    TArray<FAssetBundleEntry> Bundles;

};

struct FAssetBundleEntry
{
    FName BundleName;
    TArray<FSoftObjectPath> BundleAssets;

};

struct FAssetData
{
    FName ObjectPath;
    FName PackageName;
    FName PackagePath;
    FName AssetName;
    FName AssetClass;

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

struct FBox
{
    FVector Min;
    FVector Max;
    uint8 IsValid;

};

struct FBox2D
{
    FVector2D Min;
    FVector2D Max;
    uint8 bIsValid;

};

struct FBoxSphereBounds
{
    FVector Origin;
    FVector BoxExtent;
    float SphereRadius;

};

struct FColor
{
    uint8 B;
    uint8 G;
    uint8 R;
    uint8 A;

};

struct FDateTime
{
};

struct FDefault__ScriptStruct
{
};

struct FFallbackStruct
{
};

struct FFloatInterval
{
    float Min;
    float Max;

};

struct FFloatRange
{
    FFloatRangeBound LowerBound;
    FFloatRangeBound UpperBound;

};

struct FFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    float Value;

};

struct FFrameNumber
{
    int32 Value;

};

struct FFrameNumberRange
{
    FFrameNumberRangeBound LowerBound;
    FFrameNumberRangeBound UpperBound;

};

struct FFrameNumberRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    FFrameNumber Value;

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

struct FGuid
{
    int32 A;
    int32 B;
    int32 C;
    int32 D;

};

struct FInt32Interval
{
    int32 Min;
    int32 Max;

};

struct FInt32Range
{
    FInt32RangeBound LowerBound;
    FInt32RangeBound UpperBound;

};

struct FInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;
    int32 Value;

};

struct FIntPoint
{
    int32 X;
    int32 Y;

};

struct FIntVector
{
    int32 X;
    int32 Y;
    int32 Z;

};

struct FInterpCurveFloat
{
    TArray<FInterpCurvePointFloat> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurveLinearColor
{
    TArray<FInterpCurvePointLinearColor> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurvePointFloat
{
    float InVal;
    float OutVal;
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurvePointLinearColor
{
    float InVal;
    FLinearColor OutVal;
    FLinearColor ArriveTangent;
    FLinearColor LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurvePointQuat
{
    float InVal;
    FQuat OutVal;
    FQuat ArriveTangent;
    FQuat LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurvePointTwoVectors
{
    float InVal;
    FTwoVectors OutVal;
    FTwoVectors ArriveTangent;
    FTwoVectors LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurvePointVector
{
    float InVal;
    FVector OutVal;
    FVector ArriveTangent;
    FVector LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurvePointVector2D
{
    float InVal;
    FVector2D OutVal;
    FVector2D ArriveTangent;
    FVector2D LeaveTangent;
    TEnumAsByte<EInterpCurveMode> InterpMode;

};

struct FInterpCurveQuat
{
    TArray<FInterpCurvePointQuat> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurveTwoVectors
{
    TArray<FInterpCurvePointTwoVectors> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurveVector
{
    TArray<FInterpCurvePointVector> Points;
    bool bIsLooped;
    float LoopKeyOffset;

};

struct FInterpCurveVector2D
{
    TArray<FInterpCurvePointVector2D> Points;
    bool bIsLooped;
    float LoopKeyOffset;

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

struct FLinearColor
{
    float R;
    float G;
    float B;
    float A;

};

struct FMatrix
{
    FPlane XPlane;
    FPlane YPlane;
    FPlane ZPlane;
    FPlane WPlane;

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

struct FPlane : public FVector
{
    float W;

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

struct FPrimaryAssetId
{
    FPrimaryAssetType PrimaryAssetType;
    FName PrimaryAssetName;

};

struct FPrimaryAssetType
{
    FName Name;

};

struct FQualifiedFrameTime
{
    FFrameTime Time;
    FFrameRate Rate;

};

struct FQuat
{
    float X;
    float Y;
    float Z;
    float W;

};

struct FRandomStream
{
    int32 InitialSeed;
    int32 Seed;

};

struct FRotator
{
    float Pitch;
    float Yaw;
    float Roll;

};

struct FSoftClassPath : public FSoftObjectPath
{
};

struct FSoftObjectPath
{
    FName AssetPathName;
    FString SubPathString;

};

struct FTestUninitializedScriptStructMembersTest
{
    class UObject* UninitializedObjectReference;
    class UObject* InitializedObjectReference;
    float UnusedValue;

};

struct FTimecode
{
    int32 Hours;
    int32 Minutes;
    int32 Seconds;
    int32 Frames;
    bool bDropFrameFormat;

};

struct FTimespan
{
};

struct FTransform
{
    FQuat Rotation;
    FVector Translation;
    FVector Scale3D;

};

struct FTwoVectors
{
    FVector v1;
    FVector v2;

};

struct FUniqueNetIdWrapper
{
};

struct FVector
{
    float X;
    float Y;
    float Z;

};

struct FVector2D
{
    float X;
    float Y;

};

struct FVector4
{
    float X;
    float Y;
    float Z;
    float W;

};

class IInterface : public UObject
{
};

class UArrayProperty : public UProperty
{
};

class UBoolProperty : public UProperty
{
};

class UByteProperty : public UNumericProperty
{
};

class UClass : public UStruct
{
};

class UClassProperty : public UObjectProperty
{
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

class UDelegateFunction : public UFunction
{
};

class UDelegateProperty : public UProperty
{
};

class UDoubleProperty : public UNumericProperty
{
};

class UDynamicClass : public UClass
{
};

class UEnum : public UField
{
};

class UEnumProperty : public UProperty
{
};

class UField : public UObject
{
};

class UFloatProperty : public UNumericProperty
{
};

class UFunction : public UStruct
{
};

class UGCObjectReferencer : public UObject
{
};

class UInt16Property : public UNumericProperty
{
};

class UInt64Property : public UNumericProperty
{
};

class UInt8Property : public UNumericProperty
{
};

class UIntProperty : public UNumericProperty
{
};

class UInterfaceProperty : public UProperty
{
};

class ULazyObjectProperty : public UObjectPropertyBase
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

class UMapProperty : public UProperty
{
};

class UMetaData : public UObject
{
};

class UMulticastDelegateProperty : public UProperty
{
};

class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
};

class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
};

class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
};

class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
};

class UNameProperty : public UProperty
{
};

class UNumericProperty : public UProperty
{
};

class UObject
{

    void ExecuteUbergraph(int32 EntryPoint);
};

class UObjectProperty : public UObjectPropertyBase
{
};

class UObjectPropertyBase : public UProperty
{
};

class UObjectRedirector : public UObject
{
};

class UPackage : public UObject
{
};

class UPackageMap : public UObject
{
};

class UProperty : public UField
{
};

class UPropertyWrapper : public UObject
{
};

class UScriptStruct : public UStruct
{
};

class USetProperty : public UProperty
{
};

class USoftClassProperty : public USoftObjectProperty
{
};

class USoftObjectProperty : public UObjectPropertyBase
{
};

class USparseDelegateFunction : public UDelegateFunction
{
};

class UStrProperty : public UProperty
{
};

class UStruct : public UField
{
};

class UStructProperty : public UProperty
{
};

class UTextBuffer : public UObject
{
};

class UTextProperty : public UProperty
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

#endif
