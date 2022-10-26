#ifndef UE4SS_SDK_ITM_ServerEntry_TeamLine_HPP
#define UE4SS_SDK_ITM_ServerEntry_TeamLine_HPP

class UITM_ServerEntry_TeamLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* PlayerIcon;
    class UTextBlock* PlayerText;
    class UTexture2D* Icon;
    FLinearColor IconTint;
    FText Text;

    void SetPlayerData(class UTexture2D* InIcon, FLinearColor InIconTint, FText Text);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_ServerEntry_TeamLine(int32 EntryPoint);
};

#endif
