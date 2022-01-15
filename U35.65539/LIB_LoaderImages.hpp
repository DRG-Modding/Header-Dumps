#ifndef UE4SS_SDK_LIB_LoaderImages_HPP
#define UE4SS_SDK_LIB_LoaderImages_HPP

class ULIB_LoaderImages_C : UBlueprintFunctionLibrary
{

    void GetRandomSpacerigLoadImagePath(UObject* __WorldContext, SoftObjectProperty& Output, FSpacerigLoaderImages Images, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, SoftObjectProperty CallFunc_Array_Get_Item);
}

#endif
