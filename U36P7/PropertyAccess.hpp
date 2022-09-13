#ifndef UE4SS_SDK_PropertyAccess_HPP
#define UE4SS_SDK_PropertyAccess_HPP

#include "PropertyAccess_enums.hpp"

class IPropertyAccess : public IInterface
{
};

class IPropertyEventBroadcaster : public IInterface
{
};

class IPropertyEventSubscriber : public IInterface
{
};

struct FPropertyAccessSegment
{
    FName Name;
    class UStruct* Struct;
    TFieldPath<FProperty> Property;
    class UFunction* Function;
    int32 ArrayIndex;
    uint16 Flags;

};

struct FPropertyAccessPath
{
    int32 PathSegmentStartIndex;
    int32 PathSegmentCount;
    uint8 bHasEvents;

};

struct FPropertyAccessCopy
{
    int32 AccessIndex;
    int32 DestAccessStartIndex;
    int32 DestAccessEndIndex;
    EPropertyAccessCopyType Type;

};

struct FPropertyAccessCopyBatch
{
    TArray<FPropertyAccessCopy> Copies;

};

struct FPropertyAccessIndirectionChain
{
    TFieldPath<FProperty> Property;
    int32 IndirectionStartIndex;
    int32 IndirectionEndIndex;
    int32 EventId;

};

struct FPropertyAccessIndirection
{
    TFieldPath<FArrayProperty> ArrayProperty;
    class UFunction* Function;
    int32 ReturnBufferSize;
    int32 ReturnBufferAlignment;
    int32 ArrayIndex;
    uint32 Offset;
    EPropertyAccessObjectType ObjectType;
    EPropertyAccessIndirectionType Type;

};

struct FPropertyAccessLibrary
{
    TArray<FPropertyAccessSegment> PathSegments;
    TArray<FPropertyAccessPath> SrcPaths;
    TArray<FPropertyAccessPath> DestPaths;
    FPropertyAccessCopyBatch CopyBatches;
    TArray<FPropertyAccessIndirectionChain> SrcAccesses;
    TArray<FPropertyAccessIndirectionChain> DestAccesses;
    TArray<FPropertyAccessIndirection> Indirections;
    TArray<int32> EventAccessIndices;

};

#endif
