#ifndef UE4SS_SDK_ITM_RetirementBadge_HPP
#define UE4SS_SDK_ITM_RetirementBadge_HPP

class UITM_RetirementBadge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ICON_Badge;
    int32 Preview Times Retired;
    TArray<TSoftObjectPtr<UTexture2D>> SoftTextures;

    void GetTexture(int32 Index, class UTexture2D*& AsTexture 2D);
    void SetTimesRetired(int32 TimesRetired);
    void SetCharacterClass(class AFSDPlayerState* PlayerState, class UPlayerCharacterID* Character);
    void SelectIcon(int32 RetirementLevel, class UTexture2D*& Icon);
    void SetData(class AFSDPlayerState* Player);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_RetirementBadge(int32 EntryPoint);
};

#endif
