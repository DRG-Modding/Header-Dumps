#ifndef UE4SS_SDK_LIB_LoaderImages_HPP
#define UE4SS_SDK_LIB_LoaderImages_HPP

class ULIB_LoaderImages_C : public UBlueprintFunctionLibrary
{

    void GetRandomSpacerigLoadImagePath(class UObject* __WorldContext, TSoftObjectPtr<UTexture>& Output);
};

#endif
