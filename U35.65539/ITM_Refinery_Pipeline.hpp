#ifndef UE4SS_SDK_ITM_Refinery_Pipeline_HPP
#define UE4SS_SDK_ITM_Refinery_Pipeline_HPP

class UITM_Refinery_Pipeline_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_Pipeline_BrokenIcon_C* BrokenIcon;
    UImage* Pipeline_BG;
    UImage* Pipeline_Filled;
    UImage* Pipeline_Outline;
    UTexture2D* ImageBackground;
    UTexture2D* ImageFilled;
    UTexture2D* ImageOutline;
    int32 BrokenIconSize;
    FMargin BrokenIconPadding;
    APipelineStart* PipelineStart;

    void OnStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState, EPipelineBuildState Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, EPipelineBuildState Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, uint8 Temp_byte_Variable_9, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_1);
    void SetPipelineStart(APipelineStart* InPipelineStart, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, PipelineStartStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Refinery_Pipeline(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
