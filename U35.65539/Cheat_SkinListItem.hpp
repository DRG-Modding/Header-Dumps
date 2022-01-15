#ifndef UE4SS_SDK_Cheat_SkinListItem_HPP
#define UE4SS_SDK_Cheat_SkinListItem_HPP

class UCheat_SkinListItem_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* NameOfSkin;
    UButton* SkinActivationButton;
    UImage* SkinImage;
    FCheat_SkinListItem_COnSkinEquipped OnSkinEquipped;
    void OnSkinEquipped(EItemCategory Category);
    UItemSkin* ItemSkin;
    EItemCategory ItemCategory;
    bool IsEquipped;

    void BndEvt__SkinActivationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Setup Skin Selection Widget();
    void ExecuteUbergraph_Cheat_SkinListItem(int32 EntryPoint, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetObjectClass_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, UItemSkin* CallFunc_GetEquippedSkin_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, TSubclassOf<UPlayerCharacter> CallFunc_GetObjectClass_ReturnValue_1, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue_1, UItemID* CallFunc_GetItemID_ReturnValue_1);
    void OnSkinEquipped__DelegateSignature(EItemCategory Category);
}

#endif
