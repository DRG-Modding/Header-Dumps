#ifndef UE4SS_SDK_OnScreenIndicator_PreAlphaTag_HPP
#define UE4SS_SDK_OnScreenIndicator_PreAlphaTag_HPP

class UOnScreenIndicator_PreAlphaTag_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* DRG_Logo;
    class UTextBlock* TextBuildId;

    void Construct();
    void ExecuteUbergraph_OnScreenIndicator_PreAlphaTag(int32 EntryPoint, FString CallFunc_GetProjectVersion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
