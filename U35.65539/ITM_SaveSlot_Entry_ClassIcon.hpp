#ifndef UE4SS_SDK_ITM_SaveSlot_Entry_ClassIcon_HPP
#define UE4SS_SDK_ITM_SaveSlot_Entry_ClassIcon_HPP

class UITM_SaveSlot_Entry_ClassIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* PlayerIcon;
    UTextBlock* Text_Star;
    FSlateFontInfo ResourceFont;
    UTexture2D* Icon;
    FLinearColor IconTint;

    void SetPlayerData(UTexture2D* InIcon, FLinearColor InIconTint);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
