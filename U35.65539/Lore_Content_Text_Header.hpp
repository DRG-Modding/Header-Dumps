#ifndef UE4SS_SDK_Lore_Content_Text_Header_HPP
#define UE4SS_SDK_Lore_Content_Text_Header_HPP

class ULore_Content_Text_Header_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_BG_CutCorner_C* Basic_BG_Window_65;
    UImage* Image_Icon;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    USpacer* Spacer_Size;
    UTextBlock* TextBlock_Headline;
    float MinDesiredWidth;

    void SetData(FText Header Text, UTexture2D* Icon, FObjectiveMissionIcon MissionIcon);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Content_Text_Header(int32 EntryPoint, FText K2Node_CustomEvent_Header_Text, UTexture2D* K2Node_CustomEvent_Icon, FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon, FVector2D CallFunc_MakeVector2D_ReturnValue);
}

#endif
