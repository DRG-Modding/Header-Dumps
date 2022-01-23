#ifndef UE4SS_SDK_Lore_Container_WindowWithIcon_Right_HPP
#define UE4SS_SDK_Lore_Container_WindowWithIcon_Right_HPP

class ULore_Container_WindowWithIcon_Right_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UTextBlock* TextBlock_Headline;
    class UNamedSlot* WindowContent;
    FText Headline;
    class UTexture2D* Icon;
    FLinearColor IconTint;

    void SetText(FText Headline);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Container_WindowWithIcon_Right(int32 EntryPoint, FText K2Node_CustomEvent_Headline, bool K2Node_Event_IsDesignTime, FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon);
};

#endif
