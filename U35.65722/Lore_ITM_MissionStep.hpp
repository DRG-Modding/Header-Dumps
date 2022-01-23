#ifndef UE4SS_SDK_Lore_ITM_MissionStep_HPP
#define UE4SS_SDK_Lore_ITM_MissionStep_HPP

class ULore_ITM_MissionStep_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HoverZoom;
    class UButton* Button_Image;
    class UImage* Image_59;
    class UImage* Image_124;
    class UImage* Image_Header;
    class URichTextBlock* RichTextBlock_Headline;
    class UTextBlock* TextBlock_Headline;
    class UTextBlock* TextBlock_StepNumber;
    FMissionStepDescription StepInfo;
    FLore_ITM_MissionStep_COnHovered OnHovered;
    void OnHovered(FMissionStepDescription step, int32 StepIndex, int32 StepsInRow);
    FLore_ITM_MissionStep_COnUnhovered OnUnhovered;
    void OnUnhovered();
    int32 StepNumber;
    int32 StepsInRow;

    void BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void SetData(FMissionStepDescription step, int32 StepNumber, int32 StepsInRow);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_ITM_MissionStep(int32 EntryPoint, FMissionStepDescription K2Node_CustomEvent_Step, int32 K2Node_CustomEvent_StepNumber, int32 K2Node_CustomEvent_StepsInRow, int32 CallFunc_Subtract_IntInt_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_IntToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(FMissionStepDescription step, int32 StepIndex, int32 StepsInRow);
};

#endif
