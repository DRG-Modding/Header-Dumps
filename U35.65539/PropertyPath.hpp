#ifndef UE4SS_SDK_PropertyPath_HPP
#define UE4SS_SDK_PropertyPath_HPP

struct UCachedPropertyPath
{
    TArray<FPropertyPathSegment> Segments;
    UFunction* CachedFunction;
}

struct UPropertyPathSegment
{
    FName Name;
    int32 ArrayIndex;
    UStruct* Struct;
}

#endif
