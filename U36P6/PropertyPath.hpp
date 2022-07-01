#ifndef UE4SS_SDK_PropertyPath_HPP
#define UE4SS_SDK_PropertyPath_HPP

struct FPropertyPathSegment
{
    FName Name;
    int32 ArrayIndex;
    class UStruct* Struct;

};

struct FCachedPropertyPath
{
    TArray<FPropertyPathSegment> Segments;
    class UFunction* CachedFunction;

};

#endif
