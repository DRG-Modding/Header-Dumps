#ifndef UE4SS_SDK_PropertyPath_HPP
#define UE4SS_SDK_PropertyPath_HPP

struct FCachedPropertyPath
{
    TArray<FPropertyPathSegment> Segments;
    UFunction* CachedFunction;
}

struct FPropertyPathSegment
{
    FName Name;
    int32 ArrayIndex;
    UStruct* Struct;
}

#endif
