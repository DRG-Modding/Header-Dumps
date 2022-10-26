#ifndef UE4SS_SDK_Lore_Content_Weaknesses_HPP
#define UE4SS_SDK_Lore_Content_Weaknesses_HPP

class ULore_Content_Weaknesses_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UHorizontalBox* HorizontalBox_IconHolder;
    class ULore_DamageTypeIcon_C* Lore_DamageTypeIcon;
    class ULore_DamageTypeIcon_C* Lore_DamageTypeIcon_191;
    class UTextBlock* TextBlock_Header;
    FText Text;
    bool HasFadedIn;
    int32 NumbOfIcons;

    void PreConstruct(bool IsDesignTime);
    void ClearChildren();
    void AddIcon(FDamageTypeDescription Icon);
    void PlayFade(bool Forward);
    void ExecuteUbergraph_Lore_Content_Weaknesses(int32 EntryPoint);
};

#endif
