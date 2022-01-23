#ifndef UE4SS_SDK_ITM_Refinery_Pipeline_HPP
#define UE4SS_SDK_ITM_Refinery_Pipeline_HPP

class UITM_Refinery_Pipeline_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Pipeline_BrokenIcon_C* BrokenIcon;
    class UImage* Pipeline_BG;
    class UImage* Pipeline_Filled;
    class UImage* Pipeline_Outline;
    class UTexture2D* ImageBackground;
    class UTexture2D* ImageFilled;
    class UTexture2D* ImageOutline;
    int32 BrokenIconSize;
    FMargin BrokenIconPadding;
    class APipelineStart* PipelineStart;

    void OnStateChanged(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState, EPipelineBuildState Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_4, EPipelineBuildState Temp_byte_Variable_5, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_6, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_7, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_8, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_9, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_1);
    void SetPipelineStart(class APipelineStart* InPipelineStart, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSetPipelineStartK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Refinery_Pipeline(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
