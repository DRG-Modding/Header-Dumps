#ifndef UE4SS_SDK_ITM_ServerEntry_TeamLine_HPP
#define UE4SS_SDK_ITM_ServerEntry_TeamLine_HPP

class UITM_ServerEntry_TeamLine_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* PlayerIcon;
    UTextBlock* PlayerText;
    FSlateFontInfo ResourceFont;
    UTexture2D* Icon;
    FLinearColor IconTint;
    FText Text;

    void SetPlayerData(UTexture2D* InIcon, FLinearColor InIconTint, FText Text);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_ServerEntry_TeamLine(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
