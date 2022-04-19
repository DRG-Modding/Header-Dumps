#ifndef UE4SS_SDK_Cheat_SkinListItem_HPP
#define UE4SS_SDK_Cheat_SkinListItem_HPP

class UCheat_SkinListItem_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* NameOfSkin;
    class UButton* SkinActivationButton;
    class UImage* SkinImage;
    FCheat_SkinListItem_COnSkinEquipped OnSkinEquipped;
    void OnSkinEquipped(EItemCategory Category);
    class UItemSkin* ItemSkin;
    EItemCategory ItemCategory;
    bool IsEquipped;

    void BndEvt__SkinActivationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Setup Skin Selection Widget();
    void ExecuteUbergraph_Cheat_SkinListItem(int32 EntryPoint);
    void OnSkinEquipped__DelegateSignature(EItemCategory Category);
};

#endif
