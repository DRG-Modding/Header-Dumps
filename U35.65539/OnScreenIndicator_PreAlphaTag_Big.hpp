#ifndef UE4SS_SDK_OnScreenIndicator_PreAlphaTag_Big_HPP
#define UE4SS_SDK_OnScreenIndicator_PreAlphaTag_Big_HPP

class UOnScreenIndicator_PreAlphaTag_Big_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* DRG_Logo;
    UTextBlock* TextBuildId;

    void Construct();
    void ExecuteUbergraph_OnScreenIndicator_PreAlphaTag_Big(int32 EntryPoint, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_GetProjectVersion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
