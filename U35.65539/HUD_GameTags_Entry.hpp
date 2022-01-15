#ifndef UE4SS_SDK_HUD_GameTags_Entry_HPP
#define UE4SS_SDK_HUD_GameTags_Entry_HPP

class UHUD_GameTags_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* BranchText;
    UImage* Image_Background;
    UImage* Image_Outline;
    FText TagName;

    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void SetVisible(bool InVisible);
    void ExecuteUbergraph_HUD_GameTags_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_CustomEvent_InVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
}

#endif
