#ifndef UE4SS_SDK_ITM_SaveSlot_Entry_ClassIcon_HPP
#define UE4SS_SDK_ITM_SaveSlot_Entry_ClassIcon_HPP

class UITM_SaveSlot_Entry_ClassIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* PlayerIcon;
    class UTextBlock* Text_Star;
    FSlateFontInfo ResourceFont;
    class UTexture2D* Icon;
    FLinearColor IconTint;
    class UPlayerCharacterID* PlayerCharacter;

    void SetPlayerData(class UTexture2D* InIcon, FLinearColor InIconTint);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon(int32 EntryPoint);
};

#endif
