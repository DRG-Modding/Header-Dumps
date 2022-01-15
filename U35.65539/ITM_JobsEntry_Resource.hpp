#ifndef UE4SS_SDK_ITM_JobsEntry_Resource_HPP
#define UE4SS_SDK_ITM_JobsEntry_Resource_HPP

class UITM_JobsEntry_Resource_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_Level;
    UImage* Icon;
    UTexture2D* Texture;
    FLinearColor Tint;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 RequiredLevel);
    void ExecuteUbergraph_ITM_JobsEntry_Resource(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_RequiredLevel, FText CallFunc_Conv_IntToText_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
